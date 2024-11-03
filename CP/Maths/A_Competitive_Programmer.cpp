#define ll long long 
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    while(n-->0){
        string s;
        cin>>s;
        ll sum=0;
        bool zero=false;
        int even=0;
        for(int i=0;i<s.size();i++){
            int ascii=s[i]-'0';
            sum+=ascii;
            if(ascii==0)    zero=true;
            if(ascii%2==0)    even++;
        }
        if(sum%3==0 and zero==true and even>1)   cout<<"red"<<endl;     //since one 0 will get cancel out and rest will 1 more 0 will be required to decide whether the no is even or not
        else    cout<<"cyan"<<endl;
    }
}