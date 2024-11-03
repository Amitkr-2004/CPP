#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
    while(t-->0){
        int x,y,z;
        cin>>x>>y>>z;

        if(x==y){
            if(x<z) cout<<"NO"<<endl;
            else{
                cout<<"YES"<<endl;
                cout<<x<<" "<<z<<" "<<z<<endl;
            }
        }
        else if(y==z){
            if(y<x) cout<<"NO"<<endl;
            else{
                cout<<"YES"<<endl;
                cout<<y<<" "<<x<<" "<<x<<endl;
            }
        }
        else if(x==z){
            if(x<y) cout<<"NO"<<endl;
            else{
                cout<<"YES"<<endl;
                cout<<x<<" "<<y<<" "<<y<<endl;
            }
        }
        else    cout<<"NO"<<endl;
    }
}