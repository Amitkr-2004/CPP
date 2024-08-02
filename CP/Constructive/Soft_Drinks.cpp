#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int totalMl=k*l;
    int reqMl=totalMl/nl;
    int reqLime=c*d;
    int requiredSalt=p/np;

    int mn=min(reqMl,min(reqLime,requiredSalt));

    cout<<mn/n<<endl;
}