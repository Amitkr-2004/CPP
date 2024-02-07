#include<iostream>
using namespace std;
void print(int i,int n){
    if(n==0)    return;
    cout<<i<<endl;
    print(i+1,n-1);
} 
int main(){
    int n;
    cin>>n;
    cout<<endl;
    print(1,n);
}