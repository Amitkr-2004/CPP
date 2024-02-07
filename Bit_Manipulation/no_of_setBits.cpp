#include<iostream>
using namespace std;

int no_of_set_bits(int n){
    return __builtin_popcount(n);
}

int no_of_set_bits_custom(int n){
    int count=0;
    while(n>0){
        count++;
        n = (n & (n-1));
    }
    return count;
}
int main(){
    int n=453;
    cout<<no_of_set_bits_custom(n);
}