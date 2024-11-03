#include <bits/stdc++.h>

using namespace std;

int main(){
 int t;
 cin>>t;

 while(t-->0){
    int x,y,n;
    cin>>x>>y>>n;
    
    int rem=n%x;
    int change=rem-y;
    if(change<0)    change+=x;
    
    cout<<n-change<<endl;
 } 
 
}