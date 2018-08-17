//first include the library
#include <iostream>
using namespace std;
//write the main function
int main()
{
//declaration and output of data types
//integer
int a=5;
cout << a <<endl;
//float(decimal)
float b=3.14;
cout << b <<endl;
//character
char c=1;
cout << c <<endl;
//boolean value
bool d=a==b;
cout << d <<endl;
//double precision floating point number
double e=7.76e300;
//printing out sizes of various data types
cout << e <<endl;
cout << sizeof(int)<< endl;
cout << sizeof(float)<< endl;
cout << sizeof(char)<< endl;
cout << sizeof(bool)<< endl;
cout << sizeof(double)<< endl;
return 0;
}



