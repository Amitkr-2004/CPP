#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    
    for(int i=0;i<n-1;i++){
        int min=v[i];
        int idx=-1;
        for(int j=i+1;j<n;j++){
            if(min>v[j]){
                min=v[j];
                idx=j;
            }
        }
            if(v[i]>v[idx])
                swap(v[i],v[idx]);
        }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}