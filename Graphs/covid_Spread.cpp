#include<bits/stdc++.h>
using namespace std;
bool valid(int i,int j,int row,int col){
    return i>=0 && i<row && j>=0 && j<col;
}
int main(){
    int row = 3;
    int col = 5;
    int arr[row][col] = {{2,1,0,2,1},{0,0,1,2,1},{1,0,0,2,1}};
    queue<pair<int,int>>q;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==2){
                q.push(make_pair(i,j));
            }
        }
    }
    int timer = 0;
    while(!q.empty()){
        int curr_patient = q.size();
        while(curr_patient--){
            int i = q.front().first;
            int j = q.front().second;
            q.pop();
            if(valid(i-1,j,row,col) && arr[i-1][j]==1){
                arr[i-1][j] = 2;
                q.push(make_pair(i-1,j));
            }
            if(valid(i+1,j,row,col) && arr[i+1][j]==1){
                arr[i+1][j] = 2;
                q.push(make_pair(i+1,j));
            }
            if(valid(i,j-1,row,col) && arr[i][j-1]==1){
                arr[i][j-1] = 2;
                q.push(make_pair(i,j-1));
            }
            if(valid(i,j+1,row,col) && arr[i][j+1]==1){
                arr[i][j+1] = 2;
                q.push(make_pair(i,j+1));
            }
        }
    }
    bool flag = false;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==1){
                flag = true;
                break;
            }
        }
    }
    if(flag==true){
        cout << "no covid completely spread";
    }
    else cout << "covid is spreaded";
}