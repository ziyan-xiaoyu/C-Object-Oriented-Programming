#include<iostream>
using namespace std;

class Student{
private:
    string name;
    string num;
    float chinese;
    float math;
    float english;

public:
    Student(string name0="0",string num0="0",float chinese0=0,
            float math0=0,float english0=0)
    {
        name=name0;
        num=num0;
        chinese=chinese0;
        math=math0;
        english=english0;
    }
    void getname(){cin>>name;}
    void getnum(){cin>>num;}
    void getchinese(){cin>>chinese;}
    void getmath(){cin>>math;}
    void getenglish(){cin>>english;}
    void print()
    {
        cout<<"������"<<name<<endl;
        cout<<"ѧ�ţ�"<<num<<endl;
        cout<<"���ĳɼ���"<<chinese<<endl;
        cout<<"��ѧ�ɼ���"<<math<<endl;
        cout<<"Ӣ��ɼ���"<<english<<endl;
    }
};

int main()
{
    Student stu1;
    stu1.getname();
    stu1.getnum();
    stu1.getchinese();
    stu1.getmath();
    stu1.getenglish();
    stu1.print();

    return 0;
}
