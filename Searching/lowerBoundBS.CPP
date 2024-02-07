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
    int v[5]={1,2,4,5,9};
    int n=5;
    int target=4;
    // int target;
    // cin>>target;
    int left=0;
    int right=n-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(v[mid]==target){
            cout<<v[mid-1];
            break;
        }
        else if(v[mid]<target)   left=mid+1;
        else if(v[mid]>target){
            if(v[mid]>target && v[mid-1]<target){
                cout<<v[mid-1];
                break;
            }
            else{
                right=mid-1;
            }
        }
    }
    cout<<endl;
}