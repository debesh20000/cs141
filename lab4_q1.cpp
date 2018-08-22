//include the library
#include <iostream>
using namespace std;
//write main function
int main()
{
// declaration of variables
float a,b,c;
float result;
// assigning values to variables
a=0.01;
b=0.00001;
//asking value for variable
cout << "enter the length in cm" <<endl;
// getting value from terminal
cin >> c;
//using the required formula
result= c*a;
//displaying the values
cout << "the length in meter is " << result <<"m"<< endl;
result = c*b;
cout << "the length in kilometer is " << result <<"km"<< endl;
return 0;
}
