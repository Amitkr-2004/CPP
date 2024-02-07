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
    int first=0;
    int mid=0;
    int last=n-1;
    for(int i=0;i<n;i++){
        if(v[mid]==0){
            int temp=v[mid];
            v[mid]=v[first];
            v[first]=temp;
            mid++;
            first++;
        }
        else if(v[mid]==1){
            mid++;
        }
        else{
            int temp=v[mid];
            v[mid]=v[last];
            v[last]=temp;
            last--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}