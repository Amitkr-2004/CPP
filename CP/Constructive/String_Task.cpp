#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;

    string no_vowels="";
    for(int i=0;i<str.size();i++){
        if(str[i]=='a' or str[i]=='e' or str[i]=='i' or str[i]=='o' or str[i]=='u' or str[i]=='y')     continue;
        else if(str[i]=='A' or str[i]=='E' or str[i]=='I' or str[i]=='O' or str[i]=='U' or str[i]=='Y')    continue;
        else    no_vowels+=str[i];     
    }

    string ans="";
    ans+='.';
    for(int i=0;i<no_vowels.size();i++){
        char ch=no_vowels[i];
        if(no_vowels[i]<=97){
            ch+=32;
        }
        ans+=ch;
        ans+='.';
    }
    ans.pop_back();

    cout<<ans<<endl;
}