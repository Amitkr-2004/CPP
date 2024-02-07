#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int arr[5]={19,12,18,8,16};
    int n=5;
    int x=0;
    vector<int> visit(n,0);
    for(int i=0;i<n;i++){
        int min=INT_MAX;
        int idx=-1;
        for(int j=0;j<n;j++){
            if(visit[j]==1) continue;
            else{
                if(min>arr[j]){
                    min=arr[j];
                    idx=j;
                }
            }
        }
        arr[idx]=x;
        x++;
        visit[idx]=1;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}