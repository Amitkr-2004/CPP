#include <bits/stdc++.h>
#define ll long long

using namespace std;

//odd=0 -> yes
//odd=1 -> yes
//odd=2 -> no
//odd=3 -> yes if r,g,b freq>0(interchanging is required)
//odd=4 -> yes if r,g,b freq>0(interchanging is required)

int main(){
    ll t;
    cin>>t;

    while(t-->0){
        ll r,g,b,w;
        cin>>r>>g>>b>>w;
        ll odd=0;
        if(r%2)     odd++;
        if(g%2)     odd++;
        if(b%2)     odd++;
        if(w%2)     odd++;

        if(odd==2 or (odd>=3 and (r==0 or g==0 or b==0)))   cout<<"No";
        else    cout<<"Yes";
        cout<<endl;
    }
}