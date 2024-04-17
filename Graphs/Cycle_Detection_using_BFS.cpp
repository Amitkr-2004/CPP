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
bool bfs(int src,unordered_set<int> &vis){
    vis.insert(src);
    vector<int> par(v,-1);
    queue<int> q;
    q.push(src);
    while(!q.empty()){
        int val=q.front();
        q.pop();
        for(auto neighbour:graph[val]){
            if(vis.count(neighbour) and par[val]!=neighbour)    return true;
            if(!vis.count(neighbour)){
                vis.insert(neighbour);
                par[neighbour]=val;
                q.push(neighbour);
            }
        }
    }
    return false;
}
bool has_Cycle(){
    unordered_set<int> vis;
    for(int i=0;i<v;i++){
        if(!vis.count(i)){
            bool ans=bfs(i,vis);
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