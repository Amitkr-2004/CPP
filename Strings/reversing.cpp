#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    int left,right;
    cin>>str;
    left=str.size()/2;
    right=str.size()-1;
    while(left<=right){
        char temp=str[left];
        str[left]=str[right];
        str[right]=temp;
        left++;
        right--;
    }
    cout<<str;
}