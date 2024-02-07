#include<iostream>
#include<vector>
using namespace std;
int c=0;
int inversion(vector<int> &a,vector<int> &b){
    int count=0;
    int i=0,j=0;
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){
            count+=(a.size()-i);
            j++;
        }
        else{
            i++;
        }
    }
    return count;
}
void merge(vector<int> &v1,vector<int> &v2,vector<int> &v3){
    int i=0;
    int j=0;
    int k=0;
    int m=v1.size();
    int n=v2.size();
    while(i<m && j<n){
        if(v1[i]<=v2[j]){
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
        while(j<n){
            v3[k]=v2[j];
            j++;
            k++;
        }
    }
    if(j==n){
        while(i<m){
            v3[k]=v1[i];
            i++;
            k++;
        }
    }
}
void mergeSort(vector<int> &v){
int n=v.size();
if(n==1){
    return;
}
int n1=n/2;
int n2=n-n/2;
vector<int> a(n1);
for(int i=0;i<n1;i++){
    a[i]=v[i];
}
vector<int> b(n2);
for(int i=0;i<n2;i++){
    b[i]=v[i+n1];
}

//magic
mergeSort(a);
mergeSort(b);

c+=inversion(a,b);

merge(a,b,v);

a.clear();
b.clear();
}
int main(){
    vector<int> v;
    for(int i=0;i<7;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    mergeSort(v);

    cout<<c<<endl;
}