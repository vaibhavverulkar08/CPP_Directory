#include<iostream>
using namespace std; // namespace std;
int main()
{
    // Switchcase Example - Weekday number to calculate the weekday name:
    int day=3;
    switch (day)
    {
    case 1:
        cout<<"Monday";
        break;
    case 2:
        cout<<"Tuesday";
        break;
    case 3:
        cout<<"Wednesday";
        break;
    case 4:
        cout<<"Thursday";
        break;
    case 5:
        cout<<"Friday";
        break;
    case 6:
        cout<<"Saturday";
        break;
    case 7:
        cout<<"Sunday";
        break;
    
    default:
        break;
    }

   return 0; 
} 

