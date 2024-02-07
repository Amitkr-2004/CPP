#include<iostream>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    string s;
    cin>>s;
    int mx=INT_MIN;
    int n=s.size();
    sort(s.begin(),s.end());
    int count=1;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            count++;
             mx=max(mx,count);
        }
        else    count=1;
    }
    count=1;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            count++;
            if(count==mx){
            cout<<s[i]<<"-"<<mx;
        }
        }        
        else    count=1;
    }
    cout<<endl;
}