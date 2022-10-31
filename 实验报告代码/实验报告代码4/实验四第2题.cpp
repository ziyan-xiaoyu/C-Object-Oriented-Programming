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

class Circle:public Point{
private:
    float radius;
public:
    Circle(int x0,int y0,float r0=0):Point(x0,y0){radius=r0;}
    void setRadius(float r0){radius=r0;}
    float getRadius(){return radius;}
    float getArea()
    {
        return PI*radius*radius;
    }
    void show()
    {
        cout<<"圆心：";
        Point::show();
        cout<<"半径："<<radius<<endl;
        cout<<"圆面积："<<getArea()<<endl;
    }

};

class Cylinder:public Circle{
private:
    float height;
public:
    Cylinder(int x0,int y0, float r0,float h0=0):Circle(x0,y0,r0)
    {height=h0;}
    void setHeight(float h0){height=h0;}
    float getHeight(){return height;}
    float getArea()
    {
        return Circle::getArea()*2+2*PI*Circle::getRadius()*height;
    }
    void show()
    {
        cout<<"底面圆："<<endl;
        Circle::show();
        cout<<"高："<<height<<endl;
        cout<<"圆柱面积："<<getArea()<<endl;
    }
};

int main()
{
    Point p;
    cout<<"点——"<<endl;
    p.setPoint(1,4);
    p.show();

    Circle c(20,55);
    c.setRadius(46);
    cout<<endl<<"圆——"<<endl;
    c.show();

    Cylinder d(100,9,32);
    d.setHeight(78);
    cout<<endl<<"圆柱——"<<endl;
    d.show();

    return 0;
}
