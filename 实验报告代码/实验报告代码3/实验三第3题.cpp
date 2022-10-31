#include<iostream>
using namespace std;
const float PI=3.14;

class Point{
private:
    int x;
    int y;
public:
    Point(int x0=0,int y0=0){x=x0;y=y0;}
    void setPoint(int x0,int y0){x=x0;y=y0;}
    int getX(){return x;}
    int getY(){return y;}
    void show(){cout<<"("<<x<<","<<y<<")"<<endl;}

};

class Circle{
private:
    float radius;
    Point center;
public:
    Circle(int x0,int y0,float r0=0):center(x0,y0){radius=r0;}
    void setRadius(float r0){radius=r0;}
    float getRadius(){return radius;}
    float getArea()
    {
        return PI*radius*radius;
    }
    void show()
    {
        cout<<"Բ�ģ�";
        center.show();
        cout<<"�뾶��"<<radius<<endl;
        cout<<"Բ�����"<<getArea()<<endl;
    }

};

class Cylinder{
private:
    float height;
    Circle circle;
public:
    Cylinder(int x0,int y0, float r0,float h0=0):circle(x0,y0,r0){height=h0;}
    void setHeight(float h0){height=h0;}
    float getHeight(){return height;}
    float getArea()
    {
        return circle.getArea()*2+2*PI*circle.getRadius()*height;
    }
    void show()
    {
        cout<<"����Բ��"<<endl;
        circle.show();
        cout<<"�ߣ�"<<height<<endl;
        cout<<"Բ�������"<<getArea()<<endl;
    }
};

int main()
{
    Point p;
    cout<<"�㡪��"<<endl;
    p.setPoint(1,4);
    p.show();

    Circle c(20,55);
    c.setRadius(46);
    cout<<endl<<"Բ����"<<endl;
    c.show();

    Cylinder d(100,9,32);
    d.setHeight(78);
    cout<<endl<<"Բ������"<<endl;
    d.show();

    return 0;
}
