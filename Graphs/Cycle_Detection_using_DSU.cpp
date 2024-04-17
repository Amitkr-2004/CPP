#include<iostream>
#include<vector>
using namespace std;
int find(vector<int> &parent,int x){    
    if(parent[x]==x)    return x;
    return parent[x]=find(parent,parent[x]);
}
bool Union(vector<int> &parent,vector<int> &rank,int x,int y){
    int a=find(parent,x);
    int b=find(parent,y);
    if(a==b)    return true;    //if group of x and y are same return true as a cycle is detected
    if(rank[a]>=rank[b]){
        rank[a]++;
        parent[b]=a;
    }
    else{
        rank[b]++;
        parent[a]=b;
    }
    return false;
}   
int main(){     //T.C=O(e*(log*v))
    int v,e;
    cin>>v>>e;
    vector<int> parent(v+1);
    vector<int> rank(v+1,0);

    for(int i=0;i<v;i++){
        parent[i]=i;
    }
    while(e-->0){
        int a,b;
        cin>>a>>b;
        bool ans=Union(parent,rank,a,b);
        if(ans==true)   cout<<"Cycle detected";
        break;
    }
}