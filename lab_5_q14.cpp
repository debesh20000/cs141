//include the library
#include <iostream>
using namespace std;
//write main function
int main()
{
	// declaration of variables
	float a,b,c;
	// asking for input
	cout << "enter the angles of the triangle"<< endl;
	cin >> a;
	cin >> b;
	cin >> c;
	// deploy condition and display result
	if (a+b+c==180  )
		{
		 cout <<" It is a valid triangle "<<endl;
		} 
	else cout << " it is not  a valid triangle "<<endl; 
		

return 0;
}
