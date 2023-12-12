/*
From the example -Ex-StringMultipleWords , you would expect the program to print "John Doe", but it only prints "John".
That's why, when working with strings, we often use the getline() function to read a line of text.
 It takes cin as the first parameter, and the string variable as second:
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
  string fullName;
  cout << "Type your full name: ";
  getline (cin, fullName);
  cout << "Your name is: " << fullName;
  return 0;
}
