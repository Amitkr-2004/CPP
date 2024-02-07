#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> &v1,vector<int> v2,int i,int n){
    if(i==n){
        for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }
    cout<<endl;
    return;
    }
    int val=v1[i];
    print(v1,v2,i+1,n);
    v2.push_back(val);
    print(v1,v2,i+1,n);
}
int main(){
    vector<int> v1;
    v1={1,2,3};
    vector<int> v2;
    print(v1,v2,0,3);
}