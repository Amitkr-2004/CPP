#include<iostream>
#include<string>
using namespace std;
class player{
    private:
    int score;
    int height;
    int health;

    public:
    void create(){
        score=80;
        height=6;
        health=80;

        cout<<score<<endl;
        cout<<height<<endl;
        cout<<health<<endl;
    }
};
int main(){
    player amit;
    // amit.score=90;
    // amit.height=6;
    // amit.health=100;

    // cout<<amit.score<<endl;
    // cout<<amit.height<<endl;
    // cout<<amit.health<<endl;
    amit.create();
}