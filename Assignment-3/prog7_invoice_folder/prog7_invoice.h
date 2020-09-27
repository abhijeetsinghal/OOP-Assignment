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
   Invoice(string n,string d,int q,int p );
   void setNumber(string n);
   void setDescription(string d);
   void setQuantity(int q);
   void setpriceperItem(int p);
   string getNumber();
     string getDescription();
     int getQuantity();
     int getpriceperItem();
    int getInvoiceAmount();
   void printing();
};
