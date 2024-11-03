#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        cout<<2<<endl;

        int a=n,b=n-1;
        for(int i=1;i<n;i++){       //since n-1 ops should be done
            cout<<a<<" "<<b;
            a=ceil((a+b)/2);
            b--;
            cout<<endl;
        }
    }
}