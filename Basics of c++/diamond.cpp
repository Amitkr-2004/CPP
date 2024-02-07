#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int spaces=n-1;
    int stars=1;
    for(int i=1;i<=(2*n-1);i++){
        for(int j=1;j<=spaces;j++){
            cout<<" ";
        }
        if(i<=(n-1)) spaces--;
        else spaces++;
        for(int k=1;k<=stars;k++){
            cout<<"*";
        }
        if(i<=(n-1))  stars+=2;
        else stars-=2;

        cout<<endl;
    }
}