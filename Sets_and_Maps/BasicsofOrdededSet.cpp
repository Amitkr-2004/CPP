#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int>s;
    s.insert(10);
    s.insert(40);
    s.insert(30);
    s.insert(10);
    s.insert(20);
    for(auto ele:s){
        cout<<ele<<" ";
    }
}