# stringLength
General Information – Two String Member Functions:
Every string object has a member function length which returns the number of characters in the string. The period (dot) is the membership operator. We are calling the length member function to count the characters in the string stored in name in the segment below.

Example:
```
string name;

name = "San Antonio";

int charCount;

charCount = name.length(); // Assigns 11 to charCount
```
Every string object has a member function at which returns the character at the specified position in a string. The desired position is passed to the function inside its parentheses. The positions are offsets. The first character of the string is at offset 0. It is 0 away from the first character of the string. The period (dot) is the membership operator. We are call the at function to get the first character of the string name in the segment below.
```
Example:

string name;

name = "San Antonio";

char firstChar, secondChar;

firstChar = name.at(0); // Assigns S to firstChar
secondChar = name.at(1); // Assigns a to secondChar
```
General Description:
In the Zylab’s editor:

Write a program that gets a text phrase from the user and displays the following in order on separate lines: the phrase entered, the number of characters in the entered phrase, the first character of the entered phrase, and the last character of the entered phrase.

Your output should closely match the sample shown below.

Sample output:
```
Enter a phrase
every good boy does fine.
Entered phrase: every good boy does fine.
Phrase length: 25
The first character of the phrase: e
The last character of the phase: .
