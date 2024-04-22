#define pp pair<int,int>
#define ll long long int
#include<bits/stdc++.h>
using namespace std;

vector<list<pp>> gr;
void add_edge(int u,int v,int wt,bool bi_dir=true){
    gr[u].push_back({v,wt});
    if(bi_dir)  gr[v].push_back({u,wt});    //vertex,wt
}
ll prims(int src,int n){
    priority_queue<int,vector<pp> ,greater<pp> >pq; //wt,vertex
    unordered_map<int,int> mp;  
    unordered_set<int> vis;
    vector<int> par(n+1);

    for(int i=1;i<=n;i++){
        mp[i]=INT_MAX;
    }
    mp[src]=0;
    pq.push({0,src});
    int total_count=0;
    int result=0;
    while(total_count<n and !pq.empty()){
        auto curr=pq.top();
        if(vis.count(curr.second)){
            pq.pop();
            continue;
        }
        vis.insert(curr.second);
        total_count++;
        result+=curr.first;
        pq.pop();

        //if better edge comes than the previous one and pushing elements to queue
        
        for(auto neighbour:gr[curr.second]){
            if(!vis.count(neighbour.first) and mp[neighbour.first]>neighbour.second){
                pq.push({neighbour.second,neighbour.first});
                mp[neighbour.first]=neighbour.second;
                par[neighbour.first]=curr.second;
            }
        }
    }
    return result;
    }
int main(){
    int a,b;    //no. of vertices,edges
    cin>>a>>b;
    gr.resize(a+1,list<pp> ());
    while(b-->0){
        int u,v,wt;
        cin>>u>>v>>wt;
        add_edge(u,v,wt);
    }
    int src;
    cin>>src;
    cout<<prims(src,a);
}