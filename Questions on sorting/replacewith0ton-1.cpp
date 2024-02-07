#include<climits>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int x=0;
    vector<int> visit(n,0);
    for(int i=0;i<n;i++){
        int min=INT_MAX;
        int idx=-1;
        for(int j=0;j<n;j++){
            if(visit[j]==1) continue;
            else{
                if(min>v[j]){
                    min=v[j];
                    idx=j;
                }
            }
        }
        v[idx]=x;
        x++;
        visit[idx]=1;
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}