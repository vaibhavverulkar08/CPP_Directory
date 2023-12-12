// C++ program to demonstrate getline() function 
  
#include <iostream> 
#include <string> 
using namespace std; 
  
int main() 
{ 
    string str; 
  
    cout << "Please enter your name: \n"; 
    getline(cin, str); 
    cout << "Hello, " << str 
         << " welcome to My Website !\n"; 
  
    return 0; 
} 

