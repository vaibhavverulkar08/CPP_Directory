// To print the address of any variable, a user can use the "&" operator.
#include <iostream>
using namespace std;
int main()
{
    // Declare a Variable:
    int a;
    int *pt;
    cout << " CPP-Pointer Example Program: TO Print Pointer Address\n";
    a = 10;
    pt = &a;
    cout << "\n[a  ]:Value of A = " << a;
    cout << "\n[*pt]:Value of A = " << *pt;
    cout << "\n[&a ]:Address of A = " << &a;
    cout << "\n[pt ]:Address of A = " << pt;
    cout << "\n[&pt]:Address of pt = " << &pt;
    cout << "\n[pt ]:Value of pt = " << pt;
    return 0;
}