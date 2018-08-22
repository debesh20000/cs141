//include the library
#include <iostream>
using namespace std;
//write main function
int main()
{
// declaration of variables
float a,b,c;
//asking value for variable
cout << "enter the base of the triangle " <<endl;
// getting value from terminal
cin >> b;
cout << "enter the height of the triangle " <<endl;
cin >> c;
//using the required formula
a=0.5*b*c;
//displaying the values
cout << "the area of the triangle is " << a <<"unit^2 "<< endl;
return 0;
}
