#include<iostream>
using namespace std;
int main()
{
string str;
int i;
int count=0;
cout<<"enter a string:";
getline(cin,str);
for(i=0;i<str.length();i++)
{
if(str[i]==' ')
{
count ++;
}
}
cout<<"number of words:"<<count+1;
return 0;
}