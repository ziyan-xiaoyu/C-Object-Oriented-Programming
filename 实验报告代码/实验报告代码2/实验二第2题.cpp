#include<iostream>
#include<string>
#include"AddressBookhead.h"
using namespace std;

AddressBook::AddressBook()
{
    cout<<"construct"<<endl;
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

int main()
{
    AddressBook stu1;
    cout<<"请输入学生基本信息："<<endl;
    stu1.GetName();
    stu1.GetScool();
    stu1.GetNum();
    stu1.GetBox();
    stu1.print();
    return 0;
}

