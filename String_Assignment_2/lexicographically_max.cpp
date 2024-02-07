#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    int mx=0;
    int smax=0;
    for(int i=0;i<n;i++){
        int ascii=(int)(str[i]);
        if(mx<ascii){
            mx=ascii;
            smax=max(smax,mx);
        }
    }
    cout<<(char)(smax);
}