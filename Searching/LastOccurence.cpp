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
    int v[10]={1,2,2,2,4,4,4,5,5,5};
    int n=10;
    int x=4;
    // int target;
    // cin>>target;
    bool flag=false;
    int left=0;
    int right=n-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(v[mid]==x){
            if(mid==n-1){
            flag=true;
            cout<<mid;
            break;
            }
            else if(v[mid+1]!=x){
                flag=true;
                cout<<mid;
                break;
            }
            else{
                left=mid+1;
            }
        }
        
        else if(v[mid]<x) {
             left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    if(flag==false){
        cout<<-1;
    }
    cout<<endl;
}