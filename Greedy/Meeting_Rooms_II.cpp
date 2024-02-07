#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int RequiredRooms(vector<vector<int>> rooms){
    int ans=0;
    int totalRoom=0;
    int n=rooms.size();
    vector<int> start;
    vector<int> ending;
    for(int i=0;i<n;i++){
        start.push_back(rooms[i][0]);
        ending.push_back(rooms[i][1]);
    }
    sort(start.begin(),start.end());
    sort(ending.begin(),ending.end());
    int i=0;
    int j=0;
    while(i<start.size() && j<ending.size()){
        if(start[i]<ending[j]){
            totalRoom++;
            i++;
            
        }
        else if(start[i]>ending[j]){
            j++;
            totalRoom--;
        }
        else{
            i++;
            j++;
        }
        ans=max(totalRoom,ans);
    }
    return ans;
}

int main(){
    vector<vector<int>> v={{1,10},{2,7},{3,19},{8,12},{10,20},{11,30}};
    cout<<RequiredRooms(v);
}