#include<iostream>
using namespace std;
void area(int l,int b){
    cout<<l*b<<endl;
}
void area(int s){
    cout<<s*s<<endl;
}
void area(double s){
    cout<<3.14*s*s<<endl;
}
int main(){
    area(3,4);
    area(3);
    area(3.4);
}