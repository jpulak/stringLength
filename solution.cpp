//program for finding different things about the same phrase

#include <iostream>
#include <string>
using namespace std;

int main()
{
   
   //initializing variables
   
   string phrase;
   int charcount;
   char firstchar;
   char lastchar;
   
   //get inputted phrase
   
   cout << "Enter a phrase" << endl;
   getline(cin, phrase); // take in all the white-space
   
   //calculate different results
   
   charcount = phrase.length();
   firstchar = phrase.at(0);
   lastchar = phrase.at(charcount - 1);
   
   //output asked results
   
   cout << "Entered phrase: " << phrase << endl;
   cout << "Phrase length: " << charcount << endl;
   cout << "The first character of the phrase: " << firstchar << endl;
   cout << "The last character of the phase: " << lastchar << endl; //typo for phrase
   return 0;
}
