# rundown
This challenge is a two-for-one type of deal. The PNG file itself is corrupted, and must be fixed. Once that is done, the image must
be analyzed in order to find the flag, which is hidden in the background by using slightly-altered color values.

# steps
1) Determine how the PNG file has been corrupted. Although you could reference the [PNG specification](http://www.libpng.org/pub/png/spec/1.2/PNG-Structure.html)
and find the problem by hand, it is far easier to use a tool like `pngcheck` to diagnose the problem. The name of the first `IDAT` chunk has been changed to
`IDAt`, which renders all image processors unable to load the file. Neat!
2) Having fixed the file, it is necessary to perform an analysis of the background colors to find the flag. The easiest way to do this is with the "magic wand"
tool, having set the threshold to 0.

# extra
The flag for this challenge is `chctf{haha_fUNNy_wH33zErr}`