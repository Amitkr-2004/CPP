#include<iostream>
#include<vector>
using namespace std;

void lastoccurence(vector<int> &v,int x){
    int index;
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
            index=i;
            break;
        }
    }
    cout<<index;
}
int main(){
    int n,x;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    cout<<endl;
    cout<<"enter element to search"<<endl;
    cin>>x;
    lastoccurence(v,x);
}