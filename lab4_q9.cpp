//include the library
#include <iostream>
using namespace std;
//write main function
int main()
{
// declaration of variables
float a,b,c,d;
//asking value for variable
cout << "enter the principal amount" <<endl;
// getting value from terminal
cin >> b;
cout << "enter the time period in years " <<endl;
cin >> c;
cout << "enter the rate of interest per annum " <<endl;
cin >> d;
//using the required formula
a=(b*c*d)/100;
//displaying the values
cout << "the simple interest in "<<c<<" years is " << a << endl;
return 0;
}
