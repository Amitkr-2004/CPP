#include <bits/stdc++.h>

using namespace std;

int main(){
  int m,n;
  cin>>m>>n;

  vector<vector<int>> A(m,vector<int> (n,1));

  vector<vector<int>> B(m,vector<int> (n));

  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>B[i][j];
        if(B[i][j]==0){
            for(int k=0;k<m;k++){   //making row elements as 0
                A[k][j]=0;
            }
            for(int k=0;k<n;k++){   //making column element as 0
                A[i][k]=0;
            }
        }
    }
  }
  
  //Now check whether matrix A is valid or not

  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(B[i][j]==1){
            int sum=0;
            for(int k=0;k<m;k++){
                sum+=A[k][j];
            }
            for(int k=0;k<n;k++){
                sum+=A[i][k];
            }
            if(sum==0){
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
  }
  cout<<"YES"<<endl;
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<A[i][j]<<" ";
    }
    cout<<endl;
  }
}