#include <bits/stdc++.h>

using namespace std;

int main(){
    long long x,y,z;
    cin>>x>>y>>z;

    long long rem1=x%z;
    long long rem2=y%z;
    long long extra=0;
    if(rem1>=rem2 and (z-rem1)<=rem2){
        extra = (z-rem1);
    }
    else if(rem2>rem1 and (z-rem2)<=rem1){
        extra = (z-rem2);
    }
    cout<<(x+y)/z<<" "<<extra<<endl;

}