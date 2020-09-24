#include<iostream>
using namespace std;
class Complex
{
private:
    int real,img;
public:
    friend ostream &operator<<(ostream &,const Complex &);
    friend istream &operator>>(istream &,Complex &);
    Complex(int real=0,int img=0)
    {
        this->real=real;
        this->img=img;
    }
};
    ostream &operator<<(ostream &output,const Complex &c)
    {
     output<<c.real<<" + i"<<c.img<<endl;
    return output;
    }
    istream & operator>>(istream &input,Complex &c)
    {
    cout<<"Enter real and imaginary part of complex :"<<endl;
    input>>c.real;
    input>>c.img;
    return input;
    }
int main()
{
   Complex c1,c2;
	cout<<"Enter 1st Complex Number"<<endl;
	cin>>c1;
	cout<<"Answer :"<<endl;
	cout<<c1;
	cout<<"Enter 2nd Complex Number"<<endl;
	cin>>c2;
	cout<<"Answer :"<<endl;
	cout<<c2;
	return 0;
}
