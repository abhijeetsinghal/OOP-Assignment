//Prime or not
#include<iostream>
using namespace std;
int main()
{
   int n,sum=0;
   cout<<"Enter Number=";
   cin>>n;
   for(int i=1;i<=n;i++)
    {
        if(n%i==0)
    sum++;
     }
    if(sum==2)
     cout<<"PRIME";
      else
        cout<<"NOT A PRIME";
return 0;
}
