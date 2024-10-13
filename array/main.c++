// #include<bits/stdc++.h>
// using namespace std;
// void bfs(vector<vector<int>>&adj,vector<int>&ans,vector<bool>&visited){
//     queue<int>q;
//     q.push(0);
//     visited[0] = 1;
//     while(!q.empty()){
//         int node = q.front();
//         q.pop();
//         ans.push_back(node);
//         for(int i=0;i<adj[node].size();i++){
//             if(!visited[adj[node][i]]){
//                 q.push(adj[node][i]);
//                 visited[adj[node][i]] = 1;
//             }
//         }
//     }
// }
// int main(){
//     vector<vector<int>>adj = {{1,2,3},{},{4},{},{}};
//     int v = 5;
//     vector<int>ans;
//     vector<bool>visited(v,0);
//     bfs(adj,ans,visited);
//     for(int i=0;i<ans.size();i++){
//         cout << ans[i] << " ";
//     }
// }
#include<bits/stdc++.h>
using namespace std;
void dfs(int node,vector<int>&ans,vector<bool>&visited,vector<vector<int>>&adj){
    visited[node] = 1;
    ans.push_back(node);
    for(int i=0;i<adj[node].size();i++){
        if(!visited[adj[node][i]]){
            dfs(adj[node][i],ans,visited,adj);
        }
    }
}
int main(){
    vector<vector<int>>adj = {{1,2,3},{},{4},{},{}};
    vector<int>ans;
    vector<bool>visited(adj.size(),0);
    int node = 0;
    dfs(node,ans,visited,adj);
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
}