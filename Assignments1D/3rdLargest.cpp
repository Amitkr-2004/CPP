#include<iostream>
#include<vector>
using namespace std;
int main(){
    int max_1=0;
    int max_2=0;
    int max_3=0;
    int n;
    cin>>n;
    vector<int> v;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
for(int i=0;i<n;i++){
        if(max_1<arr[i])  max_1=arr[i];
}
cout<<max_1<<" ";

for(int i=0;i<n;i++){
        if(max_2<arr[i] && arr[i] !=max_1)  max_2=arr[i];
}
cout<<max_2<<" ";

for(int i=0;i<n;i++){
        if(max_3<arr[i] && arr[i]!=max_1 && arr[i] !=max_2)  max_3=arr[i];
}
cout<<max_3<<" ";
}