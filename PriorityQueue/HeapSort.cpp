#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Maxheap{
    vector<int> hp;

    void upheapify(int ci){
        while(ci>0){
        int pi=(ci-1)/2;
        if(hp[pi]<hp[ci]){
            swap(hp[pi],hp[ci]);
            ci=pi;
        }
        else{
            break;
        }
        }
    }

    void downheapify(int idx,int bound){
        while(idx<hp.size()){
            int maxIdx=idx;
            int lc=2*idx+1;
            int rc=2*idx+2;

            if(lc>=bound)    break;
            if(hp[lc]>hp[maxIdx]){
                maxIdx=lc;
            }
            if(rc<bound && hp[rc]>hp[maxIdx]){
                maxIdx=rc;
            }
            if(maxIdx!=idx){
                swap(hp[idx],hp[maxIdx]);
                idx=maxIdx;
            }
            else{
                break;
            }
        }
    }
public:
    int i;  //defines size of heap[0,i]
    Maxheap(vector<int> &v){
        hp=v;
        int n=hp.size();
        i=n;
        for(int j=n/2;j>=0;j--){
            downheapify(j,i);
        }
    }
    vector<int> HeapSort(){
        int sz=hp.size();
        while(sz>0){
            swap(hp[0],hp[i]);
            i--;
            sz--;
            downheapify(0,i);
        }
        return hp;
    }
    void push(int val){
        //T.C. =O(logn)
        hp.push_back(val);
        upheapify(hp.size()-1);
    }

    bool isEmpty(){
        if(hp.size()==0)    return true;
        return false;
    }

    void pop(){
        //T.C. =O(logn)
        if(isEmpty())   return;
        swap(hp[0],hp[hp.size()-1]);
        hp.pop_back();
        i--;
        if(!isEmpty())
            downheapify(0,i);
    }
    int peek(){
        if(isEmpty())   return 0;
        return hp[0];
    }
    void display(){
       cout<<"[";
       for(int j=0;j<hp.size();j++){
        cout<<hp[j]<<" ";
       } 
       cout<<"]";
    }
};


int main(){
    vector<int> v={9,6,1,19,3,2,8,12,5};
    Maxheap hp(v);
    vector<int> ans=hp.HeapSort();
    hp.display();
    cout<<endl;
}