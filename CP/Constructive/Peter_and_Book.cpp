#include<bits/stdc++.h>
using namespace std;

int total=0;
int ans=0;
int solve(int x,int n,vector<int> &v){
    for(int i=x;i<7;i++){
        total+=v[i];
        if(total>=n){
            ans=i+1;
            return ans;
        }
        if(i==6){ 
            if(solve(0,n,v)!=-1)    return ans;
        }    
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    vector<int> v(7);
    for(int i=0;i<7;i++){
        cin>>v[i];
    }

    cout<<solve(0,n,v);
    
}