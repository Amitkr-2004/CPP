#include<iostream>
#include<vector>
#include<list>
using namespace std;

vector<list<int> > graph;
void add_edge(int src,int dest,bool is_dir=true){
    graph[src].push_back(dest);
    if(is_dir){
            graph[dest].push_back(src);
    }
}
void display(){
    for(int i=0;i<graph.size();i++){
        cout<<i<<"->";
        for(auto ele:graph[i]){
            cout<<ele<<",";
        }
        cout<<"\n";
    }
}
int main(){
    int v,e;
    cin>>v>>e;
    graph.resize(v,list<int> ());
    while(e-->0){
        int s,d;
        cin>>s>>d;
        // add_edge(s,d);
        add_edge(s,d,false);
    }
    display();
    return 0;
}