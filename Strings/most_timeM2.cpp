#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    vector<int> freq(26,0);
    for(int i=0;i<n;i++){
        char ch=str[i];
        int ascii=(int)ch;
        freq[ascii-97]++;
    }
int max=0;
for(int i=0;i<26;i++){
    if(freq[i]>max){
        max=freq[i];
    }
}
for(int i=0;i<26;i++){
    if(freq[i]==max){
        int ascii=i+97;
        cout<<max<<"-"<<char(ascii);
    }
}
}