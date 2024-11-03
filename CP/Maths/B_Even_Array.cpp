#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t-->0){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)    cin>>v[i];

        int count=0;
        int totalCount=0;
        for(int i=0;i<n;i++){
            if(i%2==0 and v[i]%2!=0){
                count++;
                totalCount++;
            }       
            else if(i%2!=0 and v[i]%2==0){
                count--;
                totalCount++;
            }
        }
        if(count==0)    cout<<totalCount/2;
        else    cout<<-1;
        cout<<endl;
    }
}