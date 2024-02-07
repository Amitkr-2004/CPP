#include<iostream>
using namespace std;

int flipping(int n){
    int org=n;
    int temp=0;
    while(n>0){
        temp=n;
        n = n & (n-1);
    }
    temp=temp*2-1;
    org=org ^ temp; //XOR operation
    return org;
}

int main(){
    cout<<flipping(24);
}