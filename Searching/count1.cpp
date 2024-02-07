#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    // vector<int> v;
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     int a;
    //     cin>>a;
    //     v.push_back(a);
    // }
    int v[10]={0,0,0,0,1};
    int n=5;
    // int target;
    // cin>>target;
    bool flag=false;
    int left=0;
    int right=n-1;
    int ans=0;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(v[mid]==1){
            if(mid==0){
                flag=true;
                ans=1;
                break;
            }
            else if(v[mid-1]!=1){
                flag=true;
                ans=mid;
                break;
            }
            else{
                right=mid-1;
            }
        }
       else{
            left=mid+1;
       }
    }
    if(flag==false){
        cout<<0;
    }
    else if(ans==1 && n==1){
        cout<<1;
    }
    else {
        ans=n-ans;
        cout<<ans;
    }
    cout<<endl;
}