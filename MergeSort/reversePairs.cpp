#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& a,vector<int>& b,vector<int>& c){
  int i=0;
  int j=0;
  int k=0;
  while(i<a.size() && j<b.size()){
    if(a[i]<=b[j]){
      c[k]=a[i];
      i++;
    }
    else{
      c[k]=b[j];
      j++;
    }
  k++;
  }
  if(i==a.size()){
    while(j<b.size()){
      c[k]=b[j];
      k++;
      j++;
    }
  }
  if(j==b.size()){
    while(i<a.size()){
      c[k]=a[i];
      k++;
      i++;
    }
  }
}
int count=0;
int inversion(vector<int> &a , vector<int> &b){
  int i=0;
  int j=0;
  int count=0;
  while(i<a.size() && j<b.size()){
    if(a[i]>(2*b[j])){
      count+=(a.size()-i);
      j++;
    }
    else  i++;
  }
  return count;
}
void mergeSort(vector<int>& nums){
int n=nums.size();
      if(n==1)  return;
        int n1=n/2;
        int n2=n-n/2;
        vector<int> a(n1);
        vector<int> b(n2);
        for(int i=0;i<n1;i++){
          a[i]=nums[i];
        }
        for(int i=0;i<n2;i++){
          b[i]=nums[n1+i];
        }

      mergeSort(a);
      mergeSort(b);
      
      count+=inversion(a,b);

      merge(a,b,nums);
}
int main() {
    vector<int> nums;
    nums={2,4,3,5,1};
    int n=5;
    mergeSort(nums);
    cout<<count;
}