#include<iostream>
#include<vector>
using namespace std;
vector<int> sort(vector<int> &v1,int n,vector<int> &v2,int m){
    vector<int> v3(m+n);
    int i=0;
    int j=0;
    int k=0;
    while(i<=n-1 && j<=m-1){
    if(v1[i]<v2[j]){
        v3[k]=v1[i];
        i++;
    }
    else if(v2[j]<v1[i]){
        v3[k]=v2[j];
        j++;
    }
    k++; 
    }
    if(i==n){
        while(j<m){
            v3[k++]=v2[j];
            j++;
        }
    }
    else if(j==m){
        while(i<n){
            v3[k++]=v1[i];
            i++;
        }
    }
    return v3;
}
    int main(){
    int n;
    cin>>n;
    vector<int> v1;
    vector<int> v2;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v1.push_back(a);
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int b;
        cin>>b;
        v2.push_back(b);
    }
    vector<int> v=sort(v1,n,v2,m);
    for(int i=0;i<m+n;i++){
        cout<<v[i]<<" ";
    }
}

