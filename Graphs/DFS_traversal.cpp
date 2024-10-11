#include<iostream>
#include<vector>
using namespace std;
void dfs(int node,vector<vector<int>>&adj,vector<int>&ans,vector<bool>&visited){
    visited[node] = 1;
    ans.push_back(node);
    for(int i=0;i<adj[node].size();i++){
        if(!visited[adj[node][i]]){
            dfs(adj[node][i],adj,ans,visited);
        }
    }
}
int main(){
    vector<vector<int>>adj = {{1,2,3},{},{4},{},{}};
    vector<int>ans;
    vector<bool>visited(adj.size(),0);
    int node = 0;
    dfs(node,adj,ans,visited);
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
}