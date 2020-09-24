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
    Complex operator ==(Complex const &obj)
    {
    if(real==obj.real && img==obj.img)
    {
    cout<<"Answer : They are equal"<<endl;
    }
    }
      Complex operator !=(Complex const &obj)
    {
    if(real!=obj.real || img!=obj.img)
    {
    cout<<"Answer : They are not equal"<<endl;
    }
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
	 c1==c2;
	 c1!=c2;
	return 0;
}
