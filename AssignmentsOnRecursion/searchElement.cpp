#include<iostream>
#include<vector>
using namespace std;
void search(vector<int> v,int target,int n,int i){
    if(i==n){
         cout<<-1;
         return;
    }
    if(v[i]==target){
        cout<<i;
        return;
    }
    search(v,3,n,i+1);
}
int main(){
    vector<int> v;
    v={2,4,5,6,7};
    int n=5;
    search(v,3,n,0);
}