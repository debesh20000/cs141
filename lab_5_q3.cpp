//include the library
#include <iostream>
using namespace std;
//write main function
int main()
{
	// declaration of variables
	float a;
	// asking for input
	cout << "enter the number"<< endl;
	cin >> a;
	// deploy condition and display result
	if (a > 0 )
		{
		 cout << a <<" is positive  "<<endl;
		} 
	else if  (a == 0)
		{
		 cout << a <<" is 0 "<<endl;
		} 
	else cout << a <<" is negative "<<endl; 
		

return 0;
}
