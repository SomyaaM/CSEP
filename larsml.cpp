#include<iostream>
using namespace std;
int main()
{
    int n, rem, ans;
    cout<<"enter number:";
    cin>>n;
    ans=n%10;
    n=n/10;
    while(n>0) {
        rem=n%10;
        if(rem<ans) {    //for largest,just reverse the sign(>)
        ans=rem;}
        else{
        n=n/10;}}
        cout<<"smallest number is:"<<ans;
        return 0;
    }
    