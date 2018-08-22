//include the library
#include <iostream>
using namespace std;
//write main function
int main()
{
// declaration of variables
float a,b;
//asking value for variable
cout << "enter the temperature in celsius" <<endl;
// getting value from terminal
cin >> b;
//using the required formula
a= b*1.8 + 32;
//displaying the values
cout << "the temperature in fahrenheit is " << a <<"F"<< endl;
return 0;
}
