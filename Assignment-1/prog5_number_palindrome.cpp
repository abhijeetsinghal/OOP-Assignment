#include<iostream>
using namespace std;
int main()
{
   int n,sum=0;
   cout<<"Enter Number=";
   cin>>n;
   int x=n;
  while(n!=0)
    {
     sum=sum*10+(n%10);
     n=n/10;
     }
    if(sum==x)
     cout<<"PALINDROME";
      else
        cout<<"NOT A PALINDROME";
return 0;
}
