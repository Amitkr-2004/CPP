#include<iostream>
#include<vector>
using namespace std;
int main(){
    int r,c,r1,c1,r2,c2;
    cin>>r>>c;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        cin>>arr[i][j];
    }
    }
    cin>>r1>>c1;
    cin>>r2>>c2;
    int sum=0;
    for(int i=r1;i<=r2;i++){
        for(int j=c1;j<=c2;j++){
            sum+=arr[i][j];
        }
}
cout<<sum;
}
