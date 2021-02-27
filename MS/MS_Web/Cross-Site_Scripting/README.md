# Cross Site Scripting (XSS)
### 50 Points Per Question
## Prompt
Cross-Site Scripting, also known as XSS, is a major vulnerability in certain web frameworks and applications that allows someone to execute malicious code on a site which opens up the user to a near endless stream of attacks.
Answer the questions after reading more about it here: https://owasp.org/www-community/attacks/xss/
### Questions
Choose the best answer!!!
#### Question 1
What type of malicious content is often sent to the website? 

A. User passwords

B. Code that the browser can execute

C. Memory Dumps

D. Pull Requests

#### Question 2
What is Type-I XSS?

A. Stored XSS attacks where the injected script is reflected off the web server

B. Non-Persistent XSS where the injected script is permanently stored on the target servers

C. A special kind of DOM Based XSS relying on only HTML vulnerabilities

D. Stored XSS attacks where the injected script is permanently stored on the target servers

#### Question 3

Which of the following are valid rules for preventing XSS?

A. Never Insert Untrusted Data Except in Allowed Locations

B. HTML Encode Before Inserting Untrusted Data into HTML Element Content

C. Avoid JavaScript URLs

D. All of the Above
## Walkthrough
#### Question 1
Passwords are not malicious content, memory dumps are not usually sent to a website, and pull requests are for project/repository management systems such as Git and not malicious at all.
Therefore the best answer is B, since malicious code that the browser can execute is the definition of XSS.

#### Question 2
A. has the definition of Type-II/Reflected XSS with the name of Type-I attached, therefore it is wrong. B is the same sort of deal except Type-I's definition is mixed up with Type-II's name.
C is simply made up, it is just a bunch of keywords thrown together. Therefore, D is the correct answer.

#### Question 3
All of the above are good rules to abide by, refer to this link for a list of all of them: https://cheatsheetseries.owasp.org/cheatsheets/Cross_Site_Scripting_Prevention_Cheat_Sheet.html

## Answers
1. B

2. D

3. D
