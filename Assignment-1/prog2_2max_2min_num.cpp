#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"array size=";
   cin>>n;
   int a[n],l2,s2;
   for(int i=0;i<n;i++)
   {
   cin>>a[i];
   }
   int max=a[0];
   int min=a[0];
    for(int i=0;i<n;i++)
   {
   if(min>a[i])
 {
  s2=min;
   min=a[i];
   }
  else if(s2>a[i]&&min<a[i])
   {
   s2=a[i];
   }}
   for(int i=0;i<n;i++)
   {
   if(max<a[i])
   {
   l2=max;
   max=a[i];
   }
   else if(l2<a[i]&&max>a[i])
   {
   l2=a[i];
   }}
   cout<<"2 Maximum number is "<<l2<<endl;
   cout<<"2 Minimum number is "<<s2<<endl;
return 0;
}
