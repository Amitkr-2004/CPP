#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    //bubble sorting
    // for(int i=0;i<n-1;i++){
    //     for(int j=0;j<n-1-i;j++){
    //         if(v[j]>v[j+1])
    //             swap(v[j],v[j+1]);
    //     }
    // }
    int count=0;
    //bubble sorting optimized
    for(int i=0;i<n-1;i++){
        bool flag=true;
        for(int j=0;j<n-1-i;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
                flag=false;
                count++;
            }
        }
        if(flag==true)
          break;
    }
    cout<<count;
    cout<<endl;
}