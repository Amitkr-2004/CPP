#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string str;
    cin>>str;
    getline(cin,str);
    stringstream ss(str);
    string temp;
    vector<string> v;
    while(ss>>temp){
        v.push_back(temp);
    }
    int n=v.size();
    sort(v.begin(),v.end());
    int count=1;
    int maxcount=1;
    for(int i=1;i<n;i++){
        if(v[i]==v[i-1]){
            count++;
            if(maxcount<count){
                maxcount=count;
            }
        }
            else{
                count=1;
            }
    }
            count=1;
            for(int i=1;i<n;i++){
                if(v[i]==v[i-1]){
                    count++;
                    if(count==maxcount){
                        cout<<v[i]<<"--"<<maxcount<<endl;
                    }
                }
                    else{
                        count=1;
                    }
                }
            }
    

