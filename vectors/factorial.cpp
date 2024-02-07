#include<iostream>
#include<vector>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n,f;
    int rem=0;
    cin>>n;
    vector<int> v;
    f=factorial(n);
    int k=0;
    while(f>0){
        rem=f%10;
        v.push_back(rem);
        f=f/10;
        k++;
    }

    cout<<"your array is"<<endl;
    for(int i=k-1;i>=0;i--){
        cout<<v[i]<<" ";
    }
}
