#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    int n;
    cin>>n;
    cin>>s;
    int count=0;
    int i=0;
    sort(s.begin(),s.end());
    int max=INT_MIN;
    char element;
    while(i<n){
        if(s[i]==s[i+1]){
            count++;
            if(max<count){
                max=count;
                element=s[i];
            }
            i++;
        }
        else{
            count=0;
            i++;
        }
    }
    cout<<element<<"--"<<max+1;
}