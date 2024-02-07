#include <iostream>
using namespace std;

int main() {
	int n,A,B;
	cin>>n;
	int zero=6;
	int six=6;
	int nine=6;
	int one=2;
	int seven=3;
	int two=5;
	int three=5;
	int five=5;
	int eight=7;
	int four=4;
	for(int i=1;i<=n;i++){
	    cin>>A>>B;
        int count=0;
	    int sum=A+B;
	    while(sum>0){
	        int rem=sum%10;
	            if(rem==one)    count+=one;
	            else if(rem==two ||rem==three||rem==five)    count+=two;
	            else if(rem==four)    count+=four;
	            else if(rem==zero || rem==six || rem==nine)    count+=zero;
	            else if(rem==seven)    count+=seven;
	            else if(rem==eight)    count+=eight;
	            sum=sum/10;
	    }
	    cout<<count<<endl;
	}
}
