#include<iostream>
using namespace std;
int main(){
    int r;
    cin>>r;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=(2*i-1);j++){
            if(j%2==1){
                cout<<j;
            }
        }
        cout<<endl;
    }
}