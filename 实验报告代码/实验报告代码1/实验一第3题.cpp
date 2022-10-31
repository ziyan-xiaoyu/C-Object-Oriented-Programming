#include<iostream>
using namespace std;

class score{
public:
    void setscore(float english_score0){
        english_score=english_score0;
    }
    void printscore(){
        cout<<english_score<<endl;
    }
private:
    float english_score;
};

int main(){
    score stu1,stu2;
    stu1.setscore(85.5);
    stu2.setscore(93.5);
    stu1.printscore();
    stu2.printscore();
    return 0;
}
