#include<iostream>
using namespace std;
class Cars{
    public:
        int tyreSize;
        int engineSize;
    
    // public:
    // void settyreSize(int tyreSize){
    //     this->tyreSize=tyreSize;
    // }
    // void setengineSize(int engineSize){
    //     this->engineSize=engineSize;
    // }
    // int gettyreSize(){
    //     return tyreSize;
    // }
    // int getengineSize(){
    //     return engineSize;
    // }

    Cars(int tS,int eS):tyreSize(tS),engineSize(eS){}
    Cars(int tS):tyreSize(tS),engineSize(500){}
    Cars(double s):tyreSize(300),engineSize(600){}

};
int main(){
    Cars BMW(100,400);
    Cars Hyundai(200);
    Cars Lambo(3.145);

    cout<<BMW.engineSize<<endl;
    cout<<Hyundai.engineSize<<endl;
    cout<<Lambo.tyreSize<<endl;
    cout<<Lambo.engineSize<<endl;
}