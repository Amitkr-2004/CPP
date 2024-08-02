#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t;
	cin>>t;
	while(t-->0){
	    long long n,k;
	    cin>>n>>k;
	    vector<long long> v(n);
	    for(long long i=0;i<n;i++){
	        cin>>v[i];
	    }
	    long long maxAns1=LLONG_MIN;
        long long sum=0;
        long long x=0;
        while(x<n){
        long long org=v[x];
        v[x]=k;
            for(long long i=0;i<n-1;i++){
                sum+=abs(v[i]-v[i+1]);
            }
        maxAns1=max(maxAns1,sum);
        v[x]=org;
        sum=0;
        x++;
        }
        
        long long maxAns2=LLONG_MIN;
        sum=0;
        x=0;
        while(x<n){
        long long org=v[x];
        v[x]=1;
            for(long long i=0;i<n-1;i++){
                sum+=abs(v[i]-v[i+1]);
            }
        maxAns2=max(maxAns2,sum);
        v[x]=org;
        sum=0;
        x++;
        }
    cout<<max(maxAns1,maxAns2)<<endl;
	}
}
