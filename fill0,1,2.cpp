#include<iostream>
#include<vector>
using namespace std;
void sort03(vector<int>&v){
    int noz = 0,noo = 0,noT = 0;
    for(int i=0;i<v.size();i++){
        if(v[i]==0){
            noz++;
        }
        else if(v[i]==1){
            noo++;
        }
        else{
            noT++;
            
        }
    }
    for(int i=0;i<v.size();i++){
        if(i<noz){
            v[i] = 0;
        }
        else if(i<(noo+noz)){
            v[i] = 1;
        }
        else{
            v[i] = 2;
        }
    }
    for(int i=0;i<v.size();i++){
        cout << v[i] << '\t';
    }
}
int main(){
    vector<int>nums;
    nums.push_back(2);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(0);
    sort03(nums);
}