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
    cout<<"������"<<studentName<<endl;
    cout<<"ѧУ��"<<studentSchool<<endl;
    cout<<"�绰���룺"<<phoneNum<<endl;
    cout<<"�ʱࣺ"<<mailBox<<endl;
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
    cout<<"������ѧ��������Ϣ��"<<endl;
    stu1.GetName();
    stu1.GetScool();
    stu1.GetNum();
    stu1.GetBox();
    stu1.print();
    return 0;
}

