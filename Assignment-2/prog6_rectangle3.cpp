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
    char perichar;
    char fillchar;

    public:
        Rectangle(float x1,float y1,float x2,float y2,float x3,float y3,float x4,float y4)
        {
            setCoordinates(x1,y1,x2,y2,x3,y3,x4,y4);
        }
     void setCoordinates(float x1,float y1,float x2,float y2,float x3,float y3,float x4,float y4)
     {
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
     void setFillCharacter(char fc)
    {
        fillchar=fc;
    }
    void setPerimeterCharacter(char pc)
    {
        perichar=pc;
    }
    void Draw()
    {
     int i,j;
     int r=25;
     int c=25;
     int x=(r-(width()+1));
   for(i=1;i<x;i++)
  {
      if(i==1)
      {
      for(j=1;j<=c;j++)
  {
   cout<<".";
  }
  cout<<endl;
  }
  else
  {
  for(j=1;j<=c;j++)
  {
   if(j==1 ||j==25)
   {
     cout<<".";
  }
  else
  {
       cout<<" ";
  }
  }
     cout<<endl;
  }}
  for (i=x;i<=25;i++)
  {
      if(i==25)
      {
      for(j=1;j<=c;j++)
    {
     cout<<".";
     }
     cout<<endl;
     }
    else if(i==24||i==x)
      {
           for(j=1;j<=c;j++)
     {
         if(j>1 && j<=(length()+2))
         {
            cout<<perichar;
         }
         else if(j==25 || j==1)
         {
            cout<<".";
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
         if(j>=3 && j<=(length()+1))
         {
           cout<<fillchar;
         }
              else if(j==2 || j==length()+2)
         {
            cout<<perichar;
         }
              else if(j==25 || j==1)
         {
            cout<<".";
         }
         else
         {
            cout<<" ";
         }
     }
     cout<<endl;
    }}
    }
    void Rotate()
   {
     int i,j;
     int r=25;
     int c=25;
     int x=(r-(length()+1));
   for(i=1;i<x;i++)
  {
      if(i==1)
      {
      for(j=1;j<=c;j++)
  {
   cout<<".";
  }
  cout<<endl;
  }
  else
  {
  for(j=1;j<=c;j++)
  {
   if(j==1 ||j==25)
   {
     cout<<".";
  }
  else
  {
       cout<<" ";
  }
  }
     cout<<endl;
  }}
  for (i=x;i<=25;i++)
  {
      if(i==25)
      {
      for(j=1;j<=c;j++)
    {
     cout<<".";
     }
     cout<<endl;
     }
    else if(i==24||i==x)
      {
           for(j=1;j<=c;j++)
     {
         if(j>1 && j<=(width()+2))
         {
            cout<<perichar;
         }
         else if(j==25 || j==1)
         {
            cout<<".";
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
         if(j>=3 && j<=(width()+1))
         {
           cout<<fillchar;
         }
              else if(j==2 || j==width()+2)
         {
            cout<<perichar;
         }
              else if(j==25 || j==1)
         {
            cout<<".";
         }
         else
         {
            cout<<" ";
         }
     }
     cout<<endl;
    }}
    }
    void Scaling()
{
    cout<<"Enter Scaling Factor"<<endl;
    int sc;
    cin>>sc;
    int i,j;
     int r=25;
     int c=25;
     if((length()*sc+1)<24 && (width()*sc+1)<24)
     {
     int x=(r-(width()*sc+1));
   for(i=1;i<x;i++)
  {
      if(i==1)
      {
      for(j=1;j<=c;j++)
  {
   cout<<".";
  }
  cout<<endl;
  }
  else
  {
  for(j=1;j<=c;j++)
  {
   if(j==1 ||j==25)
   {
     cout<<".";
  }
  else
  {
       cout<<" ";
  }
  }
     cout<<endl;
  }}
  for (i=x;i<=25;i++)
  {
      if(i==25)
      {
      for(j=1;j<=c;j++)
    {
     cout<<".";
     }
     cout<<endl;
     }
    else if(i==24||i==x)
      {
           for(j=1;j<=c;j++)
     {
         if(j>1 && j<=(length()*sc+2))
         {
            cout<<perichar;
         }
         else if(j==25 || j==1)
         {
            cout<<".";
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
         if(j>=3 && j<=(length()*sc+1))
         {
           cout<<fillchar;
         }
              else if(j==2 || j==(length()*sc+2))
         {
            cout<<perichar;
         }
              else if(j==25 || j==1)
         {
            cout<<".";
         }
         else
         {
            cout<<" ";
         }
     }
     cout<<endl;
    }
}
}
else
{
    cout<<"Rectangle Out of Boundary"<<endl;
}
}
void Move()
{
    int l,w;
    cout<<"How much length to move"<<endl;
    cin>>w;
    cout<<"How much width to move"<<endl;
    cin>>l;
      int i,j;
     int r=25;
     int c=25;
     if((length()+w+1)<24 && (width()+l+1)<24)
     {
     int x=(r-(width()+l+1));
     int y=r-(l+1);
     cout<<y;

   for(i=1;i<x;i++)
  {
      if(i==1)
      {
      for(j=1;j<=c;j++)
  {
   cout<<".";
  }
  cout<<endl;
  }
  else
  {
  for(j=1;j<=c;j++)
  {
   if(j==1 ||j==25)
   {
     cout<<".";
  }
  else
  {
       cout<<" ";
  }
  }
     cout<<endl;
  }}
  for (i=x;i<=y;i++)
  {
      if(i==y||i==x)
      {
           for(j=1;j<=c;j++)
     {
         if(j>w+1 && j<=(length()+w+2))
         {
            cout<<perichar;
         }
         else if(j==25 || j==1)
         {
            cout<<".";
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
         if(j>=w+3 && j<=(length()+w+1))
         {
           cout<<fillchar;
         }
              else if(j==w+2 || j==(length()+w+2))
         {
            cout<<perichar;
         }
              else if(j==25 || j==1)
         {
            cout<<".";
         }
         else
         {
            cout<<" ";
         }
     }
     cout<<endl;
    }
}
for(i=y+1;i<=25;i++)
  {
      if(i==25)
      {
      for(j=1;j<=c;j++)
  {
   cout<<".";
  }
  cout<<endl;
  }
  else
  {
  for(j=1;j<=c;j++)
  {
   if(j==1 ||j==25)
   {
     cout<<".";
  }
  else
  {
       cout<<" ";
  }
  }
     cout<<endl;
  }}
}
else
{
    cout<<"Rectangle Out of Boundary"<<endl;
}
}



};
int main()
{
    float x_1,y_1,x_2,y_2,x_3,y_3,x_4,y_4;
    char a,b;
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
   cout<<"Enter Fill character"<<endl;
   cin>>a;
   ob.setFillCharacter(a);
    cout<<"Enter Perimeter Character"<<endl;
    cin>>b;
    ob.setPerimeterCharacter(b);
    ob.Draw();
    int ch;
    do
    {
        cout<<"\nMenu \n1.Scale \n2.Rotate \n3.Move \n4.End Task";
       cout<<"\nEnter your choice";
       cin>>ch;
        switch(ch)
        {
            case 1:
            ob.Scaling();
            break;
            case 2:
            ob.Rotate();
            break;
            case 3:
            ob.Move();
            break;
            case 4:
            exit(0);
            break;
            default:
            cout<<"Invalid Choice";
        }}
    while(ch!=0);
}

