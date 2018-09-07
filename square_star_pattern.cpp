//include the library
#include <iostream>
using namespace std;
//write main function
int main()
{
int a;
// asking for input
cout << "enter the number of stars for each side of square"<< endl;
cin >> a;
// printing the stars
for (int i=0; i<a; i++){
	for (int j=0; j<a;j++){
		cout << "*";
		}
	cout <<endl;		
	}
return 0;
}
