#include<iostream>
using namespace std;

class Complex{
private:
    double real;
    double imag;
public:
    Complex(double real0=0.0,double imag0=0.0)
    {
        real=real0;
        imag=imag0;
    }
    void print();
    friend Complex operator+(Complex &a,Complex &b);
    friend Complex operator-(Complex &a,Complex &b);
};

Complex operator+(Complex &a,Complex &b)
{
    Complex t;
    t.real=a.real+b.real;
    t.imag=a.imag+b.imag;
    return t;
}

Complex operator-(Complex &a,Complex &b)
{
    Complex t;
    t.real=a.real-b.real;
    t.imag=a.imag-b.imag;
    return t;
}

void Complex::print()
{
    cout<<real;
    if(imag>0) cout<<"+";
    if(imag!=0) cout<<imag<<"i"<<endl;
}

int main()
{
    Complex x1(1.2,2.2),x2(3.2,4.2),x3,x4;
    x3=x1+x2;         //x3=operator+(x1,x2);
    x4=x1-x2;         //x4=operator-(x1,x2);
    cout<<"x1+x2=";
    x3.print();
    cout<<"x1-x2=";
    x4.print();

    return 0;
}
