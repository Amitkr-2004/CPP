#include<iostream>
using namespace std;

int fact(int a){
    int f=1;
    for(int i=1;i<=a;i++){
        f=f*i;
    }
    return f;
}
int main(){
    int a,b,n,r,c;
    cin>>a>>b;
    n=fact(a);
    r=fact(b);
    c=fact(a-b);
    int comb=(n/(r*c));
    cout<<"the combination is "<<comb<<endl;
    int perm=(n/r);
    cout<<"the permutation is"<<perm;
}