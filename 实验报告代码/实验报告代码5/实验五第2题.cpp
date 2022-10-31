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
    Complex operator*(Complex c);
    Complex operator/(Complex c);
};

Complex Complex::operator*(Complex c)
{
    Complex t;
    t.real=real*c.real-imag*c.imag;
    t.imag=real*c.real+imag*c.imag;
    return t;
}

Complex Complex::operator/(Complex c)
{
    Complex t;
    double m;
    m=1/(c.real*c.real+c.imag*c.imag);
    t.real=(real*c.real+imag*c.imag)*m;
    t.imag=(real*c.real-imag*c.imag)*m;
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
    x3=x1*x2;        //x3=x1.operator*(x2);
    x4=x1/x2;        //x4=x1.operator/(x2);
    cout<<"x1*x2=";
    x3.print();
    cout<<"x1/x2=";
    x4.print();

    return 0;
}
