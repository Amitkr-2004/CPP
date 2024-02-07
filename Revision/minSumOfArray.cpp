#include<iostream>
using namespace std;
int main(){
    int v[6]={5,3,1,4,2,5};
    int n=6;
    for(int i=0;i<n;i++){
        int min=v[i];
        int idx=-1;
        for(int j=i+1;j<n;j++){
            if(min>v[j]){
                min=v[j];
                idx=j;
            }
        }
        if(v[i]>v[idx])
            swap(v[i],v[idx]);
    }
    int sum1=0;
    for(int i=0;i<n;i++){
       sum1*=10;
       int rem=v[i];
       sum1+=rem;
    }
    int l=n-1;
    while(l>=0){
        if(v[l]!=v[l-1]){
            swap(v[l],v[l-1]);
            break;
        }
        else    l--;
    }
    int sum2=0;
    for(int i=0;i<n;i++){
       sum2*=10;
       int rem=v[i];
       sum2+=rem;
}
cout<<sum1+sum2;
cout<<endl;
} 