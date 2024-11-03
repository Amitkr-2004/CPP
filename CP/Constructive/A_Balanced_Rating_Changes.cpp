#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)    cin>>v[i];

    vector<int> ans;
    int count=1;
    for(int i=0;i<n;i++){
        if(v[i]%2==0)   ans.push_back(v[i]/2);
        else{
            double val=v[i]/2.0;
            if(count%2==1)    ans.push_back(floor(val));
            else    ans.push_back(ceil(val));
            count++;
        }
    }
    for(int i=0;i<n;i++)    cout<<ans[i]<<endl;
}