#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int n,rem,sum=0;
cout<<"enter number:"<<endl; 
cin>>n;
while(n>9) {
    sum=0;
while(n>0) { 
    rem=n%10;
    sum=sum+rem*rem;
    n=n/10;
 }
    n=sum;
    cout<<n<<endl;
}
    
 
if(n==1 ||n==7) {
cout<<"IT IS HAPPY NUMBER"<<endl;
}
else{
cout<<"not happy number";  }
return 0;
}