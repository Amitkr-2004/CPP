#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cin>>str;
    for(int i=0;str[i]!='\0';i++){
        int convert=(char)(str[i]);
        cout<<convert<<" ";
    }
}