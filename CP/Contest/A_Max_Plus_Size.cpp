#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)    cin>>v[i];
        int mx=INT_MIN;
        
        for(int i=0;i<n;i++){
            mx=max(mx,v[i]);
        }
        vector<int> idx;
        for(int i=0;i<n;i++){
            if(v[i]==mx)    idx.push_back(i);
        }
        int size=0;
        for(int x=0;x<idx.size();x++){
            int count=1;
            int i=idx[x];
            int j=idx[x];
            while(i>=0 or j<n){
                i-=2;
                j+=2;
                if(i>=0)    count++;
                if(j<n)     count++;
            }
            size=max(size,count);
        }
        cout<<size+mx<<endl;
    }
}