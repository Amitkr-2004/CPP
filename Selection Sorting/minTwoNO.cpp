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
    int count=0;
    for(int i=0;i<n-1;i++){
        int min=v[i];
        int idx=-1;
        for(int j=i+1;j<n;j++){
            if(min>v[j]){
                min=v[j];
                idx=j;
            }
        }
        count++;
        if(v[i]>v[idx]){
            swap(v[i],v[idx]);
        }
        if(count==2){
            break;
        }
    }
    int ans=v[0]+v[1];
    cout<<ans<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<" ";
    //    }
}