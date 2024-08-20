#include<bits/stdc++.h>
using namespace std;
class MaxHeap{
    vector<int>v;
public:
    void upheapify(int ci){
        while(ci > 0){
            int papa = (ci - 1)/2;
            if(v[ci] > v[papa]){
                swap(v[papa],v[ci]);
                ci = papa;
            }
            else{
                break;
            }
        }
    }
    void push(int element){
        v.push_back(element);
        upheapify(v.size()-1);
    }

    void dowanify(int idx){
        while(idx < v.size()){
            int lc = idx*2+1;
            int rc = idx*2+2;
            if(lc >= v.size())break;
            int maxside = idx;
            if(v[idx] < v[lc]){
                maxside = lc;
            }
            if(rc < v.size() && v[maxside] < v[rc]){
                maxside = rc;
            }
            if(maxside != idx){
                swap(v[maxside],v[idx]);
                idx = maxside;
            }
            else{
                break;
            }
        }

    }

    void pop(){
        if(empty())return;
        swap(v[0],v[v.size()-1]);//removes the highest priority element
        v.pop_back();
        if(!empty()) dowanify(0);
    }
    bool empty(){
        return v.size()==0;
    }
    void display(){
        for(int i=0;i<v.size();i++){
            cout << v[i] << " ";
        }
    }
    void anyele(int idx){
        v[idx] = INT_MAX;
        upheapify(idx);
        v[0] = v[v.size()-1];
        dowanify(0);
        v.pop_back();
    }
};
int main(){
    MaxHeap hp;
    hp.push(3);
    hp.push(4);
    hp.push(11);
    hp.push(9);
    hp.push(14);
    hp.push(-1);
    hp.push(30);
    hp.push(44);
    hp.push(50);
    hp.display();
    cout << endl;
    hp.anyele(3);
    hp.display();
}