//inserting element at any index.
#include<iostream>
using namespace std;
int main()
{
    int arr[10]={10,20,30,40,50};
    int n=5;
    int value=5;
    int index,i;
    cin>>index;
    cout<<"enter index:"<<endl;
    for(int i=n;i>index;i--);
    {
        arr[i]=arr[i-1];
    }
    arr[index]=value;

    for(int i=0;i<=n;i++) {
    cout<<arr[i]<<" ";
    }
    return 0;
}