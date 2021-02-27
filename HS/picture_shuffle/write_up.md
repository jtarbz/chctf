# rundown
This challenge tests its solver's understanding of file structure and ability to manipulate raw data. It consists of a rather standard forensics
challenge encapsulated in a PNG file, with the top and bottom ends of that PNG file having been flipped. Thusly, the "bottom" portion of the file's
raw data is placed before the "top" portion of the file's raw data, corrupting the file.

# steps
1) Locate the header of the original PNG file, which can be identified by the sequence of bytes `89 50 4e 47`. It should be located at offset 5000.

2) Having discovered this, carve out the original "top" portion of the file, and then append the original "bottom" half of the file to it. This can
be easily accomplished by using `tail -c` and `head -c`, and redirecting standard output to append to a file.

# extra
The flag for this challenge is `chctf{p1cTUr3_UPSIDE_d0wn}`
