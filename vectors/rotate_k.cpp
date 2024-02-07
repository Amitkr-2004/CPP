#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int> &v,int i,int j){
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int k;
    cin>>k;
    k=k%n;
    reverse(v,0,k-1);
    reverse(v,k,n-1);
    reverse(v,0,n-1);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}