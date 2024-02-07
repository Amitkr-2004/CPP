#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int min_subsets(vector<int> &arr){
    int cn=0,cz=0,cp=0;
    int prodPositive=1;
    int prodNegative=1;
    int largestMin=INT_MIN;
    int mn=INT_MAX;

    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            cp++;
            prodPositive*=arr[i];
            mn=min(mn,arr[i]);
        }
        else if(arr[i]==0)  cz++;
        else{
            cn++;
            prodNegative*=arr[i];
            largestMin=max(largestMin,arr[i]);
        }   
    }
    if(cn==0){
        if(cz==0){
            return mn;
        }
        else{
            return 0;
        }
    }
    else{
        //cn!=0
        if(cn%2!=0){    //odd
            return prodNegative*prodPositive;
        }
        else{   //even
            int ans=(prodNegative/largestMin)*prodPositive;
            return ans;
        }
    }
    return 0;
}

int main(){
    vector<int> v={-2,-3,1,4,-2};
    int res=min_subsets(v);
    return res;
}