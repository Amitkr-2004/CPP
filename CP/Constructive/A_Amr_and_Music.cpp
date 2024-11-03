#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    vector<int> v(n);
    for(int i=0;i<n;i++)    cin>>v[i];

    vector<pair<int,int>> arr(n);

    for(int i=0;i<n;i++){
        arr[i].first=v[i];
        arr[i].second=i;
    }
    sort(arr.begin(),arr.end());

    vector<int> indices;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i].first<=k){
            k-=arr[i].first;
            indices.push_back(arr[i].second+1);
            count++;
        }
    }
    cout<<count<<endl;
    for(int i=0;i<indices.size();i++)    cout<<indices[i]<<" ";
}