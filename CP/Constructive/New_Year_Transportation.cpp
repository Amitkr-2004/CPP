#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;

    vector<int> v(n-1,0);
    for(int i=0;i<n-1;i++)  cin>>v[i];

    int pos=1;
    int next=0;
    while(pos<t){
        pos=pos+v[pos-1];
    }
    if(pos==t)  cout<<"YES"<<endl;
    else    cout<<"NO"<<endl;
}