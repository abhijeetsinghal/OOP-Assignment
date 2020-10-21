#include<iostream>
using namespace std;
int smallestElement(int arr[],int i,int j,int n)
{
      if(i==j)
       {
        return n;
       }
      else
      {
          if(n>arr[i])
          {
            return  smallestElement(arr,i+1,j,arr[i]);
          }
          else
          {
        return  smallestElement(arr,i+1,j,n);
       }
}
}
int main()
{
   int n;
   cout<<"Enter Array size: ";
   cin>>n;
   int arr[n];
   cout<<"Enter Array element: ";
   for(int i=0;i<n;i++)
   {
     cin>>arr[i];
   }
     cout<<"Smallest Element is :"<<smallestElement(arr,1,n,arr[0])<<endl;

   return 0;
   }
