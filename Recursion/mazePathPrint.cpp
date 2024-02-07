#include<iostream>
using namespace std;
void printPath1(int sr,int sc,int er,int ec,string s){
    if(sr>er || sc>ec)  return;
    if(sr==er && sc==ec){
        cout<<s<<endl;
        return;
    }
    printPath1(sr,sc+1,er,ec,s+"R");
    printPath1(sr+1,sc,er,ec,s+"D");
}
void printPath2(int er,int ec,string s){
    if(er<1 || ec<1)  return;
    if(er==1 && ec==1){
        cout<<s<<endl;
        return;
    }
    printPath2(er,ec-1,s+"R");
    printPath2(er-1,ec,s+"D");
}
int main(){
    //printPath(1,1,3,3,"");
    printPath2(3,3,"");
}