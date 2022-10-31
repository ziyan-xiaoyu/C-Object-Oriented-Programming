#include<iostream>
using namespace std;
const float PI=3.14;

class Round{
    public:
       Round(){
       r=0;
       }
       void get(){
       cout<<"输入圆的半径值："<<endl;
       cin>>r;
       }
        float circumference(){
            return 2*PI*r;
        }
        float area(){
            return PI*r*r;
        }
    private:
        float r;
};

int main(){
   Round round;
   round.get();
   float c=round.circumference();
   cout<<"圆的周长是："<<c<<endl;
   float a=round.area();
   cout<<"圆的面积是："<<a<<endl;
   return 0;
}
