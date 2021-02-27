/*
 * convert ascii binary to a chucK script for base-4 amencoding
 * 
 * unlike the fm compiler, we will only take pulse duration (ms) as an arg
 *
 * the quaternary input for conversion should be provided
 * via stdio (EX. cat file |./compchuck arg1)
 */

#include <stdio.h>
#include <stdlib.h>

void append_note(float amp, float dur, FILE *out)
{
	static float last_amp = 0;

	if (amp != last_amp) fprintf(out, "Std.dbtorms(%f) => s.gain;\n", amp);
	fprintf(out, "%f::ms => now;\n", dur);

	last_amp = amp;
	return;
}

int main(int argc, char **argv)
{
	float dur;
	char val;
	FILE *out;

	if ((out = fopen("./flag.ck", "w")) < 0) {
		perror("guru meditation");
		exit(1);
	}

	dur = atof(argv[1]);

	fprintf(out, "SinOsc s => dac;\n528 => s.freq;\n");

	while ((val = getchar()) != EOF) {
		if (val == ' ' || val == '\n' || val == '\t') {
			append_note(0, dur, out);
			continue;
		}
		val = atoi(&val);
		switch (val) {
		case 0:
			append_note(50, dur, out);
			break;
		case 1:
			append_note(55, dur, out);
			break;
		case 2:
			append_note(60, dur, out);
			break;
		case 3:
			append_note(65, dur, out);
		default:
		}
	}

	fclose(out);
	exit(0);
}
