#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    vector<string> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
       string s;
       cin>>s;
        v.push_back(s);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }
for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
}
cout<<endl;
}