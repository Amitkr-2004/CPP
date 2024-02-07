#include<iostream>
using namespace std;
class bike{
    public:
    int tyreSize;
    int engineSize;
    bike(){
        cout<<"Constructor ko call hua"<<endl;
    }
    ~bike(){
        cout<<"destructor call hua"<<endl;
    }
    bike(int tyreSize,int engineSize){
        this->tyreSize=tyreSize;
        this->engineSize=engineSize;
    }
};
int main(){
    bike honda(12,150);
    bike yamaha(10,200);
    bike hero(11,200);
    bool flag=true;
    if(flag==true){
        bike bmw(18,1000);
        cout<<bmw.tyreSize<<" "<<bmw.engineSize<<endl;
    }

    cout<<honda.tyreSize<<" "<<honda.engineSize<<endl;
    cout<<yamaha.tyreSize<<" "<<yamaha.engineSize<<endl;
    cout<<hero.tyreSize<<" "<<hero.engineSize<<endl;
}