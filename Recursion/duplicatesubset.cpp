#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void duplicate(string t,string s,bool flag){
    sort(s.begin(),s.end());
    if(s.size()==0){
        cout<<t<<endl;
        return;
    }
    char ch=s[0];
    if(s.size()==1){  
        if(flag==true)  duplicate(t+ch,s.substr(1),true);
        duplicate(t,s.substr(1),true);
        return;
    }
    
    char dh=s[1];
    if(ch==dh){
        if(flag==true)  duplicate(t+ch,s.substr(1),true);
        duplicate(t,s.substr(1),false);
    }
    else{
        if(flag==true)  duplicate(t+ch,s.substr(1),true);
        duplicate(t,s.substr(1),true);
    }
}
int main(){
    string s="ababc";
    string t;
    duplicate(t,s,true);
}