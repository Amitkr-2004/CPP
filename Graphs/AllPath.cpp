#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;

unordered_set<int> visited;
vector<list<int> > graph;
vector<vector<int>> ans;
void add_edge(int src,int dest,bool is_dir=true){
    graph[src].push_back(dest);
    if(is_dir){
            graph[dest].push_back(src);
    }
}
void dfs(int curr,int end,vector<int> &path){
    if(curr==end){
        path.push_back(curr);
        ans.push_back(path);
        path.pop_back();
        return;
    }
    path.push_back(curr);
    visited.insert(curr);
    for(auto neighbour:graph[curr]){
        if(not visited.count(neighbour)){
            dfs(neighbour,end,path);
        }
    }
    path.pop_back();
    visited.erase(curr);
}
void AllPath(int start,int end){
    vector<int> path;
    return dfs(start,end,path);
}
int main(){
    int v,e;
    cin>>v>>e;
    graph.resize(v,list<int> ());
    visited.clear();
    while(e-->0){
        int s,d;
        cin>>s>>d;
        add_edge(s,d);
    }
    int src,dest;
    cin>>src>>dest;
    AllPath(src,dest);
    for(auto path:ans){
        for(auto el:path){
            cout<<el<<" ";
        }
        cout<<endl;
    }
    return 0;
}
