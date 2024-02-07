#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<n-1;i++){
        int min=v[i];
        int idx=-1;
        for(int j=i+1;j<n;j++){
            if(min>=v[j]){
                min=v[j];
                idx=j;
            }
        }
        if(v[i]>v[idx]){
            swap(v[i],v[idx]);
        }
}
for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
}
cout<<endl;
    int i=0;
    int ans1=0;
    while(i<n){
        int rem=ans1*10;
        ans1=rem + v[i];
        i++;
    }
    int l=n-1;
    while(l>=1){
        if(v[l]!=v[l-1]){
            swap(v[l],v[l-1]);
            break;
        }
            else{
                l--;
            }
    }

for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
}
cout<<endl;

    int k=0;
    int ans2=0;
    while(k<n){
        int rem=ans2*10;
        ans2=rem + v[k];
        k++;
    }
    cout<<"Min Sum:-";
    int ans=ans1+ans2;
    cout<<ans<<endl;
}