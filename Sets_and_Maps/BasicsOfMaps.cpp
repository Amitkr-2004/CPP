#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> m;
    m["Amit"]=55;
    m["Anuj"]=38;
    m["Nilabh"]=131;

    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<m.size();
    m.erase("Amit");
    cout<<endl;
    cout<<m.size();
}