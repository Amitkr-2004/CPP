#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string s;
    int n;
    cin>>n;
    cin>>s;
    int max=0;  
    vector<int> freq(26,0);
    for(int i=0;i<n;i++){
        char ch=s[i];
        int ascii=int(ch);
        freq[ascii-97]++;
    }
    for(int i=0;i<26;i++){
        if(max<freq[i]){
            max=freq[i];
        }
    }
    for(int i=0;i<26;i++){
        if(max==freq[i]){
            int ascii=i+97;
            cout<<char(ascii)<<"--"<<max;
            break;
        }
    }
}