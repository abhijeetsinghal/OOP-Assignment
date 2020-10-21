#include<iostream>
using namespace std;
void printArray(int arr[],int i,int j)
{
      if(i<j)
      {
          if(i==j-1)
      cout<<arr[i];
      else
        cout<<arr[i]<<",";
        return  printArray(arr,i+1,j);
       }
       else
       {
          return;
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
     cout<<"Array is :\n"<<endl;
      printArray(arr,0,n);
   return 0;
   }
