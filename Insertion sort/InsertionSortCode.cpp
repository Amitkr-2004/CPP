#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1 && v[j]<v[j-1]){
                swap(v[j],v[j-1]);
                j--;
        }
    } 
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}