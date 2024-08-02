#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    int count=0;
    while(n>0){
        if(n%10==7 or n%10==4){
            count++;
        }
        n=n/10;
    }
    if(count==7 or count==4)     cout<<"YES"<<endl;
    else    cout<<"NO"<<endl;
}