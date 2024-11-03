#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;

        int k=n/2;
        if(k%2==1)  cout<<"NO";
        else{
            cout<<"YES"<<endl;
            vector<int> v(n,0);
            int cnt=2;
            int sum=0;
            for(int i=0;i<k;i++){
                v[i]=cnt;
                cnt+=2;
                sum+=v[i];
            }
            cnt=1;
            for(int i=k;i<n-1;i++){
                v[i]=cnt;
                cnt+=2;
                sum-=v[i];
            }
            v[n-1]=sum;

            for(int i=0;i<n;i++)    cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}