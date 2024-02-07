#include<iostream>
using namespace std;

int main(){
    int x=23;
    int y=31;
    int temp=x^y;
    int ans=__builtin_popcount(temp);
    cout<<ans;
}