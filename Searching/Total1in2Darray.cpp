#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int v[5][6]={{0,0,0,0,1,1},{0,0,0,1,1,1},{1,1,1,1,1,1},{0,0,0,0,0,1},{0,0,0,0,0,1}};
    int x=1;
    int row=5;
    int col=6;
    int mx=INT_MIN;
    int mxrow=0;
    for(int i=0;i<row;i++){
    int ans=0;
    int left=0;
    int right=col-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(v[i][mid]==x){
            if(v[i][mid-1]!=x){
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
    ans=col-ans;
    if(mx<ans){
        mx=ans;
        mxrow=i;
    }
}
cout<<mxrow<<" "<<mx;
cout<<endl;
}
