#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t-->0){
        int n,m;
        cin>>n>>m;

        vector<vector<char>> v(n,vector<char> (m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>v[i][j];
            }
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(v[i][m-1]=='R')  count++;
        }
        for(int i=0;i<m;i++){
            if(v[n-1][i]=='D')  count++;
        }
        cout<<count<<endl;
        
    }
}