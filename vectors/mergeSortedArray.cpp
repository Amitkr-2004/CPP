#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int> &v1,vector<int> &v2){
    int m=v1.size();
    int n=v2.size();                                       
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
            k++;
            j++;
        }
    }
    if(j==n){
        while(i<=m-1){
            v3[k]=v1[i];
            k++;
            i++;
        }
    }
    return v3;
}
int main(){
    vector<int> v1;
        v1.push_back(1);
        v1.push_back(4);
        v1.push_back(5);
        v1.push_back(8);

    for(int x=0;x<v1.size();x++){
        cout<<v1[x]<<" ";
        }
        cout<<endl;
    
   vector<int> v2;
   v2.push_back(2);
   v2.push_back(3);
   v2.push_back(6);
   v2.push_back(7);
   v2.push_back(10);

   for(int x=0;x<v2.size();x++){
        cout<<v2[x]<<" ";
        }
        cout<<endl;

    vector<int> v= merge(v1,v2);
    for(int x=0;x<v.size();x++){
        cout<<v[x]<<" ";
    }
}   
