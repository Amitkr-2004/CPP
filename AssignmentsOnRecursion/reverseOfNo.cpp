#include<iostream>
using namespace std;
int reverse(int n,int &r){
    if(n==0)    return r;
    int rem=n%10;
    r=r*10 +rem;
    reverse(n/10,r);
}
int main(){
    int n;
    cin>>n;
    int r=0;
    cout<<reverse(n,r);
}