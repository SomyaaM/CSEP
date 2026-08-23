#include<iostream>
using namespace std;
int main()
{
    int arr[10]={2,3,4,6,7,5};
    int n=6;
    int index;
    cout<<"enter index:";
    cin>>index;
    for(int i=index;i<6,i++)
    {
     arr[i]=arr[i+1];

    }
    for(int i=0;i<n-1;i++);
    {
     cout<<arr[i]<<"";
    }
    return 0;
}