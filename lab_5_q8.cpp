//include the library
#include <iostream>
using namespace std;
//write main function
int main()
{
	// declaration of variables
	char a;
	// asking for input
	cout << "enter the alphabet"<< endl;
	cin >> a;
	// deploy condition and display result
	if (a == 'a' or a=='e' or a=='i' or a=='o' or a=='u'  )
		{
		 cout << a <<" is a vowel "<<endl;
		} 

	else cout << a <<" is not a vowel "<<endl; 
		

return 0;
}
