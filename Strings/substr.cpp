#include<iostream>
#include<string>

using namespace std;
int main(){
    string s1,s2;
    cin>>s1;
    int n=s1.length();
    s2=s1.substr(n/2,n-1);
    cout<<s2;
}