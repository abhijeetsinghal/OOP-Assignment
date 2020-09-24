#include<iostream>
#include<math.h>
using namespace std;
class Complex
{
private:
    int real,img;
public:
    Complex(int real,int img)
    {
        this->real=real;
        this->img=img;
    }
    void print()
    {
        cout<<real<<" + i"<<img<<endl;
    }
    Complex operator *(Complex const &obj)
    {
    return Complex((real*obj.real),(img*obj.img));
    }
};
int main()
{
    int a,b,c,d;
	cout<<"Enter real and imaginary part 1st complex :"<<endl;
	cin>>a;
	cin>>b;
	cout<<"Enter real and imaginary part 2nd complex :"<<endl;
	cin>>c;
	cin>>d;
	Complex c1(a,b),c2(c,d);
	Complex c3= c1*c2;
	cout<<"Answer :"<<endl;
    c3.print();
	return 0;
}
