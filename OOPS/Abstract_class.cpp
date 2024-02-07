#include<iostream>
using namespace std;
class Vehicle{
    public:
    int tyreSize;
    int EngineSize;
    void show(){
        cout<<"show"<<endl;
    }
    virtual void calculateMileage()=0;
    virtual void color()=0;
};
class Bike:public Vehicle{
    public:
    void calculateMileage(){
        cout<<"mileage";
    }
    void color(){
        cout<<"red";
    }
};

//virtual is used for runtime Binding
int main(){
    Bike b;
    b.calculateMileage();

}
