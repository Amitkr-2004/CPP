#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int row=-n;row<=n;row++){

        int spaces=2*abs(row);
        for(int i=0;i<spaces;i++){
            cout<<" ";
        }
        int maxElement=n-abs(row);

        for(int i=0;i<maxElement;i++){
            cout<<i<<" ";
        }
        for(int i=maxElement;i>0;i--){
            cout<<i<<" ";
        }

        cout<<0<<endl;
    }
}