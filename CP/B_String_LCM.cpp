#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t;
    cin>>t;

    while(t-->0){
        string s1,s2;
        cin>>s1>>s2;

        ll n1=s1.size();
        ll n2=s2.size();

        ll lcm = (n1*n2)/__gcd(n1,n2);  //formula
        string r1="",r2="";

        for(int i=0;i<lcm/n1;i++)   r1+=s1;  
        for(int i=0;i<lcm/n2;i++)   r2+=s2;  

        if(r1==r2)  cout<<r1;
        else    cout<<-1;
        cout<<endl;
    }
}