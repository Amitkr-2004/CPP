#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &a,vector<int> &b,vector<int> &res){
    int l=res.size();
    int i=0;
    int j=0;
    int k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]){
            res[k]=a[i];
            i++;
        }
        else{
            res[k]=b[j];
            j++;
        }
        k--;
}
if(i==a.size()){
    while(j<b.size()){
        res[k]=b[j];
        k--;
        j++;
    }
}
if(j==b.size()){
    while(i<a.size()){
        res[k]=a[i];
        k--;
        i++;
    }
}
}
void mergeSort(vector<int> &a){
    int n=a.size();
    if(n==1)    return;
    int n1=n/2;
    int n2=n-n/2;
    vector<int> v1(n1);
    vector<int> v2(n2);
    for(int i=0;i<n1;i++){
        v1[i]=a[i];
    }
    for(int i=0;i<n2;i++){
        v2[i]=a[n1+i];
    }

    mergeSort(v1);
    mergeSort(v2);

    merge(v1,v2,a);

    v1.clear();
    v2.clear();
}
int main(){
    int m;
    vector<int> a;
    cin>>m;
    for(int i=0;i<m;i++){
        int l;
        cin>>l;
        a.push_back(l);
    }
    mergeSort(a);
    for(int i=0;i<m;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}