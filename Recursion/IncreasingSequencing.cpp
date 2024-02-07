#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> &v1,vector<int> v2,int i,int n,int k){
    if(i==n){
        if(v2.size()==k){
            for(int i=0;i<v2.size();i++){
                cout<<v2[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    int val=v1[i];
    if(v2.size()+(n-i)<k)   return;
    print(v1,v2,i+1,n,k);
    v2.push_back(val);
    print(v1,v2,i+1,n,k);
}
int main(){
    vector<int> v1;
    v1={1,2,3,4,5};
    vector<int> v2;
    int k=2;
    print(v1,v2,0,5,k);
}