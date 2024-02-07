#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[]={3,1,2,5,4,6,2,3};
    stack<int> st;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int nge[n];
    st.push(arr[n-1]);
    nge[n-1]=-1;
    //S.C:O(n)  T.C:O(n)
    for(int i=n-2;i>=0;i--){
        while(st.size()>0 && arr[i]>st.top())   st.pop();   //pop
        if(st.size()==0)    nge[i]=-1;
        else    nge[i]=st.top();    //putting value in nge array
        st.push(arr[i]);        //push values
    }
    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }
}