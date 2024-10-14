// #include<iostream>
// #include<vector>
// #include<stack>
// using namespace std;
// void dfs(int node,vector<vector<int>>&adj,vector<int>&ans,vector<bool>&visited,stack<int>&st){
//     visited[node] = 1;
//     ans.push_back(node);
//     for(int i=0;i<adj[node].size();i++){
//         if(!visited[adj[node][i]]){
//             dfs(adj[node][i],adj,ans,visited,st);
//         }
//     }
//     st.push(node);
    
// }
// int main(){
//     vector<vector<int>>adj = {{1,2,3},{},{4},{},{}};
//     vector<int>ans;
//     vector<bool>visited(adj.size(),0);
//     int node = 0;
//     stack<int>st;
//      for(int i = 0; i < adj.size(); i++) {
//         if(!visited[i]) {
//             dfs(i, adj, ans,visited, st);
//         }
//     }
//     while(st.size()>0){
//         cout << st.top();
//         st.pop();
//     }
// }

//topical sort using BFS 
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>adj = {{1,2,3},{},{4},{},{}};
    queue<int>q;
    vector<int>ind(adj.size(),0);
    vector<int>ans;

    for(int i=0;i<adj.size();i++){
        for(int j=0;j<adj[i].size();j++){
            ind[adj[i][j]]++;
        }
    }
    for(int i=0;i<ind.size();i++){
        if(ind[i]==0){
            q.push(i);
        }
    }
    while(q.size()>0){
        int node = q.front();
        q.pop();
        ans.push_back(node);
        for(int i=0;i<adj[node].size();i++){
            ind[adj[node][i]]--;
            if(ind[adj[node][i]]==0){
                q.push(adj[node][i]);
            }
        }
    }
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
}