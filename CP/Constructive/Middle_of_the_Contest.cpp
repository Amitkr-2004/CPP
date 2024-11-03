#include <bits/stdc++.h>

using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;

    int h1=(stoi)(s1.substr(0,2));
        
    int m1=(stoi)(s1.substr(3,2));

    int h2=(stoi)(s2.substr(0,2));

    int m2=(stoi)(s2.substr(3,2));

    int start=(h1*60+m1);
    int end=(h2*60+m2);

    int mid=(start+end)/2;

    int newhr=mid/60;
    int newmin=mid%60;

    string str1 = to_string(newhr);
    if(str1.size()==1)  str1='0'+str1;

    string str2=to_string(newmin);
    if(str2.size()==1)  str2='0'+str2;

    cout<<str1<<':'<<str2<<endl;
}