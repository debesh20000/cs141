//include the library
#include <iostream>
using namespace std;
//write main function
int main()
{
int a,i;
// asking for input
cout << "enter the size of hollow square star pattern with diagonal"<< endl;
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
if (i>0 && i<a-1){
for(int j=0; j==i or j==a-i;j++){
cout<<"*";
}
else 
for(int k=1;k<a-1;k++){
cout<<" ";
}
cout<<"*";
cout<<endl;
}
return 0;
}
