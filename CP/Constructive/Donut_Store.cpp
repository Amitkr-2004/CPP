#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t-->0){
        long long a,b,c,f,s;
        cin>>a>>b>>c;
        f=s=-1;

        if(a<c)     f=1;
        if((b*a)>c)   s=b;
        cout<<f<<" "<<s<<endl;
    }
    cout<<endl;
}