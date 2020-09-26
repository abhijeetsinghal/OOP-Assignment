#include<iostream>
#include<iomanip>
using namespace std;
int c=1;
class garage
{
   private:
   float hours;
   public:
   garage(float h):hours(h)
   {}
   float  calculateCharge()
   {
       if(hours<=3.0)
       {
         return 2.00;
       }
       else if(hours>3.0&& hours<19.0)
       {
        return (2.0+((hours-3.0)*0.5));
       }
        else if(hours>24.0)
       {
     return 0;
       }
       else
       {
       return 10.00;
       }

   }
   void printing()
   {
         for(int j=1;j<=3;j++)
        {
           if(j==2)
        {
          cout<<fixed<<setprecision(1)<<hours<<"\t";
        }
       else if(j==1)
        {
         cout<<c<<"\t";
         c++;
        }
        else  if(j==3)
        {
         cout<<fixed<<setprecision(2)<<calculateCharge();
         }
   }
   cout<<endl;
   }
};
int main()
{
   float a,b,d;
   int i,j;
   cout<<"Enter the hours for which the car parked of 1st customer : "<<endl;
   cin>>a;
   garage ob1(a);
    cout<<"Enter the hours for which the car parked of 2nd customer : "<<endl;
   cin>>b;
   garage ob2(b);
    cout<<"Enter the hours for which the car parked of 3rd customer : "<<endl;
   cin>>d;
   garage ob3(d);
   for(i=1;i<=5;i++)
   {
        if(i==1)
        {
         for(j=1;j<=3;j++)
        {
           if(j==1)
           {
           cout<<"Car\t";
           }
         else if(j==2)
           {
           cout<<"Hours\t";
           }
          else if(j==3)
           {
           cout<<"Charge";
           }}
           cout<<endl;
           }
           else if(i==2)
        {
         ob1.printing();
         }
            else if(i==3)
        {
         ob2.printing();
         }
         else if(i==4)
        {
         ob3.printing();
        }
        else
        {
                 for(j=1;j<=3;j++)
        {
           if(j==1)
           {
           cout<<"Total"<<"\t";
           }
         else if(j==2)
           {
               cout<<fixed<<setprecision(1)<<a+b+d<<"\t";
             }
          else if(j==3)
           {
              cout<<fixed<<setprecision(2)<<ob1.calculateCharge()+ob2.calculateCharge()+ob3.calculateCharge();
           }}
           cout<<endl;
        }
   }
}
