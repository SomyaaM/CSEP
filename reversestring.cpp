#include<iostream>
using namespace std;
int main()
{
string str;
int i;
cout<<"enter a string:";
cin>>str;
for(i=str.length()-1;i>=0;i--)
{
cout<<str[i];
}
return 0;
}