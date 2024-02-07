#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool flag=false;
        long long left=0;
        long long right=n;
        while(left<=right){
            long long k=left+(right-left)/2;
            if(((k*(k+1))/2)==n){
                flag=true;
                cout<<k;
                break;
            }
            else if(((k*(k+1))/2)<n){
                left=k+1;
            }
            else{
                right=k-1;
            }
        }
        if(flag==false){
            cout<<right;
        }
        cout<<endl;

        // long long t=(long long)(2*(long long)(n));
        // long long d=1+ 4*t;
        // int k=(sqrt(d)-1)/2;
        // return k;
}