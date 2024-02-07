#include<iostream>
using namespace std;

int product(int* a,int* b){
    int prod= *a * *b;
    return(prod);
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<product(&a,&b);
}
