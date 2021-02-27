# rundown
This challenge tests reverse engineering ability by presenting its challenger
with a simple, one-function binary. The binary is not stripped or obfuscated.
When given input in the form of an argument, the binary transforms the argument
according to a set algorithm, compares the transformed result to a hard-coded
transformed version of the flag, and then indicates to the challenger whether
or not the input they provided was the correct flag.

The algorithm works as follows:

        * Elements of the input whose indices are even have their value
                incremented by 1.
        * Elements of the input whose indices are odd have their value
                incremented by 2.

# steps
1) Analyze the binary; this can be done via command line tools or through a more
    complete reversing environment. For this purpose, the CHCTF team suggests
    the use of Cutter, the official GUI for radare2, as it offers a robust and
    elegant reverse-engineering and debugging suite.
2) Reverse-engineer the `main` function of the binary. This
    process can be completed through the use of either a disassembler or a
    decompiler; Cutter offers both and it is *recommended* to use them in
    concert for a more comprehensive view of how the binary works.

# extra
See the included source code for reference; the flag for this challenge is:
`chctf{TR@1nZ_@r3_e3P1K!!11!!}`.