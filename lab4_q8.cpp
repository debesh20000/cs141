//include the library
#include <iostream>
using namespace std;
//write main function
int main()
{
// declaration of variables
float a,b,c,d,e,f,g,h,i,j;
//asking value for variable
cout << "enter the marks in mathematics " <<endl;
// getting value from terminal
cin >> a;
cout << "enter the marks in physics" <<endl;
cin >> b;
cout << "enter the marks in chemistry " <<endl;
cin >> c;
cout << "enter the marks in biology " <<endl;
cin >> d;
cout << "enter the marks in computer science " <<endl;
cin >> e;
cout << "enter the maximum marks in each subject " <<endl;
cin >> f;
//using the required formula
g=f*5;
h=a+b+c+d+e;
i=h/5;
j=(h/g)*100;
//displaying the values
cout << " The total marks secured in all subjects is " << h << endl;
cout << " The average of marks secured in all subjects is " << i << endl;
cout << " The percentage marks secured is " << j << "%" <<endl;
return 0;
}
