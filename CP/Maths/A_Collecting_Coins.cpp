#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t-->0){
        int a,b,c,n;
        cin>>a>>b>>c>>n;

        int mx=max(a,max(b,c));
        if(mx==a){
            int rem=0;
            rem=mx-b;
            rem+=mx-c;
            n-=rem;
            if(n<0 or n%3!=0)   cout<<"NO";
            else if(n%3==0)     cout<<"YES";
        }
        else if(mx==b){
            int rem=0;
            rem=mx-a;
            rem+=mx-c;
            n-=rem;
            if(n<0 or n%3!=0)   cout<<"NO";
            else if(n%3==0)     cout<<"YES";
        }
        else{
            int rem=0;
            rem=mx-a;
            rem+=mx-b;
            n-=rem;
            if(n<0 or n%3!=0)   cout<<"NO";
            else if(n%3==0)     cout<<"YES";
        }
        cout<<endl;
    }
 
}