#include<iostream>
using namespace std;
void binaryString(int n,string s){
    if(s.size()==n){
        cout<<s<<endl;
        return;
    }
    string z="0";
    string o="1";
    binaryString(n,s+z);
    if(s.size()==0 || s[s.size()-1]!='1')   
                binaryString(n,s+o);
}
int main(){
    int n;
    cin>>n;
    binaryString(n,"");
}