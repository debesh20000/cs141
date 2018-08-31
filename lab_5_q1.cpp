//include the library
#include <iostream>
using namespace std;
//write main function
int main()
{
	// declaration of variables
	float a,b;
	// asking for input
	cout << "enter the first number"<< endl;
	cin >> a;
	cout << "enter the second number"<< endl;
	cin >> b ;
	// deploy condition and display result
	if (a > b)
		{
		 cout << a <<" is maximum between a and b"<<endl;
		} 
	else if (a==b)
		{
		 cout << " both numbers are equal"<<endl;
		}
	else cout << b <<" is maximum between a and b"<<endl; 
		

return 0;
}
