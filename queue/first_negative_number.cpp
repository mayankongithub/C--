#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
    int arr[] = {3,-4,-7,30,7,-9,2,1,6,-1};
    queue<int>q;
    vector<int>v;
    for(int i=0;i<10;i++){
        if(arr[i]<0){
            q.push(i);
        }
    }
    int k = 3;
    int i = 0;
    while(i+k<=10){
        while(q.size()>0 && q.front()<i) q.pop();
        if(q.size()==0 || q.front()>=i+k)v.push_back(0);
        else{
            v.push_back(arr[q.front()]);
        }
        i++;
    }
    for(int i=0;i<v.size();i++){
        cout << v.at(i) << " ";
    }
}