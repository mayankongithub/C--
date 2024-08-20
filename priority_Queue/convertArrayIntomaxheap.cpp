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
        //tc => O(nlogn) for better use downheapify
        for(int i=1;i<v.size ();i++){
            upheapify(i);
        }
    }
};
int main(){
    vector<int>hpv = {9,6,1,19,3,2,8,12,5};
    heap hp(hpv);
    hp.display();

}


