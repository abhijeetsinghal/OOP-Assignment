#include<iostream>
#include<math.h>
using namespace std;
class Rectangle
{
private:
    int x1,y1;
    int x2,y2;
    int x3,y3;
    int x4,y4;

    public:
        Rectangle(float x1,float y1,float x2,float y2,float x3,float y3,float x4,float y4)
        {
            setCoordinates(x1,y1,x2,y2,x3,y3,x4,y4);
        }
     void setCoordinates(float x1,float y1,float x2,float y2,float x3,float y3,float x4,float y4)
     {
         //int a=x1,y1,x2,y2,x3,y3,x4,y4
          if(x1,y1,x2,y2,x3,y3,x4,y4>=0.0 && x1,y1,x2,y2,x3,y3,x4,y4<=20.0)
     {
         this-> x1=x1;
         this-> y1=y1;
         this-> x2=x2;
         this-> y2=y2;
         this-> x3=x3;
         this-> y3=y3;
         this-> x4=x4;
         this-> y4=y4;
     }
     else
     {
         cout<<"Invalid Input"<<endl;
        exit(0);
     }}
     float length()
    {
        float l1=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
        float l2=sqrt(((x3-x4)*(x3-x4))+((y3-y4)*(y3-y4)));
        if(l1==l2)
        {
            return  l2;
        }
        else
        {
            cout<<"Invalid Input"<<endl;
            exit(0);
        }
    }
     float width()
    {
        float w1=sqrt(((x1-x3)*(x1-x3))+((y1-y3)*(y1-y3)));
        float w2=sqrt(((x2-x4)*(x2-x4))+((y2-y4)*(y2-y4)));
        if(w1==w2)
        {
            return  w2;
        }
        else
        {
            cout<<"Invalid Input"<<endl;
            exit(0);
        }
    }
   float perimeter()
    {
       return 2*(length() + width());

    }
    float area()
    {
       return (length() * width());
    }
    void square()
    {
           float d1=sqrt(((x1-x4)*(x1-x4))+((y1-y4)*(y1-y4)));
           float d2=sqrt(((x2-x3)*(x2-x3))+((y2-y3)*(y2-y3)));
       if(length()==width())
       {
           cout<<"Its a Square"<<endl;
       }

       else if(d1==d2)
       {
           cout<<"Its a Rectangle"<<endl;
       }
       else
       {
           cout<<"Niether a square nor a rectangle"<<endl;
           exit(0);
       }
    }
};
int main()
{
    float x_1,y_1,x_2,y_2,x_3,y_3,x_4,y_4;
      cout<<"First set coordinate"<<endl;
    cin>>x_1;
    cin>>y_1;
    cout<<"Second set coordinate"<<endl;
    cin>>x_2;
    cin>>y_2;
    cout<<"Third set coordinate"<<endl;
    cin>>x_4;
    cin>>y_4;
    cout<<"Fourth set coordinate"<<endl;
    cin>>x_3;
    cin>>y_3;
   Rectangle ob(x_1,y_1,x_2,y_2,x_3,y_3,x_4,y_4);
   ob.square();
    float l1=sqrt(((x_1-x_2)*(x_1-x_2))+((y_1-y_2)*(y_1-y_2)));
    float w1=sqrt(((x_1-x_3)*(x_1-x_3))+((y_1-y_3)*(y_1-y_3)));
   if(l1>w1)
    {
   cout<<"Length =  "<<ob.length()<<endl;
    cout<<"Width =  "<<ob.width()<<endl;
    }
     else if(w1>l1)
     {
   cout<<"Length =  "<<ob.width()<<endl;
   cout<<"Width =  "<<ob.length()<<endl;
     }
  cout<<"Perimeter =  "<<ob.perimeter()<<endl;
  cout<<"Area =  "<<ob.area()<<endl;
}
