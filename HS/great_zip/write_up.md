# rundown
This challenge consists of a corrupt GZIP file, which contains compressed data for a JPEG
image which contains the flag. In order to retrieve the flag, it is necessary to recover
the original JPEG.

# steps
1) Diagnose what errors exist in the corrupted file's structure. The specification for
the GZIP file format can be found [here](https://tools.ietf.org/html/rfc1952). Such
analysis is best done using a hex editor. Any will work, but I personally recommend
[tweak](https://linux.die.net/man/1/tweak) for Linux.

2) Fix the errors - upon diagnosis it will become evident that the compression byte,
the flag byte, both bytes of the file magic, and the null terminator for the compressed
file name are all corrupt. In addition, the cyclic-redundancy-check value at the end
of the file is not correct. A hex editor can be used to correct values or test possible
solutions.

3) Even after fixing all of the other problems, `gunzip` will not work because the CRC,
which is based on the uncompressed data, has been corrupted. It will therefore be necessary
to use an invocation like `gzip -dc <flag.jpg.gz >flag.jpg` in order to decompress the file
while also ignoring the CRC value.

# extra
The flag for this challenge is `chctf{gnu_rms_zip_compression}`, and can be
viewed in `sample_flag.jpg`.
