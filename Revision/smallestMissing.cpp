#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> v;
v={0,1,2,4,6,7};
int n=6;
int lo=0;
int ans=-1;
int hi=n-1;
bool flag=false;
while(lo<hi){
    int mid=lo+(hi-lo)/2;
    if(v[mid]==mid)     lo=mid+1;
    else{
        ans=mid;
        hi=mid-1;
    } 
}
cout<<lo<<endl;
}