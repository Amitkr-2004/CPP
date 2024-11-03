#include<bits/stdc++.h>
using namespace std;

double solve(int n,int m){
    if(n==m)    return 0;
    if(n>m)    return INT_MAX;

    return min(1+solve(2*n,m),1+solve(3*n,m));
}
int main(){
    int n,m;
    cin>>n>>m;

    int ans=(int)solve(n,m);
    if(ans==INT_MIN)    cout<<-1;
    else    cout<<ans;
}