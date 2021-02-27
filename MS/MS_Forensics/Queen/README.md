# Queen
### 200 Points
## Prompt
Hmmm, somebody seems to have leaked the name of the new Queen track, only issue is the zip file seems to be password protected, can you find a way to crack the password?
## Hint
We will, we will... What is the significance of these completed lyrics? (Try googling them with emphasis on password cracking)
## Walkthrough
You need to use a password cracker to crack the zip file hash, something like John the Ripper, hashcat, or an online one will suffice. The RockYou.txt wordlist significantly helps
and the password is near the top of the list since it is literally password123, any cracker with the wordlist will solve this in mere seconds. Simply input password123 into the zip
file and open the text file for the flag
### Flag
chctf{Bohem1an_RhAps0dy}
