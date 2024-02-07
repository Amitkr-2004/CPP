#include<iostream>
using namespace std;
class Vehicle{
    public:
    virtual void show(){
        cout<<"Vehicle ka show!! \n";
    }
};
class Bike:public Vehicle{
    public:
    void show(){
        cout<<"bike ka show!! \n";
    }
};
class C:public Bike{
    public:
    void show(){
        cout<<"C ka show!!"<<endl;
    }
};
//virtual is used for runtime Binding
int main(){
    // Bike b;
    // Vehicle *a;
    // a=new Bike;
    // a->show();
    // a=new Vehicle;
    // a->show();

    C c;
    Bike *b;
    b=&c;
    b->show();

}
