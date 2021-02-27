#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encode_2(unsigned char *input, unsigned char *flag)
{
        /* Encoded flag is semi-hidden */
        char flag_array[] = {'\xe7', '\xd4', '\xe7', '\xe8', '\xe2', '\xe7', '\xe0',
                '\x2c', '\xcb', '\xc8', '\xbc', '\xb9', '\xcb', '\xda', '\xd1', '\xd2',
                '\xe7', '\xc8', '\xdd', '\xb3', '\xda', '\xc3', '\x31', '\xb4', '\xf1',
                '\xba', '\xc2', '\xd0', '\x37', '\x1d', '\xe9', '\n'};
        snprintf(flag, (sizeof(char) * 32), "%s", flag_array);  // Safe string copying ;)

        unsigned int p = strlen(input);
        unsigned char *tmp;
        for (unsigned int i = 0; i < p; ++i) {
                tmp = input + i;
                *tmp -= 'L';
        }
}

void encode_1(unsigned char *input, unsigned char *flag)
{
        unsigned int p = strlen(input);
        unsigned char *tmp;
        for (unsigned int i = 0; i < p; ++i) {
                tmp = input + i;
                *tmp = *tmp ^ 'L';
        }

        encode_2(input, flag);  // Sneaky redirection
}

void encode_3(unsigned char *input)
{
        unsigned int p = strlen(input);
        unsigned char *tmp;
        for (unsigned int i = 0; i < p; ++i) {
                tmp = input + i;

                switch (i % 2) {
		case 0:
			*tmp += 4;
			break;
		case 1:
                	*tmp -= 4;
                }
        }
}

int main(int argc, char **argv)
{
        if (argc != 2) {
                printf("usage: ./switched_up [flag]\n");
                exit(-1);
        }

        unsigned char *flag = malloc(256);
        unsigned char *input = malloc(256);
        snprintf(input, (sizeof(char) * 256), "%s", argv[1]); // Safe string copying ;)

        encode_1(input, flag);
        encode_3(input);

        if (strncmp(input, flag, 31) == 0)
		printf("you found the flag ..\nnice >:]\n");
        else
		printf("try again!\n");
		
        free(input);
        free(flag);
        exit(0);
}
