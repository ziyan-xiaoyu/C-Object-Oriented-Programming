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
        cout<<"三角形的高是"<<x<<"，底是"<<y;
        cout<<"，面积是"<<0.5*x*y<<endl;
    }
};

class Rectangle:public Figure{
public:
    Rectangle(double a,double b):Figure(a,b){}
    void area()
    {
        cout<<"矩形的长是"<<x<<"，宽是"<<y;
        cout<<"，面积是"<<x*y<<endl;
    }
};

class Circle:public Figure{
public:
    Circle(double a):Figure(a,a){}
    void area()
    {
        cout<<"圆形的半径是"<<x;
        cout<<"，面积是"<<3.14*x*x<<endl;
    }
};

class Sector:public Figure{
public:
    Sector(double a,double b):Figure(a,b){}
    void area()
    {
        cout<<"扇形的半径是"<<x<<"，圆心角是"<<y<<"rad";
        cout<<"，面积是"<<0.5*x*x*y<<endl;
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
