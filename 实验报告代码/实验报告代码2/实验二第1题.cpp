#include<iostream>
using namespace std;
const float PI=3.14;

class pool{
public:
    pool()
    {r=0;}
    void getr();
    float priceG();
    float priceZ();
private:
    float r;
};

void pool::getr()
{
    cin>>r;
}

float pool::priceG()
{
    return 20*PI*((r+3)*(r+3)-r*r);
}

float pool::priceZ()
{
    return 35*2*PI*(r+3);
}

int main()
{
    pool p;
    cout<<"������Ӿ�صİ뾶��";
    p.getr();
    float g=p.priceG();
    cout<<"�����ļ۸�"<<g<<"Ԫ"<<endl;
    float z=p.priceZ();
    cout<<"դ���ļ۸�"<<z<<"Ԫ"<<endl;

    return 0;
}
