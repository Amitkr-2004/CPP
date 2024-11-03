#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    // 2->1
    // 2->3  ->> loop
    while(t-->0){
        int x,y;
        cin>>x>>y;
        if(x==1 and y>1)    cout<<"NO"<<endl;
        else if(x<=3 and y>3) cout<<"NO"<<endl;
        else    cout<<"YES"<<endl;   
    }
}