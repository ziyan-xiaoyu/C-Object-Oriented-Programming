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
    void getname(){cin>>name;}
    void getnum(){cin>>num;}
    void getchinese(){cin>>chinese;}
    void getmath(){cin>>math;}
    void getenglish(){cin>>english;}
    friend void operator==(Student stux,Student stuy);
    friend void operator>(Student stux,Student stuy);
};

void operator==(Student stux,Student stuy)
{
    float aver1,aver2;
    aver1=(stux.chinese+stux.math+stux.english)/3;
    aver2=(stuy.chinese+stuy.math+stuy.english)/3;
    if(aver1==aver2)cout<<"两位学生的成绩相等。"<<endl;
    else cout<<"两位学生的成绩不相等。"<<endl;
}

void operator>(Student stux,Student stuy)
{
    float aver1,aver2;
    aver1=(stux.chinese+stux.math+stux.english)/3;
    aver2=(stuy.chinese+stuy.math+stuy.english)/3;
    if(aver1>aver2)cout<<stux.name<<"的成绩比"<<stuy.name<<"的成绩高。"<<endl;
    else if(aver1<aver2)cout<<stuy.name<<"的成绩比"<<stux.name<<"的成绩高。"<<endl;
    else cout<<"两位学生的成绩相等。"<<endl;
}

int main()
{
    Student stu1,stu2;
    cout<<"请输入第一位学生的信息："<<endl;
    stu1.getname();
    stu1.getnum();
    stu1.getchinese();
    stu1.getmath();
    stu1.getenglish();
    cout<<"请输入第二位学生的信息："<<endl;
    stu2.getname();
    stu2.getnum();
    stu2.getchinese();
    stu2.getmath();
    stu2.getenglish();

    stu1==stu2;//operator==(stu1,stu2);

    stu1>stu2;//operator>(stu1,stu2);

    return 0;
}


//友元函数的形式重载“==”运算符
