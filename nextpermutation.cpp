#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void permutation(vector<int>&nums){
    //Find out the idx
    int idx = -1;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                idx = i;
                break;
            }
        }
        if(idx == -1){
            reverse(nums.begin(),nums.end());
            return;
        }
        //Reverse the array next to the idx index
        reverse(nums.begin()+idx+1,nums.end());
        //Find the element which is next to idx element 
        int x = -1;
        for(int i=idx+1;i<nums.size();i++){
            if(nums[i]>nums[idx]){
                x = i;
                break;
            }
        }
        //Now swap the idx and the element greater then it
        int temp = nums[idx];
        nums[idx] = nums[x];
        nums[x] = temp;
        return ;
}
   
int main(){
    vector<int>v;
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    permutation(v);
    for(int i=0;i<v.size();i++){
        cout << v[i] << '\t';
    }
}
