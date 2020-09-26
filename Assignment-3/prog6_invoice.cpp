#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
class Invoice
{
   private:
   string number,description;
   int quantity,ppi;
   public:
   Invoice(string n,string d,int q,int p )
   {
     setNumber(n);
     setDescription(d);
     setQuantity(q);
     setpriceperItem(p);
   }
   void setNumber(string n)
   {
    number=n;
   }
   void setDescription(string d)
   {
    description=d;
   }
   void setQuantity(int q)
   {
   quantity=q;
   }
   void setpriceperItem(int p)
   {
    ppi=p;
   }
   string getNumber()
   {
    return number;
   }
     string getDescription()
   {
    return description;
   }
     int getQuantity()
   {
     if(quantity<0)
     {
      return 0;
     }
     else
     {
    return quantity;
   }
   }
     int getpriceperItem()
     {
     if(ppi<0)
     {
      return 0;
     }
     else
     {
    return ppi;
   }
   }
    int getInvoiceAmount()
   {
    int amt=quantity*ppi;
     return amt;
     }
   void printing()
   {
        for(int i=1;i<=5;i++)
        {
            if(i==1)
          cout<<number<<"\t\t";
          else if(i==2)
            cout<<description<<"\t\t";
          else if(i==3)
            cout<<quantity<<"\t\t\t";
          else if(i==4)
            cout<<ppi<<"\t\t\t";
          else
            cout<<getInvoiceAmount()<<endl;
   }}
};
int main()
{
   string a1,b1,a2,b2,a3,b3;
   int c1,d1,c2,d2,c3,d3;
   int i,j;
   cout<<"Enter the Number of the 1st product : ";
   getline(cin,a1);
    cout<<"Enter the Description of the 1st product: ";
   getline(cin,b1);
    cout<<"Enter the Quantity of the 1st product : ";
   cin>>c1;
    cout<<"Enter the Price Per Item of the 1st product : ";
   cin>>d1;
   Invoice ob1(a1,b1,c1,d1);
   fflush(stdin);
   cout<<"Enter the Number of the 2nd product : ";
   getline(cin,a2);
    cout<<"Enter the Description of the 2nd product: ";
   getline(cin,b2);
    cout<<"Enter the Quantity of the 2nd product : ";
   cin>>c2;
    cout<<"Enter the Price Per Item of the 2nd product : ";
   cin>>d2;
   fflush(stdin);
   cout<<"Enter the Number of the 3rd product : ";
   getline(cin,a3);
    cout<<"Enter the Description of the 3rd product: ";
   getline(cin,b3);
    cout<<"Enter the Quantity of the 3rd product : ";
   cin>>c3;
    cout<<"Enter the Price Per Item of the 3rd product : "<<endl;
   cin>>d3;
     Invoice ob2(a2,b2,c2,d2);
     Invoice ob3(a3,b3,c3,d3);
   for(i=1;i<=5;i++)
   {
        if(i==1)
        {
            for(int j=1;j<=5;j++)
            {
                if(j==1)
        cout<<"Number"<<"\t\t";
             else if(j==2)
                  cout<<"Description"<<"\t\t";
             else if(j==3)
                  cout<<"Quantity"<<"\t\t";
             else if(j==4)
                  cout<<"Price Per Item"<<"\t\t";
             else
                  cout<<"InvoiceAmount"<<endl;
        }}
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
           cout<<"Total  Billing "<<"\t\t\t\t"<<ob1.getQuantity()+ob2.getQuantity()+ob3.getQuantity() <<"\t\t\t"<<ob1.getpriceperItem()+ob2.getpriceperItem()+ob3.getpriceperItem()<<"\t\t\t"<<ob1.getInvoiceAmount()+ob2.getInvoiceAmount()+ob3.getInvoiceAmount();
           }

}   }
