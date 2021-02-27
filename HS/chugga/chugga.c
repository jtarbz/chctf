#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
        char flag[30] = "djdvg}UTA3o\\`Bs5`g4R2M\"#23\"#~";     // chctf{TR@1nZ_@r3_e3P1K!!11!!}
        flag[29] = '\0';

        if (argc != 2) {
                fprintf(stderr, "i liek wun argyoumint!1!1!!1\n");
                exit(1);
        }

        /* cycle through elements in argv[1]. if the element is even, +=1; if it is odd, +=2 */
        for (int i = 0; i < strlen(argv[1]); ++i) {
                if (i % 2 == 0)
			argv[1][i] += 1;
                else
			argv[1][i] += 2;
        }

        printf("da trane iz %s\n", argv[1]);

        if (strcmp(flag, argv[1]) == 0)
		printf("u did mae trian rite!!11! :D\n");
        else
		printf("u didn't due ma treyn ryt ... :(\n");
		
        exit(0);
}
