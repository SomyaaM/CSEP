#include<iostream>
using namespace std;
int main()
{
string str;
int i;
cout<<"enter a string:";
cin>>str;
for(int i=0;i<str.length();i++)
{
    if(str[i]=='.')
    {
        cout<<"[.]";
    }
    else {
        cout<<str[i];
    }
}
return 0;
}
