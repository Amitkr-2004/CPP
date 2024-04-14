#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;

unordered_set<int> visited;
vector<list<int> > graph;
void add_edge(int src,int dest,bool is_dir=true){
    graph[src].push_back(dest);
    if(is_dir){
            graph[dest].push_back(src);
    }
}
bool dfs(int curr,int end){
    if(curr==end)   return true;
    visited.insert(curr);
    for(auto neighbour:graph[curr]){
        if(not visited.count(neighbour)){
            bool result=dfs(neighbour,end);
            if(result)  return true;
        }
    }
    return false;
}
bool anyPath(int start,int end){
    return dfs(start,end);
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
    cout<<anyPath(src,dest)<<"\n";
    return 0;
}
