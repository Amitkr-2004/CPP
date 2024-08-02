#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    long long t;
    cin>>t;
    while(t-->0){
        long long n,x;
        cin>>n>>x;
        vector<long long> v(n);
        for(long long i=0;i<n;i++){
            cin>>v[i];
        }
        int count=0;
        sort(v.begin(),v.end());
        
        int req=0;
        for(int i=n-1;i>=0;i--){
            req=req + (v[i]-x);
            if(req>=0){
                count++;
            }
            else    break;
        }
        cout<<count<<endl;
    }
}