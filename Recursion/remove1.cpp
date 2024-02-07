#include<iostream>
#include<vector>
using namespace std;
vector<int> remove(vector<int> &v1,int n,vector<int> &v2,int i){
    if(i==n)    return v2;
    int val=v1[i];
    if(val==1)  remove(v1,n,v2,i+1);
    else{
        v2.push_back(val);
        remove(v1,n,v2,i+1);
}
}
int main(){
    vector<int> v1;
    vector<int> v2;
    v1={1,2,3,7,1,5,1};
    remove(v1,7,v2,0);
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }
}