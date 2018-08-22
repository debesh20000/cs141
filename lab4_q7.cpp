//include the library
#include <iostream>
#include <math.h>
using namespace std;
//write main function
int main()
{
// declaration of variables
float a,b,c;
//asking value for variable
cout << "enter length of side of the equilateral triangle " <<endl;
// getting value from terminal
cin >> b;
//using the required formula
c=sqrt(3);
a=c/4*b*b;
//displaying the values
cout << "the area of the triangle is " << a <<" unit^2 "<< endl;
return 0;
}
