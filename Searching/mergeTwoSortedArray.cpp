#include<iostream>
#include<vector>
using namespace std;
int main(){
    int v1[7]={1,2,4,6,8,9,11};
    int v2[6]={2,4,5,6,8,10};
    int m=7;
    int n=6;
    vector<int> v3(m+n);
    int i=0;
    int j=0;
    int k=0;
    
    while(i<=m-1 && j<=n-1){
        if(v1[i]<v2[j]){
            v3[k]=v1[i];
            i++;
        }
        else{
            v3[k]=v2[j];
            j++;
        }
        k++;
    }
    if(i==m){
        while(j<=n-1){
            v3[k]=v2[j];
            j++;
            k++;
        }
    }
    else if(j==n){
        while(i<=m-1){
            v3[k]=v1[i];
            i++;
            k++;
        }
    }

    for(int i=0;i<(m+n);i++){
        cout<<v3[i]<<" ";
    }
    cout<<endl;
}