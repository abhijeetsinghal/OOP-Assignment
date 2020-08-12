#include<iostream>
using namespace std;
class Account
{
private:
    int accBalance;

    public:
    Account(int accBalance)
    {
    if(accBalance>=0)
    {
    this-> accBalance= accBalance;
    }
    else
    {
        this-> accBalance =0;
        cout<<"Initial Balance was invalid"<<endl;
    }
    }

    int creditBalance(int credit)
    {
        accBalance=accBalance+credit;
        return accBalance;
    }

    int debitBalance(int debit)
    {
        if(debit>accBalance)
       {
          cout<<"Debit Balance exceeded Account balance."<<endl;
       }
       else
       {
        accBalance=accBalance-debit;
       }
       return accBalance;
    }

    int getAccBalance()
    {
        return accBalance;
    }
};
int main()
{
    int n,m;
      cout<<"Enter 1st account balance"<<endl;
    cin>>n;
      cout<<"Enter 2nd account balance"<<endl;
      cin>>m;
   Account ob1(n);
   Account ob2(m);
   int ch,c,d;
   do{
cout<<("\nEnter your choice");
cout<<("\n1.Credit in 1st account \n2.Debit in 1st account \n3. Credit in 2nd account \n4.Debit in 2nd account ");
cout<<"\nPress '0' to know the balance"<<endl;
cin>>ch;

switch(ch)
{
case 1:
     cout<<"Credit Amount"<<endl;
      cin>>c;
   ob1.creditBalance(c);
break;
case 2:
     cout<<"Debit Amount"<<endl;
      cin>>d;
   ob1.debitBalance(d);
break;
case 3:
     cout<<"Credit Amount"<<endl;
      cin>>c;
   ob2.creditBalance(c);
break;
case 4:
     cout<<"Debit Amount"<<endl;
      cin>>d;
   ob2.debitBalance(d);
break;
default:
    if(ch==0)
    {
        cout<<"";
    }
    else
    {
      cout<<"invalid input"<<endl;
    }
}
}
while(ch!=0);
   cout<<"Account balance of one is  "<<ob1.getAccBalance()<<endl;
   cout<<"Account balance of second is  "<<ob2.getAccBalance()<<endl;
return 0;
}
