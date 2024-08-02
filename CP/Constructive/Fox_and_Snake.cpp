#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<char>> v(n,vector<char> (m,'.'));
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<m;j++){
                v[i][j]='#';
            }
        }
    }

    int count=1;
    for(int i=0;i<n;i++){
        if(i%2==1){
            if(count%2==1)  v[i][m-1]='#';
            else    v[i][0]='#';
            count++;   
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j]<<"";
        }
        cout<<endl;
    }
}