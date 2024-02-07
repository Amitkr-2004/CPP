#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    int count=0;
    char element;
    int max=INT_MIN;
    sort(str.begin(),str.end());
    int i=0;
    while(i<n){
        if(str[i]==str[i+1]){
            count++;
            if(max<count){
                max=count;
                element=str[i];
            }
            i++;
        }
        else {
            count=0;
            i++;
        }
    }
    cout<<element<<"-"<<max+1;
    }