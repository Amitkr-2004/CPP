#include<iostream>
#include<vector>
#include<list>
using namespace std;

vector<list<pair<int,int>> > graph;
void add_edge(int src,int dest,int wt,bool is_dir=true){
    graph[src].push_back({dest,wt});
    if(is_dir){
            graph[dest].push_back({src,wt});
    }
}
void display(){
    for(int i=0;i<graph.size();i++){
        cout<<i<<"->";
        for(auto ele:graph[i]){
            cout<<"("<<ele.first<<","<<ele.second<<")";
        }
        cout<<"\n";
    }
}
int main(){
    int v,e;
    cin>>v>>e;
    graph.resize(v,list<pair<int,int>> ());
    while(e-->0){
        int s,d,wt;
        cin>>s>>d>>wt;
        add_edge(s,d,wt);
    }
    display();
    return 0;
}