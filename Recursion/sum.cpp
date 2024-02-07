#include<iostream>
using namespace std;
// int sum(int n){
//     if(n==1)    return 1;
//     int ans=n+sum(n-1);
//     return ans;
// }

void sum(int ans,int n){
    if(n==0){
        cout<<ans<<endl;
        return;
    }
    sum(ans+n,n-1);
}
int main(){
    int n;
    cin>>n;
    sum(0,n);
}