#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    vector<int> v1;
    vector<int> v2(n);
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v1.push_back(a);
    }
    int x=0;
    for(int i=n-1;i>=0;i--){
        v2[x++] = v1[i];
    }
    cout<<"your reverse array is:"<<endl;
    display(v2);
}