#include<iostream>
#include<string>
#include<algorithm>
#include<climits>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string str="he is a good as well as a bad boy ";
    vector<string> v;
    stringstream ss(str);
    string temp;
    int count=1;
    int mx=INT_MIN;
    while(ss>>temp){
        v.push_back(temp);
    }
    int n=v.size();
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++){
        if(v[i]==v[i+1]){
            count++;
            mx=max(mx,count);
        }
        else    count=1;
    }
    for(int i=0;i<n-1;i++){
        if(v[i]==v[i+1]){
            count++;
            if(count==mx){
            cout<<v[i]<<"-"<<mx<<endl;
        }
        }
        else    count=1;
    }
}