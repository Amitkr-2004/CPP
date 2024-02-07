#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cin>>str;
    for(int i=0;str[i]!='\0';i++){
        if(i%2==0){
            str[i]='c';
        }
    }
    cout<<str;
}