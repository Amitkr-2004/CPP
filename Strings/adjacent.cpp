#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    int count=0;
    int i=1;
    while(i<n-1){
        if(str[i]!=str[i-1] && str[i]!=str[i+1]){
            count++;
            i++;
        }
        else{
            i++;
        }
    }
if(n==1)   {
    count=0;
} 
if(n!=1){
if(str[0]!=str[1])  {
    count++;
}
else if(str[n-1]!=str[n-2]){
     count++;
}
}
cout<<count;
}