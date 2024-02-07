#include<iostream>
using namespace std;
int main(){
    int a,b,sum;
    cin>>a>>b;
    int *p1= &a;
    int *p2= &b;
    sum= *p1 + *p2;
    cout<<sum;
}