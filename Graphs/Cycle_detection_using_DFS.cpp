#include<bits/stdc++.h>
using namespace std;

vector<list<int> > graph;
int v,e;
void add_edge(int src,int dest,bool is_dir=true){
    graph[src].push_back(dest);
    if(is_dir){
            graph[dest].push_back(src);
    }
}
bool dfs(int src,int parent,unordered_set<int> &vis){
    vis.insert(src);
    for(auto neighbour:graph[src]){
        if(vis.count(neighbour) and neighbour!=parent)     return true;
        if(!vis.count(neighbour)){
            bool ans = dfs(neighbour,src,vis);
            if(ans==true)   return true;
        }
    }
    return false;
}
bool has_Cycle(){
    unordered_set<int> vis;
    for(int i=0;i<v;i++){
        if(!vis.count(i)){
            bool ans=dfs(i,-1,vis);
            if(ans==true)   return true;
        }
    }
    return false;
}
int main(){
    cin>>v>>e;
    graph.resize(v,list<int> ());
    while(e-->0){
        int s,d;
        cin>>s>>d;
        // add_edge(s,d);
        add_edge(s,d,false);
    }
    cout<<has_Cycle();
}