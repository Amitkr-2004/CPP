#include <bits/stdc++.h>

using namespace std;

int main(){
    double h,l;
    cin>>h>>l;

    cout<<fixed<<setprecision(13)<<(abs(h*h - l*l))/(2.0*h)<<endl;
}