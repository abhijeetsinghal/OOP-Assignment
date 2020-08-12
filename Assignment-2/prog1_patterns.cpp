#include<iostream>
using namespace std;
void square(int,int);
void oval(int,int);
void arrow(int,int);
void diamond(int,int);
int main()
{

int ch,r,c;
do{
cout<<("\n Menu \n1. Square \n2. Oval \n3. Arrow  \n4. Diamond ");
cout<<("\nEnter your choice");
cin>>ch;

switch(ch)
{
case 1:
square(r,c);
break;
case 2:
oval(r,c);
break;
case 3:
arrow(r,c);
break;
case 4:
diamond(r,c);
break;
default:
cout<<"\ninavlid input"<<endl;
}
}
while(ch!=0);
return 0;
}

void square(int r,int c)
{
       int i,j;
   cout<<"Enter no. of rows"<<endl;
   cin>>r;
   cout<<"Enter no. of columns"<<endl;
   cin>>c;
   int x=r;
  for(i=1;i<=r;i++)
  {
      if(i==1 || i==x)
      {
      for(j=1;j<=c;j++)
  {
   cout<<"*";
  }
  cout<<endl;
  }
  else
  {
  for(j=1;j<=c;j++)
  {
   if(j==1 ||j==x)
   {
     cout<<"*";
  }
  else
  {
       cout<<" ";
  }
  }
     cout<<endl;
  }}
}
void oval(int r,int c)
{
    int i,j;
   cout<<"Enter no. of rows"<<endl;
   cin>>r;
   cout<<"Enter no. of columns"<<endl;
   cin>>c;
   int x=r;
  for(i=1;i<=r;i++)
  {
      if(i==1 || i==x)
      {
      for(j=1;j<=c;j++)
  {
      if(j==4)
        {
        for(j=4;j<=c-3;j++)
      {
   cout<<"*";
      }}
  else
  {
       cout<<" ";
  }
  }
  cout<<endl;
      }
  else if(i==2 || i==x-1)
  {
       for(j=1;j<=c;j++)
  {
   if(j==2 || j==x-1)
   {
      cout<<"*";
  }
  else
  {
       cout<<" ";
  }
  }
     cout<<endl;
  }
  else
  {
  for(j=1;j<=c;j++)
  {
   if(j==1 ||j==x)
   {
     cout<<"*";
  }
  else
  {
       cout<<" ";
  }
  }
     cout<<endl;
  }}
}
void arrow(int r,int c)
{
     int k,i,j,l;
   cout<<"Enter no. of rows"<<endl;
   cin>>r;
   cout<<"Enter no. of columns"<<endl;
   cin>>c;
   int x=c;
   int a=((x/2)+1);
  for(l=1;l<=r;)
  {
      if(l==1)
      {
        for(i=1;i<=a;i++)
         {
         if(i==1)
         {
        for(k=1;k<=a-i;k++)
       {
              cout<<" ";
       }
       for(j=((x/2)+2-i);j<=a;j++)
        {
             cout<<"*";
        }
        }
       else
      {
           for(k=1;k<=a-i;k++)
       {
              cout<<" ";
       }
       for(j=((x/2)+2-i);j<=a;j++)
        {
             cout<<"*";
        }
       for(j=1;j<i;j++)
        {
             cout<<"*";
        }}
  cout<<endl;
      }
      l=l+a;
      }
     else
     {
            for(k=1;k<=a-1;k++)
       {
              cout<<" ";
       }
          cout<<"*";
           cout<<endl;
     l++;
     }
  }
}
    void diamond(int r,int c)
{
     int k=3,i,j,l;
   cout<<"Enter no. of rows"<<endl;
   cin>>r;
   cout<<"Enter no. of columns"<<endl;
   cin>>c;
   int x=r;
   int y=c;
   int a=((c/2)+2);
   int b=((r/2)+1);
  for(i=1;i<=r;i++)
  {
      if(i<=b)
        {
      for(j=1;j<=(a-i);j++)
  {
      if(j==(a-i))
      {
   cout<<"*";
      }
      else
        {
              cout<<" ";
        }}
      for(j=2;j<=i;j++)
     {
              cout<<" ";
      }
      for(j=2;j<=a-1;j++)
  {
      if(j==i)
      {
   cout<<"*";
      }
      else
        {
              cout<<" ";
        }
      }
  cout<<endl;
        }
else if(i>b)
    {
         for(j=1;j<=((i-a)+2);j++)
  {
      if(j==((i-a)+2))
      {
   cout<<"*";
      }
      else
        {
              cout<<" ";
        }}

       for(;k<=x-2;)
     {
         for(j=k;j<=y-1;j++)
         {
      if(j==y-1)
      {
   cout<<"*";
      }
      else
        {
              cout<<" ";
        }
      }
      break;
     }
     k=k+2;
      cout<<endl;
    }
  }
  }

