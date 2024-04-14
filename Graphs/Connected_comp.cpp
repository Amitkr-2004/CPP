#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;

vector<list<int> > graph;
unordered_set<int> visited;
int v;
void add_edge(int src,int dest,bool is_dir=true){
    graph[src].push_back(dest);
    if(is_dir){
            graph[dest].push_back(src);
    }
}
void dfs(int node){
    visited.insert(node);
    for(auto neighbor:graph[node]){
        if(!visited.count(neighbor)){
            visited.insert(neighbor);
            dfs(neighbor);
        }
    }
    return;
}
int connected_component(){
    int result=0;   
    for(int i=0;i<v;i++){
        if(visited.count(i)==0){    //O(V)
            //Go to every vertex 
            //If from a vertex we can initialize a dfs,we got one more C.C
            result++;
            dfs(i);     //O(V+E)
        }
    }
    return result;
}
int main(){
    int e;
    cin>>v>>e;
    graph.resize(v,list<int> ());
    visited.clear();
    while(e-->0){
        int s,d;
        cin>>s>>d;
        // add_edge(s,d);
        add_edge(s,d,false);
    }
    cout<<connected_component()<<"\n";
    return 0;
}