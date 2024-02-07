#include<iostream>
using namespace std;
class Player{
    private:
        int health;
        int score;
        int height;
        bool isAlive;

    public:
        void setHealth(int health){
            this->health=health;
        }
        void setScore(int score){
            this->score=score;
        }
        void setHeight(int height){
            this->height=height;
        }
        void setisAlive(bool isAlive){
            this->isAlive=isAlive;
        }
        int getHealth(){
            return health;
        }
        int getScore(){
            return score;
        }
        int getHeight(){
            return height;
        }
        bool getisAlive(){
            return isAlive;
        }
};
int add(Player a,Player b){
    int ans=(a.getScore()+b.getScore());
    return ans;
}
Player maxScore(Player a,Player b){
    if(a.getScore()>b.getScore())   return a;
    else    return b;
}
int main(){
    Player Amit;
    Amit.setHealth(50); 
    Amit.setScore(100); 
    Amit.setHeight(174); 
    Amit.setisAlive(true); 

    Player Anuj;
    Anuj.setHealth(40); 
    Anuj.setScore(90); 
    Anuj.setHeight(170); 
    Anuj.setisAlive(true); 

   cout<<add(Amit,Anuj)<<endl;
   Player Nilabh=maxScore(Amit,Anuj);
   cout<<Nilabh.getScore()<<endl;
   cout<<Nilabh.getHeight()<<endl;
   cout<<Nilabh.getisAlive();
}