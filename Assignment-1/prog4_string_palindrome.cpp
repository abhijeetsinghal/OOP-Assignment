//String is palindrome or not
#include<iostream>
using namespace std;
int main()
{
   int c=0,d=0;
   char a[100],b[100];
   gets(a);
    for(int i=0;a[i]!='\0';i++)
   {
    c++;
   }
      cout<<c<<endl;
      for(int i=c-1;a[i]!='\0';i--)
   {
     b[i]=a[c-1-i];
   }

    for(int i=0;a[i]!='\0';i++)
   {
     if(a[i]==b[i])
     {
         d++;
     }
    }
       cout<<d<<endl;
    if(c==d)
      cout<<"PALINDROME";
      else
        cout<<"NOT A PALINDROME";
return 0;
}
