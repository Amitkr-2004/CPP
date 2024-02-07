#include<iostream>
using namespace std;
int main(){
    int v[7]={0,1,2,3,4,5,6};
    int n=7;
    int left=0;
    int right=n-1;
    int ans=-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(v[mid]==mid) left=mid+1;
        else{
            ans=mid;
            right=mid-1;
        }
    }
    cout<<ans;
    cout<<endl;
}