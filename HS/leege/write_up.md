# rundown
This challenge consists of a simple gzip archive hidden inside of a jpeg file. The challenger must isolate the gzip data and then simply unzip it.

# steps
1) Determine the location of the gzip data in the image. This can either be done by looking for the gzip file header or by using a utility such as `binwalk`.

2) Extract the gzip data and then unzip the archive to find the flag.

# extra
The flag for this challenge is `chctf{thats_MAMA_Lu1gI_2_u1}`