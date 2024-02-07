#include<iostream>
using namespace std;
int maze1(int sr,int sc,int er,int ec){
    if(sr>er || sc>ec)  return 0;
    if(sr==er || sc==ec)    return 1;
    int rightway=maze1(sr,sc+1,er,ec);
    int downway=maze1(sr+1,sc,er,ec);
    int totalWays=rightway+downway;
    return totalWays;
}
int maze2(int er,int ec){
    if(er==0 || ec==0)  return 0;
    if(er==1 && ec==1)    return 1;
    int rightway=maze2(er,ec-1);
    int downway=maze2(er-1,ec);
    int totalWays=rightway+downway;
    return totalWays;
}


int main(){
    //int ans=maze1(1,1,2,3);
    //cout<<ans<<endl;
    cout<<maze2(5,5);
    