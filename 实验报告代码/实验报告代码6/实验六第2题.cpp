#include<iostream>
using namespace std;

class Animal{
protected:
    string name;
public:
    Animal(string name0){name=name0;}
    virtual void Identify(){cout<<"I am an animal:"<<name<<endl;}
};

class Cat:public Animal{
public:
    Cat(string name0):Animal(name0){}
    void Identify()
    {
        cout<<"I am a cat:"<<name<<endl;
    }
};

class Dog:public Animal{
public:
    Dog(string name0):Animal(name0){}
    void Identify()
    {
        cout<<"I am a dog:"<<name<<endl;
    }
};

class Tiger:public Cat{
public:
    Tiger(string name0):Cat(name0){}
    void Identify()
    {
        cout<<"I am a tiger:"<<name<<endl;
    }
};

class Zoo{
public:
    Zoo(int maxnum){max_animals=maxnum;num_animals=0;}
    ~Zoo(){delete *residents;}
    void Accept(Animal *d);
    void ListAnimal();
private:
    int max_animals;
    int num_animals;
    Animal *residents[3];
};

void Zoo::Accept(Animal *d)
{
    residents[num_animals]=d;
    num_animals++;
    if(max_animals<num_animals){cout<<"动物园圈养动物数量已达上线！"<<endl;}
}

void Zoo::ListAnimal()
{
    cout<<"上海动物园圈养的动物列表："<<endl;
    for(int i=0;i<num_animals;i++)
        residents[i]->Identify();
    cout<<"共"<<num_animals<<"只动物。"<<endl;
}

int main()
{
    Cat cat("汤姆猫");
    cat.Identify();
    Dog dog("汪汪狗");
    dog.Identify();
    Tiger tiger("贝乐虎");
    tiger.Identify();

    Zoo shanghai(8);
    shanghai.Accept(&cat);
    shanghai.Accept(&dog);
    shanghai.Accept(&tiger);

    shanghai.ListAnimal();

    return 0;
}
