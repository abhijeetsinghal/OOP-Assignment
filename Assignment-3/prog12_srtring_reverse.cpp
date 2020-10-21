#include<iostream>
#include<cstring>
using namespace std;
void stringReverse(string str,int i,int j)
{
        if(i>j)
       {
        return;
       }
        else
       {
       cout<<str[j];
     return  stringReverse(str,i,j-1);
}
}
int main()
{
   string str;
   cout<<"Enter the String : ";
   getline(cin,str);
   int t=str.length();
   cout<<"Reverse string : ";
   stringReverse(str,0,t-1);
   cout<<endl;
   return 0;
   }
