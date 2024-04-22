#include<bits/stdc++.h>
#define ll long long int
#define pp pair<int,int>
using namespace std;
vector<list<pp>> graph;     //node,wt
void add_edges(int u,int v,int wt,bool bi_dir=true){
    graph[u].push_back({v,wt});
    if(bi_dir)  graph[v].push_back({u,wt});
}
unordered_map<int,int> dijstra(int src,int n){  //O(VlogV + ElogE)
    priority_queue<int,vector<pp> ,greater<pp>> pq;  //wt,node
    unordered_map<int,int> mp;
    unordered_set<int> vis;
    vector<int> via(n);

    for(int i=0;i<n;i++){   //O(V)
        mp[i]=INT_MAX;
    }
    int result=0;
    mp[src]=0;
    pq.push({0,src});

    while(!pq.empty()){ //O((V+E)logV)
        pp curr=pq.top();
        if(vis.count(curr.second)){
            pq.pop();
            continue;
        }
        result+=curr.first;     
        vis.insert(curr.second);
        pq.pop();       //O(logV)

        for(auto neighbour:graph[curr.second] ){    //O(V+E)    ->simple bfs
            if(!vis.count(neighbour.first) and mp[neighbour.first]>mp[curr.second]+neighbour.second){
                pq.push({mp[curr.second]+neighbour.second,neighbour.first});
                mp[neighbour.first]=mp[curr.second]+neighbour.second;
                via[neighbour.first]=curr.second;
            }
        }
    }
    return mp;
}
int main(){
    int u,v;
    cin>>u>>v;
    graph.resize(u,list<pp> ());
    while(v-->0){
        int s,d,wt;
        cin>>s>>d>>wt;
        add_edges(s,d,wt);
    }
    int src;
    cin>>src;
    unordered_map<int,int> st=dijstra(src,u);
    for(auto p:st){
        cout<<p.first<<" "<<p.second<<"\n";
    }
    int dest;
    cin>>dest;
    cout<<st[dest]<<endl;
}