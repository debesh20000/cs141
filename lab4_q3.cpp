//include the library
#include <iostream>
using namespace std;
//write main function
int main()
{
// declaration of variables
float a,b,c,d;
//asking value for variable
cout << "enter the temperature in fahrenheit" <<endl;
// getting value from terminal
cin >> b;
//using the required formula
a= b-32;
c=a*5;
d=c/9;
//displaying the values
cout << "the temperature in fahrenheit is " << d <<" degree celsius"<< endl;
return 0;
}
