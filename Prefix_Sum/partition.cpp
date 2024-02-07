#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v={1,2,3,4,5,5,10};
    int n=v.size();
    //formation of prefix sum
    for(int i=1;i<n;i++){
        v[i]+=v[i-1];    
    }
    bool flag=false;
    //finding x where it can be partitioned
    for(int i=0;i<n;i++){
        if(2*v[i]==v[n-1]){
            flag=true;
            cout<<"yes it can be partitioned at index "<<i<<endl;
            break;
        }
    }
    if(flag==false)     cout<<-1;
}