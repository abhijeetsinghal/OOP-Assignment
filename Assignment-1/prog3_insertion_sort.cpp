//Insertion sort
#include<iostream>
using namespace std;
int main()
{
   int n,temp,p;
   cout<<"array size=";
   cin>>n;
   int a[n],l2,s2;
   for(int i=0;i<n;i++)
   {
   cin>>a[i];
   }
    for(int i=1;i<n;i++)
   {
   temp=a[i];
  int j=i-1;
  while(a[j]>temp && j!=-1)
    {
        a[j+1]=a[j];
     j--;
     }
     a[j+1]=temp;
}
      for(int i=0;i<n;i++)
   {
   cout<<a[i]<<endl;
   }
return 0;
}
