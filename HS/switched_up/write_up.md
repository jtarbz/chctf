# rundown
This challenge tests reverse-engineering ability by presenting the competitor
with a stripped binary. This binary encodes some flag entered through its first
argument, and then compares the resulting data with the result of the
pre-encoded solution to the challenge. This process is made more difficult to
complete, however, due to the misdirections in the way which the binary
is structured. They are as follows:

    * Of the three encoding functions, the call to one of them is hidden within
        another, and does not appear within the `main` function. This is
        accomplished by passing the pointers to the strings that the functions
        do work on.
    * The encoded version of the flag is stored as a byte array and properly declared
        within that 'hidden function'. As such, the competitor must be able to
        recognize that declaration as aberrant and then do the work to decode
        it based on the algorithms used in the three encoding functions.

# steps
1) Analyze the binary; this can be done via command line tools or through a more
    complete reversing environment. For this purpose, the CHCTF team suggests
    the use of Cutter, the official GUI for radare2, as it offers a robust and
    elegant reverse-engineering and debugging suite.
2) Reverse-engineer each function of the binary, starting from `main`. Keep in
    mind the difficulties presented above when analyzing these functions. This
    process can be completed through the use of either a disassembler or a
    decompiler; Cutter offers both and it is *recommended* to use them in
    concert for a more comprehensive view of how the binary works.

# extra
See the included source code for reference; the flag for this challenge is:
`chctf{d0_THE_fUncTiOn_5HuFFl3!}`.
