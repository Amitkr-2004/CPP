#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
bool flag=true;
for(int i=2;i<n;i++){
    if(n%i==0){
        flag= false;
        break;
    }
}
if(flag==true){
    cout<<"prime no.";
}
else{
    cout<<"composite no.";
}
}