#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> str(n); 
    for(int i=0;i<str.size();i++){
    cin>>str[i];
    }
    vector<int> v(n);
    for(int i=0;i<str.size();i++){
        v[i]=stoi(str[i]);
    }
    int max=v[0];
    for(int i=1;i<n;i++){
        if(max<v[i]){
            max=v[i];
        }
    }
    cout<<max;
}