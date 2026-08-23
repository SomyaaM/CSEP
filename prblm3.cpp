//inserting element at starting.
#include<iostream>
using namespace std;
int main()
{
    int arr[10]={10,20,30,40,50};
    int i,n=5;
    int value=5;
  
    for(int i=n;i>0;i--);
    {
        arr[i]=arr[i-1];
    }
    arr[0]=value;
    
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}