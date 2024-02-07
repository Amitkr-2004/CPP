#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> v,int i,int n){
    if(i==n)    return;
    cout<<v[i]<<" ";
    print(v,i+1,n);
}
int main(){
    vector<int> v;
    int n,i;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    print(v,0,n);
}