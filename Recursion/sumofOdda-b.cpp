#include<iostream>
using namespace std;
void sum(int a,int b,int &s){
    if(a>b) return;
    if(a%2==1){
        s=s+a;
        sum(a+2,b,s);
    }
    else{
        sum(a+1,b,s);
    }
}
int main(){
    int a,b;
    int s=0;
    cin>>a>>b;
    sum(a,b,s);
    cout<<s<<endl;
}