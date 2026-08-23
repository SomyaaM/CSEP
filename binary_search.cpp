#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int arr[100];
int mid,target,high=n-1,low=0;
while(low<=high)
{
    int mid=low+(high-low)/2;
}
for(int i=0;i<n;i++)
{
if (arr[mid]==target){
    cout<<" "<<a[mid];
    return 0;
} else if(arr[mid]<target) {
    low=mid +1;
} else {
    high=mid-1;
}
}
cout<<"element not found"<<endl;
}