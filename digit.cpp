#include<iostream>
using namespace std;
int main()
{
    int n, sum=0,rem;
    cout<<"enter number:";
    cin>>n;
 while(n>0)
  {
    rem=n%10;
    sum=sum+rem;
    n=n/10;
  }
  cout<<"sum is:"<<sum;
  return 0;
}