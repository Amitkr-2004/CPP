#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t-->0){
        string s;
        cin>>s;
        
        int i=0;
        int prev=-1,totalZero=0;
        int n=s.size();
        while(i<n){
            if(s[i]=='1'){
                if(prev!=-1)    totalZero+=(i-prev-1);  //finding the gap
                prev=i;
            }
            i++;
        }
        cout<<totalZero<<endl;
    }
}