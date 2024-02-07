#include<iostream>
#include<vector>
#include<climits>
using namespace std;
float max(float a,float b){
    if(a>b)     return a;
    else        return b;
}
float min(float a,float b){
    if(a<b)     return a;
    else        return b;
}
int main(){
    int v[5]={5,3,6,8,10};
    int n=5;
    float kmin=INT_MIN;
    float kmax=INT_MAX;
    bool flag=true;
    for(int i=1;i<n;i++){
        if(v[i-1]>=v[i]){
            kmin=max(kmin,((v[i]+v[i-1])/2.0));
        }
        else{
            kmax=min(kmax,((v[i]+v[i-1])/2.0));
        }
        if(kmin>kmax){
        flag=false;
        break;
    }
    }
    if(flag==false){
        cout<<-1;
    }
    else if(kmin==kmax){
        if(kmin-(int)kmin==0)   cout<<kmin;
        else        cout<<-1;
    }
    else{
        if(kmin-(int)kmin>0){
            kmin=(int)kmin+1;
        }
        cout<<"["<<kmin<<" ,"<<(int)kmax<<"]";
    }
    cout<<endl;
}
