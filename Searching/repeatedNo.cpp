#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int left=0;
    int right=n-1;
    int ans=0;
    while(left<=right){
        int mid=left + (right-left)/2;
        if(v[mid]==(mid+1)){
            left=mid+1;
        }
        else{
            ans=v[mid];
            right=mid-1;
        }
    }
    cout<<ans<<endl;
}