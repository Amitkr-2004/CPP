#include <iostream>
#include <vector>
#include <queue>
using namespace std;
    int largestSumAfterKNegations(vector<int>& nums, int k) { //O(n+klogn)

    priority_queue<int,vector<int>,greater<int> >pq(nums.begin(),nums.end()); //O(n) 
        int sum = 0;
        for(int i= 0;i<nums.size();i++) sum+=nums[i];  
        while(k--){ //O(klogn)
        int ele = pq.top();
        if(ele == 0) break;
        else{
        pq.pop();
        sum-=ele;
        pq.push(-1*ele);
        sum+=(-ele);
        }
        }
        return sum;
    }
    int main(){
    vector<int> v = {4,2,3};
    int k = 1;
    cout << largestSumAfterKNegations(v,k);

}