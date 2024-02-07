#include<iostream>
#include<string>
using namespace std;
class books{
    public:
    char name;
    int price;
    int pages;

    public:
    int countbooks(int p){
        if(p>price) return 1;
        else    return 0;
    }

    bool isBookPresent(char n){
        if(n==name) return 1;
        else    return 0;
    }
};
int main(){
    books physics;
    physics.name='p';
    physics.price=500;
    physics.pages=1070;

    cout<<physics.countbooks(600)<<endl;
    cout<<physics.isBookPresent('p')<<endl;
}