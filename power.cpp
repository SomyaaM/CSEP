#include<iostream>
using namespace std;
int main()
{
    int ans,n,po;
    cout<<"enter number:"<<endl;
    cin>>n;
    cout<<"enter power:"<<endl;
    cin>>po;
    ans=1;
    for(int i=1;i<=po;i++)
    {
    ans=n*ans;
    }
cout<<"ans is:"<<ans<<endl;
return 0;
}