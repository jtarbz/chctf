# CTFDestruction
### 75 Points
## Prompt
Oh no! Apparently CTFD, the software we're using to host this competition, has a security vulnerability!!! I have no idea what it entails or where to find info on it, but I do have this reference number: 7245. Luckily I think it doesn't affect us since it's 2021, but if it was last year we might've had some problems. If you could find the ID of this bug so we can make sure it's squelched, that would be great! Put the ID in chctf{} format.

## Hint
Where are commonly discovered vulnerabilties and exposures listed?

## Walkthrough
After doing some digging, there is a directory of common culnerabilities and exposures known as CVE. Simply find the CVE entry for a ctfd vulnerability by either searching
ctfd in the search bar, or by looking for ID number 7245 in the year 2020 given the prompt's clues. That will lead you to this link: https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2020-7245
Simply grab the full ID as it appears and wrap it in the chctf{} wrapper for the complete flag

### Flag
chctf{CVE-2020-7245}
