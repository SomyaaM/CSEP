#include<iostream>
using namespace std;
int main()
{
 int arr[100];
 int n;
 cin>>n;
 cout<<"enter elements of array:"<<endl;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int low,high,mid,target;
cout<<"enter target:"<<endl;
cin>>target;
low=0;
high=n-1;
while(low<=high) {
mid=(high+low)/2;
if(arr[mid]==target) {
    return 0;
}
if(arr[low]<=arr[mid])
{
    if(arr[low]<target && target<arr[mid])
    { high=mid-1;
    }
    else if {
        low=mid+1;
    }
    else {
        if(arr[mid]<target && target<<arr[high]) {
            low=mid+1 }
            else {
                high=mid-1;            }
        }
    }
}
return -1;
}