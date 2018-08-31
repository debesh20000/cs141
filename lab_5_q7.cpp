//include the library
#include <iostream>
using namespace std;
//write main function
int main()
{
	// declaration of variables
	char a;
	// asking for input
	cout << "enter the character"<< endl;
	cin >> a;
	// deploy condition and display result
	if (a >='a' && a <= 'z'  )
		{
		 cout << a <<" is an alphabet "<<endl;
		} 
	else cout << a <<" is not an alphabet "<<endl; 
		

return 0;
}
