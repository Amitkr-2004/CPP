#include<iostream>
using namespace std;
int main(){
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        cin>>arr[i][j];
        }
    }
    int idx=-1;
    int max=INT_MIN;
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
            sum+=arr[i][j];
        }
        if(max<sum){
                max=sum;
                idx=i;
        }
    }
    cout<<"the max sum is present at"<<idx<<"has a sum of "<<max;
}

