#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,x,y;
    cin>>n>>x>>y;

    vector<int> v(n);
    for(int i=0;i<n;i++)    cin>>v[i];    
 
    for(int i=0;i<n;i++){
    bool flag=false;
        
        //left
        for(int j=i-1;j>=(i-x) and j>=0 and flag==false;j--){
            if(v[j]<=v[i]){
                flag=true;
            }
        }
        if(flag==true)      continue;

        for(int j=i+1;j<=(i+y) and j<n and flag==false;j++){
            if(v[j]<=v[i]){
                flag=true;
            }
        }
        if(flag==false){
            cout<<i+1<<endl;
            break;
        }
    }
}