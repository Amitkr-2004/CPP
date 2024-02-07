#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t-->0){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int count=0;
	 int mx=INT_MIN;
	 int idx=-1;
	 for(int i=0;i<n;i++){
	     if(mx<v[i]){
	         mx=v[i];
	         idx=i;
	     }
	 }
	 if(idx==n-1){
	     cout<<0<<endl;
	 }
	 else{
	     for(int i=0;i<n-1;i++){
	         for(int j=0;j<n-1-i;j++){
	             if(v[j]>v[j+1]){
	                 swap(v[j],v[j+1]);
	                 count++;
	             }
	         }
	    }
	    cout<<count<<endl;
	 }
    }
}
