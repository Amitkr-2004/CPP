#include<iostream>
using namespace std;
int sum(int n,int &s){
    if(n==0)    return s;
    int rem=n%10;
    s+=rem;
    sum(n/10,s);
}
int main(){
    int n;
    cin>>n;
    int s=0;
    cout<<endl;
    cout<<sum(n,s);
}