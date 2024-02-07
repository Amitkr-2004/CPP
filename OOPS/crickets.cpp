#include<iostream>
using namespace std;
class cricketer{
private:
    string name;
    int age;
    int noOfTestMatches;
    float avgScore;

public:
    void setName(string name){
        this->name=name;
    }
    void setAge(int age){
        this->age=age;
    }
    void setTestMatches(int noOfTestMatches){
        this->noOfTestMatches=noOfTestMatches;
    }
    void setAvgScore(float avgScore){
        this->avgScore=avgScore;
    }
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
    int getTestMatches(){
        return noOfTestMatches;
    }
    float getAvgScore(){
        return avgScore;
    }
};
int main(){
    cricketer Amit;
    Amit.setName("Amit");
    Amit.setAge(20);
    Amit.setTestMatches(10);
    Amit.setAvgScore(89.5);

    cricketer Anuj;
    Anuj.setName("Anuj");
    Anuj.setAge(20);
    Anuj.setTestMatches(9);
    Anuj.setAvgScore(85.5);

    cricketer Ansh;
    Ansh.setName("Ansh");
    Ansh.setAge(20);
    Ansh.setTestMatches(10);
    Ansh.setAvgScore(89.5);

    cricketer Nilabh;
    Nilabh.setName("Nilabh");
    Nilabh.setAge(21);
    Nilabh.setTestMatches(15);
    Nilabh.setAvgScore(97.5);

    cricketer player[4]={Amit,Anuj,Ansh,Nilabh};
    for(int i=0;i<=3;i++){
        cout<<player[i].getName()<<endl;
        cout<<player[i].getAge()<<endl;
        cout<<player[i].getTestMatches()<<endl;
        cout<<player[i].getAvgScore()<<endl;
    }
}