#include<iostream>
#include<string>
using namespace std;

class AddressBook{
private:
    AddressBook();
    ~AddressBook();
    void print();
    void GetName();
    void GetScool();
    void GetNum();
    void GetBox();

    string studentName;
    string studentSchool;
    string phoneNum;
    string mailBox;
};

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
