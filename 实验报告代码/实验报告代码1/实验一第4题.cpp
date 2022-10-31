#include<iostream>
using namespace std;
const float PI=3.14;

class cylinder{
public:
    cylinder(float r0,float h0);
    float volume();
    float superficial();
    ~cylinder();
private:
    float r;
    float h;

};

cylinder::cylinder(float r0,float h0)
{
    r=r0;
    h=h0;
    cout<<"Constructor called."<<endl;
}
float cylinder::volume()
{
    return PI*r*r*h;
}
float cylinder::superficial()
{
    return 2*PI*r*r+2*PI*r*h;
}
cylinder::~cylinder()
{
    cout<<"Destructor called."<<endl;
}
int main(){
    cylinder c1(1,2);
    cout<<"该圆柱的体积为；"<<c1.volume()<<endl;
    cout<<"该圆柱的表面积为；"<<c1.superficial()<<endl;

    return 0;
}
