#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t-->0){
        int l,r;
        cin>>l>>r;

        int x=l;
        int y=2*l;
        if(y>r)     cout<<-1<<" "<<-1<<endl;
        else    cout<<x<<" "<<y<<endl;
    }
}