#include<iostream>
using namespace std;
class Date
{
private:
    int month;
    int day;
    int year ;

    public:
    Date(int month , int day, int year)
    {
        this-> day= day;
        this-> year= year;
    if(month<=12 && month>=1)
    {
    this-> month= month;
    }
    else
    {
        this-> month=1;
    }
    }
     int getMonth()
    {
        return  month;
    }
    int getDay()
    {
        return  day;
    }
    int getYear()
    {
        return  year;
    }

     void displayDate()
    {
        cout<<getMonth()<<"/"<<getDay()<<"/"<<getYear()<<endl;
    }
};
int main()
{
    int d,m,y;
      cout<<"Enter Month"<<endl;
    cin>>m;
      cout<<"Enter Day"<<endl;
      cin>>d;
      cout<<"Enter Year"<<endl;
      cin>>y;
   Date ob(m,d,y);
  ob.displayDate();
return 0;
}
