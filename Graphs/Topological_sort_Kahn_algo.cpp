#include<iostream>
#include<list>
#include<vector>
#include<queue>
#include<unordered_set>
using namespace std;
vector<list<int>>graph;
int v;
int e;
void add_edges(int src,int dest,bool bi_dir=true){
    graph[src].push_back(dest);
    if(bi_dir)  graph[dest].push_back(src);
}
void topoBFS(){
    vector<int> indegree(v,0);
    for(int i=0;i<v;i++){
        for(auto neighbour:graph[i]){
            indegree[neighbour]++;
        }
    }
    queue<int> q;
    unordered_set<int> visited;
    for(int i=0;i<v;i++){
        if(indegree[i]==0){
            q.push(i);
            visited.insert(i);
        }
    }
    while(!q.empty()){
        int val=q.front();
        q.pop();
        cout<<val<<" ";
        for(auto neighbour:graph[val]){
            if(!visited.count(neighbour)){
                indegree[neighbour]--;
                if(indegree[neighbour]==0){
                    q.push(neighbour);
                    visited.insert(neighbour);
                }
            }
        }
    }
}
int main(){
    cin>>v>>e;
    graph.resize(v,list<int> ());
    while(e-->0){
        int a,b;
        cin>>a>>b;
        add_edges(a,b,false);
    }
    topoBFS();
    return 0;
}