#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n=5;
    // vector<vector<int>> v;
    // for(int i=1;i<=n;i++){
    //     vector<int> a(i);
    //     v.push_back(a);
    // }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         if(i==j || j==0)
    //             v[i][j]=1;
    //         else{
    //             v[i][j]=v[i-1][j-1]+v[i-1][j];
    //         }
    //     }
    // }
    //     for(int i=0;i<n;i++){
    //         for(int j=0;j<=i;j++){
    //             cout<<v[i][j]<<" ";
    //         }
    //         cout<<endl;
    //     }
    // cout<<endl;
    for(int i=0;i<n;i++){
        int curr=1;
        for(int j=0;j<=i;j++){
            cout<<curr<<" ";
            curr=curr*(i-j)/(j+1);
        }
        cout<<endl;
    }
    cout<<endl;
}