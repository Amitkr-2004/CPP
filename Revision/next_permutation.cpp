#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);   
    }
    int idx=-1;
    //pivot element
    for(int i=n-2;i>=0;i--){
        if(v[i]<v[i+1]){
            idx=i;
            break;
        }
    }
    if(idx==-1){
        for(int i=0;i<n;i++){
            cout<<v[i];
        }
    }
    reverse(v.begin()+(idx+1),v.end());

    int j=-1;
    for(int i=idx+1;i<n;i++){
        if(v[i]>v[idx]){
            j=i;
            break;
        }
    }
    int temp=0;
    temp=v[idx];
    v[idx]=v[j];
    v[j]=temp;

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}