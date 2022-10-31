#include<iostream>
using namespace std;

class Building{
private:
    int floor;
    int room;
    float total_area;
public:
    Building(int floor0,int room0,float total_area0)
    {
        floor=floor0;
        room=room0;
        total_area=total_area0;
    }
    void show()
    {
        cout<<"房间总数："<<room<<endl;
        cout<<"楼层数："<<floor<<endl;
        cout<<"楼房总面积："<<total_area<<endl;
    }
};

class Home_Arch:public Building{
private:
    int badroom;
    int livingroom;
    int washroom;
    int kitchen;
public:
    Home_Arch(int badroom0,int livingroom0,int washroom0,int kitchen0,int floor0,
              int room0,float total_area0):Building(floor0,room0,total_area0)
    {
       badroom=badroom0;
       livingroom=livingroom0;
       washroom=washroom0;
       kitchen=kitchen0;
    }
    void show()
    {
       cout<<"卧室数："<<badroom<<endl;
       cout<<"客厅数："<<livingroom<<endl;
       cout<<"卫生间数："<<washroom<<endl;
       cout<<"厨房数："<<kitchen<<endl;
       Building::show();
       cout<<endl;
    }
};

class Office_Building:public Building{
private:
    int office;
    int meetingroom;
public:
    Office_Building(int office0,int meetingroom0,int floor0,int room0,
                    float total_area0):Building(floor0,room0,total_area0)
    {
        office=office0;
        meetingroom=meetingroom0;
    }
    void show()
    {
        cout<<"办公室数："<<office<<endl;
        cout<<"会议室数："<<meetingroom<<endl;
        Building::show();
    }
};

int main()
{
   Home_Arch home(5,2,2,1,2,10,180);
   cout<<"住宅楼——"<<endl;
   home.show();
   Office_Building officeb(20,5,4,25,1000);
   cout<<"办公室楼——"<<endl;
   officeb.show();

   return 0;
}
