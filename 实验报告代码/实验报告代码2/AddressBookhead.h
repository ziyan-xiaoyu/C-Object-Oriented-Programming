#include<iostream>
#include<string>
using namespace std;

class AddressBook{
public:
    AddressBook();
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
