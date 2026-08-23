//num where sum of factorials of its digits equal the num itself.
#include<iostream>
#include<cmath>
using namespace std;
int main()
{ 
int n,sum=0,original,rem,fact;
 cout<<"enter number:";
cin>>n;
original=n;
while(n>0)
{
rem=n%10;
fact=1;
for(int i=1;i<=rem;i++) {
  fact=fact*i;
}
sum=sum+fact;
n=n/10;
}
n=original;
if(sum==n)
cout<<"strong number";
else 
 cout<<"not strong number:";
 return 0;
}
    

    