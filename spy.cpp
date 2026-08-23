#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,rem, sum=0,product=1;
    cout<<"enter number:";
    cin>>n;
while(n>0)
{
    rem=n%10;
    sum=sum+ rem;
    product=product*rem;
    n=n/10;
}
if(sum==product)
{
    cout<<"spy number";
}
else {
    cout<<"not a spy number";
}
return 0; 
}