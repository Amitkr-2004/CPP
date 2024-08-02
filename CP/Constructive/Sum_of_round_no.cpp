#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t-->0){
        int n;
        cin>>n;
        vector<int> v;
        int mul=1;
        int ans=0;
        while(n>0){
            int rem=n%10;
            if(rem!=0){
                ans=rem*mul;
                v.push_back(ans);
            }
            mul*=10;
            n/=10;
        }
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}