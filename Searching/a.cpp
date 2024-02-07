#include<iostream>
#include<vector>
using namespace std;
bool Elementinmatrix(vector<vector<int> > &v,int target,int m,int n){
    int l=0;
    int r=n-1;
    int ans = -1;
    bool flag=false;
    for(int i=0;i<m;i++){
    if(v[i][n-1]>target){
        flag=true;
        ans = i;
        break;
    }
    else if(v[i][n-1]==target){
        return true;
    }
    }
    if(flag==false) return false;
    while(l<=r){
     int mid = l+(r-l)/2;
     if(v[ans][mid] == target) return true;
     else if(v[ans][mid]> target){
        r = mid-1;
     }
     else{
        l = mid+1;
     }
    }
    return false;
    }
int main(){
    int m,n;
    cin >>m;
    cin >> n;
    vector<vector<int> >v(m,vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> v[i][j];
        }
    }
    int target;
    cin >> target;
    cout <<  Elementinmatrix(v,target,m,n);
    return 0;
}