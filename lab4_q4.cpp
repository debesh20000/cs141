//include the library
#include <iostream>
using namespace std;
//write main function
int main()
{
// declaration of variables
int a,b,c,d;
//asking value for variable
cout << "enter the number of days " <<endl;
cin >> a;
//using the required formula
b=a/365;
c=(a-b*365)/7;
d=a-(b*365)-(c*7);
//displaying the values
cout << a << " days is " << b << " years "<< c << " weeks " << d << " days" <<endl;
return 0;
}
