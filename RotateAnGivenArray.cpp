#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout << v.at(i) << '\t';
    }
}
void reverse_part(int i,int j,vector<int>&v){
    while(i<=j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}
int main(){
    int k = 9;
    vector<int>v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    v.push_back(7);
    v.push_back(4);
    v.push_back(8);
    int n = v.size();
    if(k>v.size()){
        k = k%v.size();
    }
    reverse_part(0,n-1-k,v);
    reverse_part(n-k,n-1,v);
    reverse_part(0,n-1,v);
    display(v);
}