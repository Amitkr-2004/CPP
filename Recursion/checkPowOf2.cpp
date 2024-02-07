#include<iostream>
using namespace std;
int check(int n){
    if(n==2)    return 1;
    if(n%2!=0)  return 0;
    check(n/2);
}

int main(){
    int n;
    cin>>n;
    cout<<check(n)<<endl;
}