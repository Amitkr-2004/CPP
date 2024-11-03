#include <bits/stdc++.h>

using namespace std;

bool isValid(char a,char b){
    if(a=='a' and b=='z')   return false;
    if(a==b)    return true;

    char orgA=a;
    char orgB=b;
    orgA++;
    orgB--;
    if(orgA==orgB)  return true;
    orgB=b;
    orgB++;
    if(orgA==orgB)  return true;
    
    orgA=a;
    orgB=b;
    orgA--;
    orgB--;
    if(orgA==orgB)  return true;
    orgB=b;
    orgB++;
    if(orgA==orgB)  return true;

    return false;
}

int main(){
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        string s;
        cin>>s;

        int i=(n/2)-1;
        int j=n/2;
        bool flag=false;
        while(i>=0 and j<n){
            bool ans=isValid(s[i],s[j]);
            if(ans){
                i--;
                j++;
            }
            else{
                flag=true;
                break;
            }
        }
        if(flag==false)     cout<<"YES"<<endl;
        else    cout<<"NO"<<endl;
    }
}