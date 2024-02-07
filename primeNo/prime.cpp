#include<iostream>
#include<cmath>
using namespace std;
int main(){
    bool flag=true;
    int n=41;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0)      flag=false;
    }
    if(flag==true)  cout<<1;
    else    cout<<0;
}