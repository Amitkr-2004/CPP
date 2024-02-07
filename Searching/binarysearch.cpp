#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int binary(vector<int> nums,int n,int target){
    int left=0;
    int right=n-1;
        while(left<=right){
            int mid=(left+right)/2;
            if(nums[mid]==target)     return mid;
            else if(nums[mid]<target)  left=mid+1;
            else    right=mid-1;
        }
        return -1;
}
int main(){
    vector<int> nums;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        nums.push_back(a);
    }
    int target;
    cin>>target;
    int ans=binary(nums,n,target);
    cout<<ans;
}