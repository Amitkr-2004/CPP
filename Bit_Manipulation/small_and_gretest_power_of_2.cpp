#include<iostream>
using namespace std;

int greatest_power_2(int n){
    n= n | (n>>1);
    n= n | (n>>2);
    n= n | (n>>4);
    n= n | (n>>8);
    n= n | (n>>16);

    return n+1;
}

int greatest_power(int n){
    int temp=0;
    while(n>0){
        temp=n;
        n= n & (n-1);
    }
    return temp*2;
}

int smallest_power(int n){
    int temp=0;
    while(n>0){
        temp=n;
        n= n & (n-1);
    }
    return temp;
}
int main(){
    cout<<smallest_power(100 );
    cout<<endl;
    cout<<greatest_power(100);
    cout<<endl;
    cout<<greatest_power_2(100);
}