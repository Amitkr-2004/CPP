#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans=1;

    for(int i=1;i<n;i++){
        ans+=(i*(n-i))+1;
    }
    cout<<ans<<endl;
}