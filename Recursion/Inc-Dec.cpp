#include<iostream>
using namespace std;
void print(int i,int org,int n){
    if(org==0)    return;
    if(i<=n-1){
        cout<<i<<" ";
        print(i+1,org,n);
    }
    else if(i==n){
        cout<<org<<" ";
        print(i,org-1,n);
    }
}
int main(){
    int n;
    cin>>n;
    int org=n;
   print(1,org,n);
   cout<<endl;
}