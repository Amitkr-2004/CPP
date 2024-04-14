#include<iostream>
#include<queue>
#include<vector>
#include<set>
using namespace std;

int x;
int y;
int bfs(){
    vector<vector<int>> grid(305,vector<int> (305,0));
    int step=1;
    queue<pair<pair<int,int>,int>> q;
    vector<vector<int>> dir={{2,1},{2,-1},{1,2},{1,-2},{-2,1},{-2,-1},{-1,2},{-1,-2}};
    set<pair<int,int>>visited;

    for(int i=0;i<8;i++){
        q.push({{dir[i][0],dir[i][1]},step});
    }
    q.push({{-400,-400},step});
    int ans;
    while(!q.empty()){
        auto temp=q.front();
        q.pop();
        
        int r=temp.first.first;
        int c=temp.first.second;
        visited.insert({r,c});

        if(r==x and c==y)   return step;

        if(r==-400 and c==-400) {
            if(!q.empty()){
                step++;
                q.pop();
                q.push({{-400,-400},step});
            }
            else    break;
        }
        else{
        for(int d=0;d<8;d++){
            int newRow=r+dir[d][0];
            int newCol=c+dir[d][1];
            if(newRow<-300 or newCol<-300)    continue;
            if(visited.find({newRow,newCol})==visited.end())   q.push({{newRow,newCol},step});
        }
    }
    }
    return -1;
}

int main(){
    cin>>x>>y;
    cout<<bfs();
    
}