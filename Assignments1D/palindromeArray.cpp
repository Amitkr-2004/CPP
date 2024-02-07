#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int i=0; 
    int j=n-1;
    bool flag=true;
    while(i<=j){
    if(v[i]!=v[j]){
        flag=false;
        break;
    }
    else if(v[i]==v[j]){
        i++;
        j--;
    }
    }
    if(flag==true)   cout<<"array is palindrome";
    if(flag==false)   cout<<"not";

    }
