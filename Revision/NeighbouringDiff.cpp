#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.size();
    int i=0;
    int count=0;
    while(i<n){
        if(i==0){
            if(s[i]!=s[i+1])    count++;
        }
        else if(i==n-1){
            if(s[i]!=s[i-1])    count++;
        }
        else if(s[i-1]!=s[i] && s[i]!=s[i+1])
            count++;
        i++;
    }
    cout<<count<<endl;
}