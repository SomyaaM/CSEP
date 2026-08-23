#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int n;
cout<<"enter number:";
cin>>n;
int rem,original,sum=0,count=0;
original=n;
while(n>0)
{ 
count++;
n=n/10;
}
n=original;
while(n>0)
{ 
    rem=n%10;
    //cout<<"rem= "<<rem<<"power="<<(int)pow(rem,count)<<endl;

    sum=sum+(int)round(pow(rem,count));
    n=n/10;
}
//cout<<"count= "<<count<<endl;
//cout<<"sum= "<<sum<<endl;
//cout<<"original= "<<original<<endl;
if (sum==original) {
cout<<"armstrong number"; }
else{
cout<<"not armstrong"; }
return 0;
}