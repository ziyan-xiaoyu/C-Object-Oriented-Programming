#include<iostream>
using namespace std;

class Figure{
protected:
    double x,y;
public:
    Figure(double a,double b)
    {  x=a;y=b;}
    virtual void area()=0;
};

class Triangle:public Figure{
public:
    Triangle(double a,double b):Figure(a,b){}
    void area()
    {
        cout<<"�����εĸ���"<<x<<"������"<<y;
        cout<<"�������"<<0.5*x*y<<endl;
    }
};

class Rectangle:public Figure{
public:
    Rectangle(double a,double b):Figure(a,b){}
    void area()
    {
        cout<<"���εĳ���"<<x<<"������"<<y;
        cout<<"�������"<<x*y<<endl;
    }
};

class Circle:public Figure{
public:
    Circle(double a):Figure(a,a){}
    void area()
    {
        cout<<"Բ�εİ뾶��"<<x;
        cout<<"�������"<<3.14*x*x<<endl;
    }
};

class Sector:public Figure{
public:
    Sector(double a,double b):Figure(a,b){}
    void area()
    {
        cout<<"���εİ뾶��"<<x<<"��Բ�Ľ���"<<y<<"rad";
        cout<<"�������"<<0.5*x*x*y<<endl;
    }
};

int main()
{
    Figure *p;
    Triangle t(10,20);
    Rectangle r(10,20);
    Circle c(10);
    Sector s(10,3.14/2);
    p=&t;
    p->area();
    p=&r;
    p->area();
    p=&c;
    p->area();
    p=&s;
    p->area();
    return 0;
}
