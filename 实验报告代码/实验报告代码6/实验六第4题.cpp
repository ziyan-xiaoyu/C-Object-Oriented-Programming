#include<iostream>
using namespace std;

struct Student{
string num;
float grade;
};

ostream &operator<<(ostream &output,Student x0)
    {
        output<<"Ñ§ºÅ£º"<<x0.num<<"  ·ÖÊý£º"<<x0.grade<<endl;
        return output;
    }

template<typename T>
class storage{
public:
    storage(T x0){x=x0;}
    void show()
    {
        cout<<x<<endl;
    }
private:
    T x;
};

int main()
{
    storage <int>store1(10);
    store1.show();
    storage <float>store2(3.14159);
    store2.show();
    storage <char>store3('a');
    store3.show();

    Student stu1={"20002462",90};
    storage <Student>store4(stu1);
    store4.show();

    return 0;
}
