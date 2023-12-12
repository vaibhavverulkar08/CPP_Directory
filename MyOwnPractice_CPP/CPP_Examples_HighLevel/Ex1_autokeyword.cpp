// C++ program to demonstrate 
// working of auto keyword 
#include <bits/stdc++.h>
using namespace std;
 // namespace std;
int main()
{
// variables
auto an_int =26;
auto a_bool=false;
auto a_float=26.24;
auto ptr= &a_float;
// print typeid
cout<< typeid(a_bool).name()<<"\n";
cout<< typeid(an_int).name()<<"\n";
return 0;
}
