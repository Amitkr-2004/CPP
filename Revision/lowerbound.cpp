#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> v;
v={1,2,4,6,7};
int n=5;
int x=5;
int lo=0;
int hi=n-1;
bool flag=false;
while(lo<hi){
    int mid=lo+(hi-lo)/2;
    if(v[mid]==x){
        flag=true;
        cout<<mid-1<<endl;
        break;
    }
    else if(v[mid]>x)   hi=mid-1;
    else    lo=mid+1;   
}
if(flag == false){
    cout<<hi<<endl;
}
}