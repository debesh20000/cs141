//include the library
#include <iostream>
#include <math.h>
using namespace std;
//write main function
int main()
{
	// to print natural numbers from n to 1
	// declaration of variables
	int n;
	// asking for input
	cout << "enter the first number of the series"<<endl;
	cin >> n;
	while (n > 0)
		{
		 cout<< n << endl;
		 n = n-1;
		}
return 0;
}
