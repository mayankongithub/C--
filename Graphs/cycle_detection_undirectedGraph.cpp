#include<bits/stdc++.h>
using namespace std;
bool cycle(int node,int parent,vector<bool>&visited,vector<vector<int>>&adj){
    visited[node] = 1;
    for(int i=0;i<adj[node].size();i++){
        if(parent==adj[node][i]){
            continue;
        }
        if(visited[adj[node][i]]){
            return 1;
        }
        if(cycle(adj[node][i],node,visited,adj)){
            return 1;
        }
    }
    return 0;
}
int main(){
    vector<vector<int>>adj = {{1}, {0, 2, 4}, {1, 3}, {2, 4}, {1, 3}};
    vector<bool>visited(adj.size(),0);
    int v = 5;
    bool flag = 0;
    for(int i=0;i<visited.size();i++){
        if(!visited[i]){
            if(cycle(i,-1,visited,adj)){
                flag = 1;
                break;
            }
        }
    }
    if(flag==0){
        cout << "No cycle present";
    }
    else cout << "Cycle is present";
}