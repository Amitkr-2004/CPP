#include<iostream>
using namespace std;
int powLog(int x,int n){
    if(n==1)    return x;
    if(n==0)    return 1;
    int ans;
    if(n%2==0)
        ans=powLog(x,n/2)*powLog(x,n/2);
    else
         ans=powLog(x,n/2)*powLog(x,n/2)*x;
         return ans;
}
int main(){
    int x,n;
    cin>>x>>n;
    cout<<powLog(x,n);
}