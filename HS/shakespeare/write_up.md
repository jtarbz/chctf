# rundown
This is a pretty basic reversing challenge, with the added difficulty of the encryption being written in [Shakespearelang](http://shakespearelang.sourceforge.net/) (SPL). The program changes the ascii value of each character by an offset, which starts at -1, then goes to 2, -4, 8, and so on, after every four characters.

# steps

1) figure out what the code actually is. Teams should be able to do this pretty easily by searching something like "shakespeare programming language"

2) reverse-engineer the encryption. There exists a couple of tools to run it, notably a python interpreter which runs it and a converter from SPL to C, which is probably an easier way to solve it for those running linux. It's also possible to reverse it possible simply by reading documentation and figuring out what it's doing.

The flag for this challenge is `CHCTF{L33tPl4YWRite}`
