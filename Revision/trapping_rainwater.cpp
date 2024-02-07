#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> height;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        height.push_back(a);
    }
    int prev[n];
    prev[0]= -1;
    int max=height[0];
    for(int i=1;i<n;i++){
        prev[i]=max;
        if(max<height[i])   max=height[i];
    }
    int next[n];
    next[n-1]=-1;
    max=height[n-1];
    for(int i=n-2;i>=0;i--){
        next[i]=max;
        if(max<height[i])   max=height[i];
    }
    for(int i=0;i<n;i++){
        next[i]=min(prev[i],next[i]); 
    }
    int sum=0;
    for(int i=0;i<n;i++){
        if(height[i]<next[i]){
            sum +=next[i]-height[i];
        }
    }
    cout<<sum;
}