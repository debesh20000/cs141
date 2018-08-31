//include the library
#include <iostream>
#include <math.h>
using namespace std;
//write main function
int main()
{
	// declaration of variables
	float a,b,c,d,e,f;
	// asking for input
	cout << "enter the coeficient of x^2"<< endl;
	cin >> a;
	cout << "enter the coeficient of x"<< endl;
	cin >> b;
	cout << "enter the constant"<< endl;
	cin >> c;
	d= pow(b,2)-4*a*c;
	e= (-b + sqrt(d))/2*a;
	f = (-b - sqrt(d))/2*a;
	if (d>=0){
		 cout << e << " and " << f << "are the roots of the equation "<<endl;
		} 
	else cout << "the equation has no real roots"<< endl;
		

return 0;
}
