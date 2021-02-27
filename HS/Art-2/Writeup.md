## Solution
chctf{h@RD3r?}

## Solving
The image is one again a program in piet, however this time there are varius changes 
outlined below that prevent the program from running correctly. Competitors will
have to identify each of these issues and change them to restore functionaliy.
Upon running the repaired program the flag will be output. Note that any image editor
should work for repairing the program provided the user uses the correct color values.
The middle area of the program has no bearing on its performance. 

Once again a piet interpreter is critical to obtaining the flag

The changes to the image are as follows:

Let the top left corner of the image be 0,0
(15,0) and (15,1) changed from light red (push) to cyan (switch)

Block around(49,0) changed from dark blue (push) to red (divide)

Column starting at (48,25) to (48,41) changed from green to yellow

Terminating black block at (0,24) missing, this prevents the program from terminating

The light blue block at (0,27) is giving out(int) when it should be blue for out(char)
    * Note: This doesn't need to be fixed in order to obtain the answer, competitors would need to realize this is an ascii value and adjust the value accordingly.

The light yellow block at (11,49) is in(num) when it should be dark cyan for push

The correct image can be found as `Art2 ANSWER.png`