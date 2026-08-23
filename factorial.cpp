#include<iostream>
#include<cmath>
using namespace std;
int main()
{ 
 int n,fact=1;
 cout<<"enter number:";
cin>>n;
for(int i=1;i<=n;i++) {
  fact=fact*i;
}
cout<<"factorial of given number is:"<<fact<<endl;
return 0;
}