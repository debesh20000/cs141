//include the library
#include <iostream>
using namespace std;
//write main function
int main()
{
// declaration of variables
float a,b,c;
//asking value for variable
cout << "enter the first angle of the triangle in degrees" <<endl;
// getting value from terminal
cin >> b;
cout << "enter the second angle of the triangle in degrees" <<endl;
cin >> c;
//using the required formula
a=180-b-c;
//displaying the values
cout << "the third angle of the triangle is " << a <<" degree"<< endl;
return 0;
}
