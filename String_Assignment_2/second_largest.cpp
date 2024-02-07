#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> str(n);
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    for(int i=0;i<n;i++){
        v[i]=stoi(str[i]);
    }
    sort(v.begin(),v.end());
    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<" ";

    cout<<v[n-2];
    }