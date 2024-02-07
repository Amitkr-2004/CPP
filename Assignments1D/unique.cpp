#include<iostream>
#include<vector>
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
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(v[i]=v[j]){
                v[j]=-1;
                v[i]=-1;

            }
        }
    }
    for(int i=0;i<n;i++){
        if(v[i]!=-1){
            cout<<v[i]<<endl;
        }
    }
}