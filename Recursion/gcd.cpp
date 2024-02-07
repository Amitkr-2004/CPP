#include<iostream>
using namespace std;
int hcf(int a,int b){
    int mn=min(a,b);
    for(int i=mn;i>=2;i--){
        if(a%i==0 && b%i==0)    return i;
    }
    return 1;
}
int gcd(int a,int b){
    if(a==0)    return b;
    return gcd(b%a,a);
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
}