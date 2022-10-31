#include<iostream>
using namespace std;
//���跿�������a��ʾ������10������20��������5������8���칫��20��������40

class Building{
private:
    int floor;
    int room;
    float total_area;
public:
    Building(int floor0,int room0)
    {
        floor=floor0;
        room=room0;
        total_area=0;
    }
    void area(float a1,int room1);
    float get_total_area(){return total_area;}
    int getfloor(){return floor;}
};

void Building::area(float a1,int room1)
{
    total_area+=a1*room1;
}

class Home_Arch:virtual public Building{
private:
    int badroom;
    int livingroom;
    int washroom;
    int kitchen;
public:
    Home_Arch(int badroom0,int livingroom0,int washroom0,int kitchen0,int floor0,int room0):Building(floor0,room0)
    {
       badroom=badroom0;
       livingroom=livingroom0;
       washroom=washroom0;
       kitchen=kitchen0;
    }
    void show();
};

void Home_Arch::show()
{
    area(10,badroom);
    area(20,livingroom);
    area(5,washroom);
    area(8,kitchen);

    cout<<"¥������"<<getfloor()<<endl;
    cout<<"��������"<<badroom<<endl;
    cout<<"��������"<<livingroom<<endl;
    cout<<"����������"<<washroom<<endl;
    cout<<"��������"<<kitchen<<endl;
    cout<<"¥���������"<<get_total_area()<<endl;
    cout<<endl;
}

class Office_Building:virtual public Building{
private:
    int office;
    int meetingroom;
public:
    Office_Building(int office0,int meetingroom0,int floor0,int room0):Building(floor0,room0)
    {
        office=office0;
        meetingroom=meetingroom0;
    }
    void show();
};

void Office_Building::show()
{
    area(20,office);
    area(40,meetingroom);

    cout<<"¥������"<<getfloor()<<endl;
    cout<<"�칫������"<<office<<endl;
    cout<<"����������"<<meetingroom<<endl;
    cout<<"¥���������"<<get_total_area()<<endl;
}

int main()
{
   Home_Arch home(3,2,2,1,1,8);
   cout<<"סլ¥����"<<endl;
   home.show();
   Office_Building officeb(4,2,1,6);
   cout<<"�칫��¥����"<<endl;
   officeb.show();

   return 0;
}
