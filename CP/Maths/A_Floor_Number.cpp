#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;
  cin>>t;
  while(t-->0){
    int n,x;
    cin>>n>>x;
    int floorNo=1;
    int apartment=2;

    while(apartment<n){
        apartment+=x;
        floorNo++;
    }
    cout<<floorNo<<endl;
  }
}