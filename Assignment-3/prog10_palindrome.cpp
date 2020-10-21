#include<iostream>
#include<cstring>
using namespace std;
bool testPalindrome(string str,int i,int j)
{
        if(i>=j)
       {
        return true;
       }
        else if(str[i]!=str[j])
       {
         return false;
       }
     return  testPalindrome(str,i+1,j-1);
}
int main()
{
   string str;
   cout<<"Enter the String : ";
   getline(cin,str);
   int t=str.length();
   if(testPalindrome(str,0,t-1))
    {
     cout<<str<<" is a palindrome string."<<endl;
    }
    else
    {
     cout<<str<<" is not a palindrome string."<<endl;
    }
   return 0;
   }
