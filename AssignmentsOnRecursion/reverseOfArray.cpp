#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int> v,int n,int i){
    if(i==n){
        return;
    }
    reverse(v,n,i+1);
    cout<<v[i]<<" ";
}
int main(){
    vector<int> v;
    v={2,4,5,6,7};
    int n=5;
    reverse(v,n,0);
}