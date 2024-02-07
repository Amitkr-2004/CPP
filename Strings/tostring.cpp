#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    int n;
    cin>>n;
    str=to_string(n);
    int length=str.size();
    cout<<length;
}