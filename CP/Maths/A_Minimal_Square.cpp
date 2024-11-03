#include <bits/stdc++.h>

using namespace std;

int main(){
   int t;
   cin>>t;

   while(t-->0){
      int a,b;
      cin>>a>>b;
      if(a==b){
            cout<<(a+b)*(a+b);
      }
      else{
            int mx1=0,mx2=0;
            if(a>b){
                mx1=a;
                mx2=b;
            }
            else{
                mx1=b;
                mx2=a;
            }
            
            if(mx1%mx2==0)      cout<<(mx1*mx1);
            else{
                int ans=0;
                int div=(mx1/mx2);

                if(div>1)    ans= mx1;
                else ans=mx2*2;
                cout<<ans*ans;
            }
      }
      cout<<endl;
   }
}