#include<iostream>
using namespace std;
class Gun{
    public:
    int damage;
    int ammo;
    int scope;
};
class Player{
    class Helmet{
        private:
        int hp;
        int level;

        public:
        void sethp(int hp){
            this->hp=hp;
        }
        void setlevel(int level){
            this->level=level;
        }
        int gethp(){
            return hp;
        }
        int getlevel(){
            return level;
        }
    };
    private:
        int health;
        int score;
        int height;
        bool isAlive;
        Gun gun;
        Helmet helmet;

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
        void setGun(Gun gun){
            this->gun=gun;
        }
        void setHelmet(int level){
            Helmet *helmet=new Helmet;
            helmet->setlevel(level);
            if(level==1){
                health=25;
            }
            else if(level==2){
                health=50;
            }
            else if(level==3){
                health=100;
            }
            else
                cout<<"Invalid level";
            helmet->sethp(health);
            this->helmet=*helmet;
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
        Gun getgun(){
            return gun;
        }
        void getHelmet(){
            cout<<helmet.gethp()<<endl;
            cout<<helmet.getlevel()<<endl;
        }
};
Player maxScore(Player a,Player b){
    if(a.getScore()>b.getScore())   return a;
    else    return b;
}
int main(){
    Player Amit;
    Gun akm;
    akm.damage=50;
    akm.ammo=100;
    akm.scope=2;

    Amit.setHealth(50); 
    Amit.setScore(100); 
    Amit.setHeight(174); 
    Amit.setisAlive(true); 
    Amit.setGun(akm);
    Amit.setHelmet(3);

    Gun awm;
    akm.damage=70;
    akm.ammo=80;
    akm.scope=3;

    Player Anuj;
    Anuj.setHealth(40); 
    Anuj.setScore(90); 
    Anuj.setHeight(170); 
    Anuj.setisAlive(true); 
    Anuj.setGun(awm);
    Anuj.setHelmet(2);

    Player *Nilabh=new Player;
    Nilabh->setHealth(60);
    Nilabh->setScore(90);
    Nilabh->setHeight(175);
    Nilabh->setisAlive(false);

    Amit.getHelmet();
    Anuj.getHelmet();
    // Gun gun12=Amit.getgun();
    // cout<<gun12.ammo<<endl;
    // cout<<gun12.damage<<endl;
    // cout<<gun12.scope<<endl;


    // cout<<Nilabh->getHealth();
}