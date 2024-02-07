#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-->0){
	    string s="";
	    int n,m;
	    cin>>n>>m;
	    string str=to_string(m);
        int i=0;
        while(i<n){
            if(str[i]==0 && str[i+1]==0) {
              s+='A';
              i+=2;
            }
            else if(str[i]==0 && str[i+1]==1) {
              s+='T';
              i+=2;
            }
            else if(str[i]==1 && str[i+1]==0) {
               s+='C';
               i+=2;
            }
            else if(str[i]==1 && str[i+1]==1)   {
                s+='G';
                i+=2;
            }

        }
	    cout<<s<<endl;
	}
}
