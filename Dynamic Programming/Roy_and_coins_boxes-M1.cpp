#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> f(n+1,0);
    int m;
    cin>>m;
    vector<int> l(n+1,0);
    vector<int> r(n+1,0);
    for(int i=0;i<m;i++){
        int L,R;
        cin>>L>>R;
        l[L]++;
        r[R]++;
    }
    f[1]=l[1];
    for(int i=2;i<=n;i++){
        f[i]=l[i]-r[i-1]+f[i-1];
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
