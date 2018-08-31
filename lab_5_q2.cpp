//include the library
#include <iostream>
using namespace std;
//write main function
int main()
{
	// declaration of variables
	float a,b,c;
	// asking for input
	cout << "enter the first number"<< endl;
	cin >> a;
	cout << "enter the second number"<< endl;
	cin >> b ;
	cout << "enter the third number"<< endl;
	cin >> c ;
	// deploy condition and display result
	if (a > b  && a > c)
		{
		 cout << a <<" is the maximum number "<<endl;
		} 
	else if  (b > a  && b > c)
		{
		 cout << b <<" is the maximum number"<<endl;
		} 
	else if  (b == a  && b == c)
		{
		 cout <<" all are equal "<<endl;
		} 
	else cout << c <<" is the maximum number"<<endl; 
		

return 0;
}
