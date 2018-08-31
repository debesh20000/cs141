//include the library
#include <iostream>
using namespace std;
//write main function
int main()
{
	// declaration of variables
	int a;
	// asking for input
	cout << "enter the year"<< endl;
	cin >> a;
	// deploy condition and display result
	if (a % 4 == 0 && a % 100 !=0 or a % 400 == 0 )
		{
		 cout << a <<" is a leap year "<<endl;
		} 
	else cout << a <<" is not a leap year "<<endl; 
		

return 0;
}
