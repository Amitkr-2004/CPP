// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;
void f(int n,string ans){
    if(ans.size()==n){
        cout<<ans<<endl;
        return;
    }
    f(n,ans+"0");
    if(ans.size()==0 or ans[ans.size()-1]!='1')    f(n,ans+"1");
}
int main() {
    int n;
    cin>>n;
    f(n,"");
}