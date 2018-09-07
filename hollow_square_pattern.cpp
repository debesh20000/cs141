//include the library
#include <iostream>
using namespace std;
//write main function
int main()
{
int a,i;
// asking for input
cout << "enter the number of stars for each side of square"<< endl;
cin >> a;
// printing the stars
for(i=0; i<a;i++){
if (i==0 or i==a-1){
for(int j=0;j<a;j++){
cout<<"*";
}
}
else
cout<<"*";
for(int k=0;k<a-2;k++){
cout<<" ";
}
cout<<"*";
cout<<endl;
}

return 0;
}
