#include<iostream>
using namespace std;
const float PI=3.14;

class Round{
    public:
       Round(){
       r=0;
       }
       void get(){
       cout<<"����Բ�İ뾶ֵ��"<<endl;
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
   cout<<"Բ���ܳ��ǣ�"<<c<<endl;
   float a=round.area();
   cout<<"Բ������ǣ�"<<a<<endl;
   return 0;
}
