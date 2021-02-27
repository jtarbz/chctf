/*
 * convert ascii binary to a chucK script for fm encoding
 * 
 * there's a lot of room to play around here ... 
 * arguments for this example will only be starting
 * frequency and pulse duration
 *
 * the binary input for conversion should be provided
 * via stdio (EX. cat file |./compchuck arg1 arg2)
 */

#include <stdio.h>
#include <stdlib.h>

void append_note(float freq, float dur, FILE *out)
{
	static float last_freq = 0;

	if (freq != last_freq) fprintf(out, "%f => s.freq;\n", freq);
	fprintf(out, "%f::ms => now;\n", dur);

	last_freq = freq;
	return;
}

int main(int argc, char **argv)
{
	float freq;
	float dur;
	char val;
	FILE *out;

	if ((out = fopen("./flag.ck", "w")) < 0) {
		perror("guru meditation");
		exit(1);
	}

	freq = atof(argv[1]);
	dur = atof(argv[2]);

	fprintf(out, "SinOsc s => dac;\n");

	while ((val = getchar()) != EOF) {
		if (val == ' ' || val == '\n' || val == '\t') continue;
		val = atoi(&val);
		append_note(!val ? freq : (freq * 1.4), dur, out);
	}

	fclose(out);
	exit(0);
}
