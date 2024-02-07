#include<iostream>
using namespace std;
//M1
void print(string s,int i,string t){
    if(i==s.size()){
        cout<<t;
        return;
    }
    if(s[i]!='a')   t = t+ s[i]; 
    print(s,i+1,t);
}
//M2
void remove(string s,string t){
    if(s.size()==0){
        cout<<t<<endl;
        return;
    }
    char ch=s[0];
    if(ch=='a')     return  remove(s.substr(1),t);
    else        return remove(s.substr(1),t+ch);
}
int main(){
    string s="abacg";
    string t;
    // print(s,0," ");
    remove(s,t);
}