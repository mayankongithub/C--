#include<iostream>
#include<vector>
using namespace std;
void dutch(vector<int>&v){
    int n = v.size()-1;
    int l=0,mid=0,hi=n-1;
    while(mid<=hi){
        if(v[mid]==2){
            
            int temp = v[mid];
            v[mid] = v[hi];
            v[hi] = temp;
            hi--;
        }
        else if(v[mid]==0){
            int temp = v[mid];
            v[mid] = v[l];
            v[l] = temp;
            l++;
            mid++;
        }
        else{
            mid++;
        }
    }
    for(int i=0;i<v.size();i++){
        cout << v[i] << '\t';
    }
}
int main(){
    vector<int>nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(2);
    dutch(nums);
} 
