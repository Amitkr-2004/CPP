#include <bits/stdc++.h>

using namespace std;

int main(){
  
  return 0;
}

class DSU{
    public:
    vector<int> rank,par,size;
    int len=0;
    DSU(int n){
        rank.resize(n+1,1);
        size.resize(n+1,1);
        par.resize(n+1);
        for(int i=0;i<=n;i++){
            par[i]=i;
        }
        len=n;
    }
    
    int find(int x){
        if(par[x]==x)   return x;
        return par[x] = find(par[x]);
    }
    
    void UnionBySize(int a,int b){
        a=find(a);
    	b=find(b);
    
        if(size[a]<=size[b]){
            size[b]+=size[a];
            par[a]=b;
        }
        else{
            size[a]+=size[b];
            par[b]=a;
        }
    }
    
    void UnionByRank(int a,int b){
        a=find(a);
    	b=find(b);
    
        if(rank[a]<=rank[b]){
            par[a]=b;
            rank[b]++;
        }
        else{
            par[b]=a;
            rank[a]++;
        }
    }
};