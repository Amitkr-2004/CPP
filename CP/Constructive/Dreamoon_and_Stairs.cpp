
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    //1 and 2 are such that we can form from it any number
    int total=0;
    if(n%2==0)      total=n/2;
    else    total=(n/2)+1;

    int moves=-1;
    while(total<=n){
        if(total%m==0){
            moves=total;
            break;
        }
        total++;
    }
    cout<<moves<<endl;      
}