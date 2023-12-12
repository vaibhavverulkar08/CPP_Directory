// C++ program to print name as output 
#include<iostream>
using namespace std;

//Driver Code:
int main()
{
    //Declaring a String variable to store input data in the form of String.

    string name;

    //here we will take input data from user. i.e. user's name:

    cout<<"Enter your name"; 
    cin>>name; 

    //printing the entered user same data in the console.

    cout<<"Your Name is : "<<name;
    return 0;

    //here : try this
    //If you entered input multiple words like: Sachin Tendulkar, 
    // It will print only first word i.e. Sachin.
    
    // To overcome we will use getline() function ,
}
