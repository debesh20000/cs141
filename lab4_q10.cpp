//include the library
#include <iostream>
#include <math.h>
using namespace std;
//write main function
int main()
{
// declaration of variables
float a,b,c,d,e,f,g,h,k;
//asking value for variable
cout << "enter the principal amount" <<endl;
// getting value from terminal
cin >> b;
cout << "enter the time period in years " <<endl;
cin >> c;
cout << "enter the rate of interest per annum " <<endl;
cin >> d;
cout << "enter the number of times interest is compounded per annum " <<endl;
cin >> e; 
//using the required formula
f= (1+d/(100*e));
g= c*e;
h= pow(f,g);
k=b*h;
a= k-b;
//displaying the values
cout << "the simple interest in "<<c<<" years is " << a << endl;
return 0;
}
