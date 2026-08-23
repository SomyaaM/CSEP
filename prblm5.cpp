//deletion of an element at start.
#include<iostream>
using namespace std;
int main()
{
    int arr[10]={2,3,4,6,7,5};
    int n=6,i;
 for(i=0;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
for(int i=0;i<n;i++) {
    cout<<arr[i]<<" "; }
    return 0;
}