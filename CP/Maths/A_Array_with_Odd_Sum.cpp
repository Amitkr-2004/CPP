#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int t;
    cin>>t;

    while(t-->0){
        int n;
        cin>>n;
        vector<int> v(n);

        for(int i=0;i<n;i++)    cin>>v[i];

        int sum=0,even=0,odd=0;

        for(int i=0;i<n;i++){
            sum+=v[i];
            if(v[i]%2==0)   even++;
            else    odd++;
        }

        if((sum%2==0 and even==n) or (sum%2==0 and odd==n)) cout<<"NO"<<endl;
        else    cout<<"YES"<<endl;
    }

}