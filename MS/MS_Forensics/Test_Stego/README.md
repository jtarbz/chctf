# Test Steganography
### 75 Points
## Prompt
I'm really nervous about my upcoming PE final exam, my friend sent me an answer key, but I don't know if it's legit or not. Can you tell that this is legit? Flag is in chctf{} format.

## Hint:

How can you see the data in a .png file?

## Flag:

chctf{Ch3Aters_N3ver_Prosp3r}

## Walkthrough:

The .png seems normal, but upon opening it in a hex editor, you can see the flag all the way after the image has ended, just search for chctf{} in the find function of your hex editor.
