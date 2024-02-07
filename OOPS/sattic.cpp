#include<iostream>
using namespace std;
class Bike{
    public:
        static int noOfBikes;
        int tyreSize;
        int engineSize;

    Bike(int tyreSize,int engineSize){
        this->tyreSize=tyreSize;
        this->engineSize=engineSize;
    }
    static void increaseNo(){
        noOfBikes++;
    }
};
int Bike::noOfBikes=10;
int main(){
    Bike honda(150,250);
    Bike yamaha(200,300);

    cout<<honda.noOfBikes<<endl;

    honda.increaseNo();
    cout<<honda.noOfBikes<<endl;
    cout<<yamaha.noOfBikes<<endl;

    yamaha.increaseNo();
    cout<<honda.noOfBikes<<endl;
    cout<<yamaha.noOfBikes<<endl; 

    Bike::increaseNo(); 
    cout<<honda.noOfBikes<<endl;
    cout<<yamaha.noOfBikes<<endl; 
}