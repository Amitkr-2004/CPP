#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    vector<vector<int>> v(n,vector<int> (3));

    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>v[i][j];
        }
    }

    int x=0,y=0,z=0;
    for(int i=0;i<n;i++){
        x+=v[i][0];
        y+=v[i][1];
        z+=v[i][2];
    }
    if(x==0 and y==0 and z==0)  cout<<"YES"<<endl;
    else    cout<<"NO"<<endl;
}