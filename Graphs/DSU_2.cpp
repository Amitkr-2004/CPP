#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int find(vector<int> &parent,int x){
    if(parent[x]==x){
        return x;
    }
    return parent[x]=find(parent,parent[x]);
}
void Union(vector<int> &parent,vector<int> &minimal,vector<int> &maximal,vector<int> &size,vector<int> &rank,int x,int y){
    int a=find(parent,x);   //parent of group where x is present 
    int b=find(parent,y);   //parent of group where y is present 
    if(a==b)    return; //as a and b lies on same set
    if(rank[a]>=rank[b]){
        rank[a]++;
        parent[b]=a;    //updating the value to a as it has smaller rank
        size[a]+=size[b];
        minimal[a]=min(minimal[a],minimal[b]);
        maximal[a]=max(maximal[a],maximal[b]);
    }
    else{
        rank[b]++;
        parent[a]=b;    //updating the value to b as it has smaller rank
        size[b]+=size[a];
        minimal[b]=min(minimal[a],minimal[b]);
        maximal[b]=max(maximal[a],maximal[b]);
    }
}
void file_i_o(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int main(){

    file_i_o();

    int x,y;
    cin>>x>>y;
    vector<int> parent(x+1);
    vector<int> rank(x+1,0);
    vector<int> minimal(x+1);
    vector<int> maximal(x+1);
    vector<int> size(x+1,1);
    
    for(int i=0;i<=x;i++){
        parent[i]=minimal[i]=maximal[i]=i;
    }
    while(y--){     //No. of queries
        string str;
        cin>>str;
        if(str=="union"){
            int a,b;
            cin>>a>>b;
            Union(parent,minimal,maximal,size,rank,a,b);
        }
        else{
            int x;
            cin>>x;
            x=find(parent,x);
          cout<<minimal[x]<<" "<<maximal[x]<<" "<<size[x]<<endl;
        }
    }
}