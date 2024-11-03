#include <bits/stdc++.h>

using namespace std;

int main(){
    long long k,rem;
    cin>>k>>rem;

    long long count=1;
    while((k*count)%10!=rem and (k*count)%10!=0){
        count++;
    }
    cout<<count<<endl;
}