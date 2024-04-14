#include<iostream>
#include<vector>
#include<list>
#include<queue>
#include<unordered_set>
#include<climits>
using namespace std;

unordered_set<int> visited;
vector<list<int> > graph;
int v;
void add_edge(int src,int dest,bool is_dir=true){
    graph[src].push_back(dest);
    if(is_dir){
            graph[dest].push_back(src);
    }
}
void bfs(int src,vector<int> &dist){
    queue<int> q;
    visited.clear();
    dist.resize(v,INT_MAX);
    dist[src]=0;
    q.push(src);
    visited.insert(src);
    while(q.size()>0){
        int curr=q.front();
        cout<<curr<<" ";
        q.pop();
        for(auto neighbour:graph[curr]){
            if(!visited.count(neighbour)){
                q.push(neighbour);
                visited.insert(neighbour);
                dist[neighbour]=dist[curr]+1;
            }
        }
    }
}
int main(){
    int e;
    cin>>v>>e;
    graph.resize(v,list<int> ());
    visited.clear();
    while(e-->0){
        int s,d;
        cin>>s>>d;
        add_edge(s,d);
    }
    int src;
    cin>>src;
    vector<int> dist;
    bfs(src,dist);
    cout<<endl;
    for(int i=0;i<dist.size();i++){
        cout<<dist[i]<<" ";
    }
    return 0;
}
