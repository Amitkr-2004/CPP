#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    vector<int> v(n);
    for(int i=0;i<n;i++)    cin>>v[i];

    unordered_map<int,int> mp;
    for(int i = 0 ; i < n ; i++){
        mp[v[i]]++;
    }
    int totalChildren=0;
    int countForOdd=0;
    for(auto x:mp){
        int drink=x.first;
        int freq=x.second;

        if(freq%2==1)   countForOdd++;

        totalChildren+=freq;
    }
    totalChildren-=(countForOdd/2);
    cout<<totalChildren<<endl;
}