#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

vector<unordered_set<int> > graph;
void add_edges(int src,int dest){
    graph[src].insert(dest);
    graph[dest].insert(src);
}
void display(){
    for(int i=0;i<graph.size();i++){
        cout<<i<<"->";
        for(auto x:graph[i]){
            cout<<x<<",";
        }
        cout<<endl;
    }
}
int main(){
    int v,e;
    cin>>v>>e;
    graph.resize(v,unordered_set<int> ());
    while(e-->0){
        int s,d;
        cin>>s>>d;
        add_edges(s,d);
    }
    display();
}