#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> v,int i,int r,int n,int org){
    if(i==n){
        cout<<endl;
        i=0;
        print(v,i,r+1,n-1,org);
        return;
    }
    if(r==org){
        return;
    }
    if(r==0){
        cout<<v[i]<<" ";
        print(v,i+1,r,n,org);
        return;
    }
    else {
        v[i]=(v[i]+v[i+1]); 
        cout<<v[i]<<" ";
        print(v,i+1,r,n,org);
        return;
    }
}
int main(){
    int n=5;
    int org=n;
    vector<int> v;
    v={5,4,3,2,1};
    print(v,0,0,n,org);
}