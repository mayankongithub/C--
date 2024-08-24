#include<bits/stdc++.h>
using namespace std;
class heap{
public:
    vector<int>v;
   
    void upheapify(int ci){
        while(ci > 0){
            int papa = (ci -1) / 2;
            if(v[papa] < v[ci]){
                swap(v[papa],v[ci]);
                ci = papa;
            }
            else{
                break;
            }
        }
    }
    void downheapify(int idx){
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
    
    bool empty(){
        return v.size()==0;
    }
    void display(){
        for(int i=0;i<v.size();i++){
            cout << v[i] << " "; 
        }
    }
    heap(vector<int>hpv){
        v = hpv;
        for(int i=1;i<v.size ();i++){
            upheapify(i);
        }
        //tc => O(nlogn) for better use downheapify
        for(int i=v.size()/2;i>=0;i--){
            downheapify(i);
        }
    }
};
int main(){
    vector<int>hpv = {9,6,1,19,3,2,8,12,5};
    heap hp(hpv);
    hp.display();

}


