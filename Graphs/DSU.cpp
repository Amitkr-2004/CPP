#include<iostream>
#include<vector>
using namespace std;

int find(vector<int> &parent,int x){
    if(parent[x]==x)    return x;
    return parent[x]=find(parent,parent[x]);
}
void Union(vector<int> &parent,vector<int> &rank,int x,int y){
    int a=find(parent,x);   //parent of group where x is present 
    int b=find(parent,y);   //parent of group where y is present 
    if(a==b)    return;
    if(rank[a]>=rank[b]){
        rank[a]++;
        parent[b]=a;    //updating the value to a as b has smaller rank
    }
    else{
        rank[b]++;
        parent[a]=b;    //updating the value to b as it has smaller rank
    }
}
int main(){
    int x,y;
    cin>>x>>y;
    vector<int> parent(x+1);
    vector<int> rank(x+1,0);
    for(int i=0;i<=x;i++){
        parent[i]=i;
    }
    while(y--){     //No. of queries
        string str;
        cin>>str;
        if(str=="union"){
            int a,b;
            cin>>a>>b;
            Union(parent,rank,a,b);
        }
        else{
            int x;
            cin>>x;
            cout<<find(parent,x);
        }
    }
}