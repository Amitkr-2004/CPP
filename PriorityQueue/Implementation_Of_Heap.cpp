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

    void downheapify(int idx){
        while(idx<hp.size()){
            int maxIdx=idx;
            int lc=2*idx+1;
            int rc=2*idx+2;

            if(lc>hp.size())    break;
            if(hp[lc]>hp[maxIdx]){
                maxIdx=lc;
            }
            if(rc<hp.size() && hp[rc]>hp[maxIdx]){
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

    void pop_custom(int idx){
        //T.C. =O(logn)
        
        if(isEmpty())   return;
        hp[idx]=INT_MAX;    //first making that element as INT_MAX
        if(!isEmpty()) upheapify(idx);  //Then pushing that element to top as it has highest value
        swap(hp[0],hp[hp.size()-1]);    //swapping top value which is idx val with the last element
        hp.pop_back();  //removing that element;
        if(!isEmpty()) downheapify(0);  //just do downheapify
    }

    bool isEmpty(){
        if(hp.size()==0)    return true;
        return false;
    }

    void push(int val){
        //T.C. =O(logn)
        hp.push_back(val);
        upheapify(hp.size()-1);
    }

    void pop(){
        //T.C. =O(logn)
        if(isEmpty())   return;
        swap(hp[0],hp[hp.size()-1]);
        hp.pop_back();
        if(!isEmpty())
            downheapify(0);
    }
    int peek(){
        if(isEmpty())   return 0;
        return hp[0];
    }
    void display(){
       cout<<"[";
       for(int i=0;i<hp.size();i++){
        cout<<hp[i]<<" ";
       } 
       cout<<"]";
    }
};

int main(){
    Maxheap hp;
    hp.push(10);
    hp.push(30);
    hp.push(-1);
    hp.push(15);
    hp.push(50);
    hp.push(60);
    hp.push(16);
    hp.push(18);
    hp.push(100);
    hp.display();
    cout<<endl;

    hp.pop();
    hp.display();
    cout<<endl;

    hp.pop();
    hp.display();
    cout<<endl;
    
    hp.pop();
    hp.display();
    cout<<endl;

    cout<<hp.peek();
    cout<<endl;

    hp.pop_custom(3);
    hp.display();
    cout<<endl;
}