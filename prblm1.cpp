#include<iostream>
using namespace std;
int main()
{
int arr[6];
int n;
int sum=0;
int product=1;
cout<<"Enter the elements of array:"<<endl;
for(int i=0;i<6;i++) 
{
    cin>>arr[i];
    if(i%2==0)
      sum=sum+arr[i];
    else 
      product=product*arr[i];
} 
cout<<"sum of even index terms="<<sum<<endl;
cout<<"product of odd index terms="<<product<<endl;
return 0;
}