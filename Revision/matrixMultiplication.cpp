#include<iostream>
#include<vector>
using namespace std;
int main(){
    int r1,c1,r2,c2;
    cin>>r1>>c1;
    cin>>r2>>c2;
    int v1[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>v1[i][j];
        }
    }
    int v2[r2][c2];
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>v2[i][j];
        }
    }
    int v3[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            v3[i][j]=0;
            for(int k=0;k<r2;k++){
                v3[i][j]+=v1[i][k]*v2[k][j];
            }
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<v3[i][j]<<" ";
        }
        cout<<endl;
    }
}