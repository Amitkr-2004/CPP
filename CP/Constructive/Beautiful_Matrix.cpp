#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> grid(5,vector<int> (5));

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>grid[i][j];
        }
    }

    int r=0,c=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(grid[i][j]==1){
                r=i,c=j;
                break;
            }
        }
    }
    int ops=0;
    while(r!=2){
        if(r<2)     r++;
        else    r--;
        ops++;
    }

    while(c!=2){
        if(c<2)     c++;
        else    c--;
        ops++;
    }

    cout<<ops<<endl;
}