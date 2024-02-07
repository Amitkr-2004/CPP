#include<iostream>
#include<vector>
using namespace std;
void sequence(vector<int> &org,vector<int> ans,int n,int i,int k){
    if(i==n){
        if(ans.size()==k){
            for(int i=0;i<ans.size();i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    int val=org[i];
    sequence(org,ans,n,i+1,2);
    ans.push_back(val);
    sequence(org,ans,n,i+1,2);
}
int main(){
    int k;
    vector<int> org;
    vector<int> ans;
    int n=3;
    org={1,2,3};
    sequence(org,ans,n,0,2);
}
