#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<unordered_map<int,int>>  graph;
void add_edge(int src,int dest,int wt,bool is_dir=true){
    graph[src][dest]=wt;
    if(is_dir){
        graph[dest][src]=wt;
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
    graph.resize(v,unordered_map<int,int> ());
    while(e-->0){
        int s,d,wt;
        cin>>s>>d>>wt;
        add_edge(s,d,wt);
    }
    display();
    return 0;
}