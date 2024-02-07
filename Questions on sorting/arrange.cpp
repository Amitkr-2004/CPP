#include<climits>
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
    for(int i=0;i<n;i++){
        int min=INT_MAX;
        int idx=-1;
        for(int j=0;j<n;j++){
            if(v[j]>0 && min>v[j]){
                min=v[j];
                idx=j;
            }
        }
        v[idx]=count;
        count--;
    }
    for(int i=0;i<n;i++){
        cout<<-v[i]<<" ";
    }
    cout<<endl;
}