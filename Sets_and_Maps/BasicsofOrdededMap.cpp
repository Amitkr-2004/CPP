#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,int>m;
    m[3]=5;
    m[1]=2;
    m[2]=10;
    for(auto x:m){
        cout<<x.first<<" ";
    }
}