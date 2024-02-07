#include<iostream>
#include<vector>
using namespace std;
void swap(vector<int> &v,int i,int j){
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
}
void sort(vector<int> &v,int n){
    int i=0;
    int j=n-1;
    while(i<j){
        if(v[i]>=0 && v[j]<0){
            swap(v,i,j);
            i++;
            j--;
        }
        else if(v[i]<0  && v[j]<0){
            i++;
        }
        else if(v[i]>=0 && v[j]>=0){
            j--;
        }
        else if(v[i]<0 && v[j]>=0){
            i++;
            j--;
        }
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
    sort(v,n);
    cout<<"the sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}