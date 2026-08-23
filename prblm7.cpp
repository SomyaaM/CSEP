#include<iostream>
using namespace std;
int main()
{
int arr[]={2,8,7,1,4,6};
int i,n=6;
int L=arr[0];
int SL=arr[0];
 for(i=0;i<n;i++) {
    if(arr[i]>L)
    {SL=L;
     L=arr[i];
    }
    else if(arr[i]>SL) {
        SL=arr[i];

    }
    cout<<"largest"<<L<<endl;
    cout<<" second largest"<<SL<<endl;
    return 0;

 }





