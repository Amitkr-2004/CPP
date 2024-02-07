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
    int target;
    cin>>target;
    for(int i=0;i<n;i++){
        if(v[i]<target) continue;
        else{
            cout<<v[i-1];
            break;
    }
}
cout<<endl;
}