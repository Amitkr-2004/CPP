#include<iostream>
using namespace std;

void find(int n,int *ptr1,int *ptr2){
    *ptr2=n%10;
    cout<<*ptr2<<endl;
    while(n>0){
        *ptr1=n%10;
        n=n/10;
    }
    cout<<*ptr1;
}
int main(){
    int n,firstdigit,lastdigit;
    cin>>n;
    int *ptr1=&firstdigit;
    int *ptr2=&lastdigit;
    find(n,ptr1,ptr2);
}