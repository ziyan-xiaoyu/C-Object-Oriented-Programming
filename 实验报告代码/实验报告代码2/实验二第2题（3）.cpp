#include<iostream>
#include<string>
using namespace std;

class AddressBook{
public:
    AddressBook(string studentName0="000000",string studentSchool0="000000",
                string phoneNum0="000000",string mailBox0="000000");
    ~AddressBook();
    void print();
    void GetName();
    void GetScool();
    void GetNum();
    void GetBox();
private:
    string studentName;
    string studentSchool;
    string phoneNum;
    string mailBox;
};

AddressBook::AddressBook(string studentName0,string studentSchool0,
                         string phoneNum0,string mailBox0)
{
    cout<<"construct"<<endl;
    studentName=studentName0;
    studentSchool=studentSchool0;
    phoneNum=phoneNum0;
    mailBox=mailBox0;

}

AddressBook::~AddressBook()
{
    cout<<"destruct"<<endl;
}

void AddressBook::print()
{
    cout<<"姓名："<<studentName<<endl;
    cout<<"学校："<<studentSchool<<endl;
    cout<<"电话号码："<<phoneNum<<endl;
    cout<<"邮编："<<mailBox<<endl;
}

void AddressBook::GetName()
{
    cin>>studentName;
}

void AddressBook::GetScool()
{
    cin>>studentSchool;
}

void AddressBook::GetNum()
{
    cin>>phoneNum;
}

void AddressBook::GetBox()
{
    cin>>mailBox;
}


////方式一：调用成员函数输入：
//int main()
//{
//    AddressBook stu1;
//
//    cout<<"请输入学生基本信息："<<endl;
//    stu1.GetName();
//    stu1.GetScool();
//    stu1.GetNum();
//    stu1.GetBox();
//
//    stu1.print();
//    return 0;
//}

//方式二：定义对象时直接赋值：
int main()
{
    AddressBook stu1("王五","上海师范大学","021-12312345","0123344");

    stu1.print();
    return 0;
}
