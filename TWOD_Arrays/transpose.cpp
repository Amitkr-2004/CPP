#include<iostream>
using namespace std;
int main(){
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    int trans[c][r];
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            trans[i][j]= arr[j][i];
        }
    }
    cout<<"the transpose is "<<endl;
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }

}