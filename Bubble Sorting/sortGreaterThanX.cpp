#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> str1(n);
    vector<string> str2;
    for(int i=0;i<str1.size();i++){
        cin>>str1[i];
    }
    for(int i=0;i<str1.size();i++){
        if(str1[i]<="X"){
            str2.push_back(str1[i]);
        }
    }
    int n2=str2.size();
    //bubble sorting
        for(int i=0;i<n2-1;i++){
        bool flag=true;
        for(int j=0;j<n2-1-i;j++){
            if(str2[j]>str2[j+1]){
                swap(str2[j],str2[j+1]);
                flag=false;
            }
        }
        if(flag==true)
          break;
    }
    for(int i=0;i<n2;i++){
        cout<<str2[i]<<" ";
    }
    cout<<endl;
}