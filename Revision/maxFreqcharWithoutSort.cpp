#include<iostream>
#include<string>
#include<algorithm>
#include<climits>
#include<vector>
using namespace std;
int main(){
    string s;
    cin>>s;
    int mx=INT_MIN;
    int n=s.size();
    int count=0;
    vector<int> freq(26,0);
    for(int i=0;i<n;i++){
        char ch=s[i];
        int ascii=int(ch);
        freq[ascii-97]++;
    }
    for(int i=0;i<25;i++){
        if(mx<=freq[i]){
            mx=freq[i];
        }
    }
    for(int i=0;i<26;i++){
       if(freq[i]==mx){
            char ch=char(i+97);
            cout<<ch<<"-"<<mx<<endl;
       }
    }
    cout<<endl;
}