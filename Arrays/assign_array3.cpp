#include<iostream>
#include<vector>
using namespace std;
void nonrepeating(vector<int> v){
    for(int i=0;i<v.size();i++){
        int x=v[i];
        int count =0;
        for(int j=i+1;j<v.size();j++){
            if(v[j]==x) count++;

        }
        if(count==0) {
            cout<<v[i];
            break;
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    nonrepeating(v);
}