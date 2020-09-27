#include<iostream>
#include<cstdio>
#include<cstring>
#include"prog7_invoice.h"
using namespace std;
  Invoice::Invoice(string n,string d,int q,int p )
   {
     setNumber(n);
     setDescription(d);
     setQuantity(q);
     setpriceperItem(p);
   }
   void Invoice::setNumber(string n)
   {
    number=n;
   }
   void Invoice::setDescription(string d)
   {
    description=d;
   }
   void Invoice::setQuantity(int q)
   {
   quantity=q;
   }
   void Invoice::setpriceperItem(int p)
   {
    ppi=p;
   }
   string Invoice::getNumber()
   {
    return number;
   }
     string Invoice::getDescription()
   {
    return description;
   }
     int Invoice::getQuantity()
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
     int Invoice::getpriceperItem()
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
    int Invoice::getInvoiceAmount()
   {
    int amt=quantity*ppi;
     return amt;
     }
   void Invoice::printing()
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
