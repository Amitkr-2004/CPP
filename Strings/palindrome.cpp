#include<iostream>
#include<string>
using namespace std;
int main(){
    string str,org;
    cin>>str;
    org=str;
    int left=0;
    int right=str.size()-1;
    while(left<=right){
        char temp=str[left];
        str[left]=str[right];
        str[right]=temp;
        left++;
        right--;
    }
        if(org==str)  cout<<"Palindrome";
        else    cout<<"not";
    return 0;
    }
