#include<iostream>
#include<vector>
#include<queue>
#include<climits>
#include<set>
using namespace std;

class Solution {
public:
    void bfs(vector<vector<int>> &rooms){
        set<pair<int,int>> s;
        queue<pair<int,int>> q;
        int row=rooms.size();
        int col=rooms[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(rooms[i][j]==0)  q.push({i,j});
            }
        }
        q.push({-2,-2});
        int step=1;
        vector<vector<int>> dir={{1,0},{-1,0},{0,1},{0,-1}};
        while(!q.empty()){
            auto cell=q.front();
            q.pop();
            int i=cell.first;
            int j=cell.second;
            if(i==-2 and j==-2){
                if(!q.empty()){
                    q.push({-2,-2});
                    step++;
                }
                else    break;
            }
            else{
            s.insert({i,j});
            for(int d=0;d<4;d++){
                int newRow=i + dir[d][0];
                int newCol=j + dir[d][1];

                if(newRow<0 or newCol<0 or newRow>=row or newCol>=col or rooms[newRow][newCol]!=INT_MAX)     continue;
                if(s.find({newRow,newCol})!=s.end())    continue;
                s.insert({newRow,newCol});
                rooms[newRow][newCol]=step;
            }
        }
        }
        return;
    }
    void wallsAndGates(vector<vector<int>> &rooms) {
        bfs(rooms);
        return;
    }
};