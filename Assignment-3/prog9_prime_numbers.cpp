#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter Limit"<<endl;
cin>>n;
int arr[n];
int i,j;
for(i=2;i<n;i++)
  {
 arr[i]=1;
  }
for(i=2;i<n;i++)
  {
   if(arr[i]==1)
   {
   for(j=2*i;j<n;j=j+i)
   {
    arr[j]=0;
   }
   }
  }
  cout<<"Prime Elements between 2 and "<<n-1<<" are : "<<endl;
  for(i=2;i<n;i++)
  {
  if(arr[i]==1)
  {
  cout<<i<<endl;
  }
  }
}
