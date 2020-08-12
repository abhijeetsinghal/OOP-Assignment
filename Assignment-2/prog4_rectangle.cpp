#include<iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int width;

    public:
        Rectangle(float length =1,float width=1 )
   {
       if(length>0.0 && length<20.0)
     {
         this-> length= length;
     }
     else
     {
         cout<<"Invalid Input"<<endl;
     }
       if(width>0.0 && width<20.0)
         {
        this-> width= width;
       }
       else
      {
        cout<<"Invalid input"<<endl;
     }}
     float getLength()
    {
        return  length;
    }
    float getWidth()
    {
        return width;
    }

   float perimeter()
    {
       return 2*(getLength() + getWidth());

    }
    float area()
    {
       return (getLength() * getWidth());

    }
};
int main()
{
    float l,w;
      cout<<"Enter Length"<<endl;
    cin>>l;
      cout<<"Enter Width"<<endl;
      cin>>w;
   Rectangle ob(l,w);
   Rectangle ob2;
  cout<<"Perimeter =  "<<ob.perimeter()<<endl;
  cout<<"Area =  "<<ob.area()<<endl;
}
