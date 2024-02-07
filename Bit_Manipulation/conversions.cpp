#include<iostream>
using namespace std;

int  binary_to_decimal(string &s){
    int n=s.size();
    int result=0;
    for(int i=n-1;i>=0;i--){
        char ch=s[i];
        int ascii=ch-'0';
        result=result+(ascii*(1<<n-i-1));
    }
    return result;
}

string decimal_to_binary(int num){
    string binary="";
    while(num>0){
        if(num%2==0)    binary= "0" + binary;
        else        binary="1" + binary;   
        num=num/2;
    }
    return binary;
}
int main(){
    string s="101110";
    cout<<binary_to_decimal(s)<<endl;
    cout<<decimal_to_binary(13);
}