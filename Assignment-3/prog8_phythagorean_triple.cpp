#include<iostream>
using namespace std;
int square(int a)
{
return a*a;
}
int main()
{
for(int side1=2;side1<=500;side1++)
{
  for(int side2=side1+1;side2<=500;side2++)
  {
   for(int hypotenuse=side1+2;hypotenuse<=500;hypotenuse++)
   {
     if((square(side1)+square(side2))==square(hypotenuse))
     {
     cout<<"set("<<side1<<","<<side2<<","<<hypotenuse<<")"<<endl;
     }
   }
  }
  }
return 0;
}
