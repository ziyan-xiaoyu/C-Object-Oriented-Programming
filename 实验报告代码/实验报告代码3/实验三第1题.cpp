#include<iostream>
#include<math.h>
using namespace std;

class Point{
private:
    float x;
    float y;
public:
    Point(float x0,float y0)
    {
        x=x0;
        y=y0;
    }
    float getx()
    {
        return x;
    }
    float gety()
    {
        return y;
    }
    void show()
    {
        cout<<"x="<<x<<",y="<<y<<endl;
    }
};

class Line{
private:
    Point p1;
    Point p2;
    double len;
public:
    Line(float x1,float y1,float x2,float y2,double len=0.0)
         :p1(x1,y1),p2(x2,y2){}
    void Length();
    Point middle_Point();
    void show();
};

void Line::Length()
{
    len=sqrt(pow(p2.getx()-p1.getx(),2)+pow(p2.gety()-p1.gety(),2));
}

Point Line::middle_Point()
{
    Point middle_p((p1.getx()+p2.getx())/2,(p1.gety()+p2.gety())/2);
    return middle_p;
}

void Line::show()
{
    cout<<"线段端点坐标："<<endl;
    cout<<"p1：";
    p1.show();
    cout<<"p2：";
    p2.show();

    cout<<"线段长度：";
    cout<<len<<endl;

    cout<<"中点坐标："<<endl;
    Point middle_p0=middle_Point();
    middle_p0.show();
}

int main()
{
    Line ab(1,1,3,3);
    ab.Length();
    ab.show();
    return 0;
}
