#include<iostream>
using namespace std;
class player{
    private:
    int score;
    int health;

    public:
    void setScore(int s){
        score=s;
    }
    void setHealth(int h){
        health=h;
    }
    int getScore(){
        return score;
    }
    int getHealth(){
        return health;
    }
};
int main(){
    player amit;
    amit.setScore(100);
    amit.setHealth(50);

    cout<<amit.getScore()<<endl;
    cout<<amit.getHealth()<<endl;
}