//include the library
#include <iostream>
using namespace std;
//write main function
int main()
{
	// declaration of variables
	int a;
	// asking for input
	cout << "enter the number"<< endl;
	cin >> a;
	// deploy condition and display result
	if (a % 5==0 && a % 11==0 )
		{
		 cout << a <<" is divisible by 5 and 11  "<<endl;
		}
	else cout << a <<" is not divisible by 5 and 11  "<<endl; 		
return 0;
}
