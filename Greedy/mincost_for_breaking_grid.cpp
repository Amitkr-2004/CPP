#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long int
using namespace std;

bool cmp(ll a,ll b){
    return a>b;
}

ll mincostforBreakingGrid(vector<ll> &vertical,vector<ll> &horizontal){

    sort(vertical.begin(),vertical.end(),cmp);
    sort(horizontal.begin(),horizontal.end(),cmp);
    int hz=1;
    int vt=1;
    int v=0,h=0;
    int totalcost=0;

    while(h<horizontal.size() && v<vertical.size()){
        if(vertical[v]>horizontal[h]){
            totalcost+=vertical[v]*vt;
            hz++;

            v++;
        }
        else{
            totalcost+=horizontal[h]*hz;
            vt++;

            h++;
        }
    }
    if(h==horizontal.size()){
        while(v<vertical.size()){
           totalcost+=vertical[v]*vt;
            hz++;

            v++; 
        }
    }
    if(v==vertical.size()){
        while(h<horizontal.size()){
           totalcost+=horizontal[h]*hz;
            vt++;

            h++; 
        }
    }
    return totalcost;
}


int main(){
    int n,m;
    cin>>n>>m;
    vector<ll> horizontal,vertical;
    for(int i=0;i<n-1;i++){
        ll x;
        cin>>x;
        vertical.push_back(x);
    }
    for(int i=0;i<m-1;i++){
        ll x;
        cin>>x;
        horizontal.push_back(x);
    }
    cout<<mincostforBreakingGrid(vertical,horizontal);
}