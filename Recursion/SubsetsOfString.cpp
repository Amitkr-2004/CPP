#include<iostream>
#include<string>
#include<vector>
using namespace std;
//M2
void print(string s,string t){
    if(s.size()==0){
        cout<<"{"<<t<<"}"<<endl;
        return;
    }
    char ch=s[0];
    print(s.substr(1),t+ch);
    print(s.substr(1),t);
}
//M2
void print2(string s,string t,int i){
    if(i==s.size()){
        cout<<"{"<<t<<"}"<<endl;
        return;
    }
    char ch=s[i];
    print2(s,t+ch,i+1);
    print2(s,t,i+1);
}
void store(string s,string t,int i,vector<string> &v){
    if(i==s.size()){
        v.push_back(t);
        return;
    }
    char ch=s[i];
    store(s,t+ch,i+1,v);
    store(s,t,i+1,v);
}
int main(){
    string s="abcd";
    string t;
    vector<string> v;
    store(s,t,0,v);
    for(int i=0;i<v.size();i++){
        cout<<"{"<<v[i]<<"}"<<endl;
    }
}