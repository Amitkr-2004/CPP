#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t-->0){
        int n,sum;
        cin>>n>>sum;

        if(n==1)    cout<<0;
        else if(n==2)    cout<<sum;   
        else    cout<<sum*2;   
        cout<<endl;
    }
}