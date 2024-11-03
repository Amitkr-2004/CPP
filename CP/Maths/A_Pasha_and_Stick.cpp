#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin>>n;
    if(n%2==0){
        long long ans=ceil(n/4.0);
        cout<<ans-1<<endl;
    }
    else    cout<<0<<endl;
}