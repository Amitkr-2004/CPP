#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int find(vector<int> &par,int x){
    if(par[x]==x)    return x;
    return find(par,par[x]);
}
void Union(vector<int> &par,vector<int> &rank,int x,int y){ 
    int a=find(par,x);
    int b=find(par,y);
    if(a==b)    return;    
    if(rank[a]>=rank[b]){
        rank[a]++;
        par[b]=a;
    }
    else{
        rank[b]++;
        par[a]=b;
    }
}
struct Edge{    //creating a structure which consists of src,des and its wt
    int src;
    int dest;
    int wt;
};
bool cmp(Edge a,Edge b){    //using comparator to sort the edge list wrt wt
    return a.wt<b.wt;
}
ll kruskal(vector<Edge> &input,int n,int e){    //T.C=O(V+eloge)
    sort(input.begin(),input.end(),cmp);    //T.C=O(eloge)
    vector<int> parent(n+1);
    vector<int> rank(n+1,1);
    for(int i=0;i<=n;i++){
        parent[i]=i;
    }
    int countEdges=0;
    int i=0;
    ll ans=0;
    while(countEdges<n-1 and i<input.size()){   //the edges is always les than no. of vertices-1  T.C=O(Vlog*v)
        Edge curr=input[i];
        int srcPar=find(parent,curr.src);
        int destPar=find(parent,curr.dest);
        if(srcPar!=destPar){    //if both of the par is not same then make union of it otherwise just skip it
            Union(parent,rank,srcPar,destPar);
            ans+=curr.wt;
            countEdges++;
        }
        i++;
    }
    return ans;  
}
int main(){
    int n,e;
    cin>>n>>e;
    vector<Edge> v(e);
    for(int i=0;i<e;i++){
        cin>>v[i].src>>v[i].dest>>v[i].wt;
    }
    cout<<kruskal(v,n,e);
}