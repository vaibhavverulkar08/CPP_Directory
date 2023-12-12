#include<iostream>
#include<string>
using namespace std;
int main(){
string fullName;
cout << "Type your full name: ";
cin >> fullName;
cout << "Your name is: " << fullName;
return 0;
}

//If you entered input multiple words like: Sachin Tendulkar, 
// It will print only first word i.e. Sachin.

