#include<iostream>
#include<string>
using namespace std;

class AddressBook{
public:
    /*AddressBook(string studentName0="000000",string studentSchool0="000000",
                  string phoneNum0="000000",string mailBox0="000000");*/
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

/*AddressBook::AddressBook(string studentName0,string studentSchool0,
                           string phoneNum0,string mailBox0)
{
    cout<<"construct"<<endl;
    studentName=studentName0;
    studentSchool=studentSchool0;
    phoneNum=phoneNum0;
    mailBox=mailBox0;

}*/

AddressBook::~AddressBook()
{
    cout<<"destruct"<<endl;
}

void AddressBook::print()
{
    cout<<"姓名："<<studentName;
    cout<<"        学校："<<studentSchool<<endl;
    cout<<"电话号码："<<phoneNum;
    cout<<"     邮编："<<mailBox<<endl;
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
    string studentName[4],studentSchool[4],phoneNum[4],mailBox[4];
    cout<<"请输入学生基本信息："<<endl;
    for(int i=0;i<4;i++)
    {
        cout<<"第"<<i+1<<"位同学："<<endl;
        cin>>studentName[i];
        cin>>studentSchool[i];
        cin>>phoneNum[i];
        cin>>mailBox[i];
    }

    AddressBook stu[4]={
        AddressBook(studentName[0],studentSchool[0],phoneNum[0],mailBox[0]),
        AddressBook(studentName[1],studentSchool[1],phoneNum[1],mailBox[1]),
        AddressBook(studentName[2],studentSchool[2],phoneNum[2],mailBox[2]),
        AddressBook(studentName[3],studentSchool[3],phoneNum[3],mailBox[3])
        };

    cout<<"下面输出学生通讯录："<<endl;
    for(int i=0;i<4;i++)
    {
        cout<<"第"<<i+1<<"位同学："<<endl;
        stu[i].print();
    }

    return 0;
}
