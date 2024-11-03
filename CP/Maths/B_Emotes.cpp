#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n,m,k;
    cin>>n>>m>>k;

    vector<long long> v(n);
    int mx1=0;
    int mx2=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]>mx1){
            mx2=mx1;    //first max
            mx1=v[i];   //second max
        }
        else if(v[i]>mx2){
            mx2=v[i];
        }
    }

    long long times = m/(k+1);  //no of times repeatation will occur
    
    long long ans = (mx1*times*k) + (mx2*times);
    ans=ans + (m -((k+1)*times))*mx1;
    cout<<ans<<endl;
}