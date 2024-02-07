#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    vector<int> v(n);
    for(int i=0;i<s.size();i++){
        v[i]=stoi(s[i]);
    }
    int max=v[0];
    for(int i=1;i<s.size();i++){
        if(max<v[i])    max=v[i];
    }
    cout<<max;
}