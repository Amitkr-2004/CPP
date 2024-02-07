#include<climits>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
float max(float a,float b){
    if(a>b) return a;
    else       return b;
}
float min(float a,float b){
    if(a<b) return a;
    else    return b;
}

int main(){
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    bool flag=true;
    float kmin=INT_MIN;
    float kmax=INT_MAX;
    for(int i=0;i<n-1;i++){
        if(v[i]>=v[i+1]){
            kmin=max(kmin,((v[i]+v[i+1])/2.0));
        }
        else{
            kmax=min(kmax,((v[i]+v[i+1])/2.0));
        }
        if(kmin>kmax){
            flag=false;
            break;
        }
    }
    if(flag==false) cout<<-1;
    else if(kmin==kmax){
        if(kmin-(int)kmin==0)   cout<<"there exists only one value:- "<<kmin;
        else    cout<<-1;
    }
    else{
        if(kmin-(int)kmin>0){
            kmin=(int)kmin+1;
        }
        cout<<"RANGE OF K IS:- ";
        cout<<"["<<kmin<<","<<(int)kmax<<"]";
    }
    cout<<endl;
}