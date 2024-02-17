#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> f(n+10,0);  //main array
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int L,R;
        cin>>L>>R;
        f[L]++;
        f[R+1]--;
    }
    for(int i=1;i<f.size();i++){
        f[i]=f[i]+f[i-1];
    }
    vector<int> freq(10000005,0);
    for(int i=0;i<=n;i++){
        int coins=f[i];
        freq[coins]++;
    }
    //suffix sum
    for(int i=freq.size()-2;i>=0;i--){
        freq[i]=freq[i]+freq[i+1];
    }
    int q;
    cin>>q;
    while(q-->0){
        int val;
        cin>>val;
        cout<<freq[val]<<endl;
    }
}
