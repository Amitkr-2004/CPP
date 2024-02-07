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
    reverse(v,1,4);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}