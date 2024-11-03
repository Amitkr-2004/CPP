#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;

    string nums;
    int n=str.size();
    for(int i=0;i<n;i++){
        char ch=str[i];
        if(ch>=47 and ch<=58)   nums+=ch;
    }

    sort(nums.begin(),nums.end());

    string ans="";
    int idx=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            ans+=nums[idx];
            idx++;
        }
        else    ans+='+';
    }
    cout<<ans<<endl;
}