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
// #include<bits/stdc++.h>
// using namespace std;
// void dfs(int node,vector<int>&ans,vector<bool>&visited,vector<vector<int>>&adj){
//     visited[node] = 1;
//     ans.push_back(node);
//     for(int i=0;i<adj[node].size();i++){
//         if(!visited[adj[node][i]]){
//             dfs(adj[node][i],ans,visited,adj);
//         }
//     }
// }
// int main(){
//     vector<vector<int>>adj = {{1,2,3},{},{4},{},{}};
//     vector<int>ans;
//     vector<bool>visited(adj.size(),0);
//     int node = 0;
//     dfs(node,ans,visited,adj);
//     for(int i=0;i<ans.size();i++){
//         cout << ans[i] << " ";
//     }
// }
// #include<bits/stdc++.h>
// using namespace std;
// bool cycle(int node,int parent,vector<vector<int>>adj,vector<bool>&visited,vector<int>&ans){
//     visited[node] = 1;
//     for(int i=0;i<adj[node].size();i++){
//         if(parent == adj[node][i]){
//             continue;
//         }
//         if(visited[adj[node][i]]){
//             return 1;
//         }
//         if(cycle(adj[node][i],node,adj,visited,ans)){
//             return 1;
//         }
//     }
//     return 0;
// }
// int main(){
//     vector<vector<int>>adj = {{1}, {0, 2, 4}, {1, 3}, {2, 4}, {1, 3}};
//     vector<bool>visited(adj.size(),0);
//     vector<int>ans;
//     int node = 0;
//     int parent = -1;
//     bool flag = 0;
//     for(int i=0;i<adj.size();i++){
//         if(!visited[i]){
//             cycle(node,parent,adj,visited,ans);
//             flag = 1;
//             break;
//         }
//     }
//     flag==1 ? cout << true : cout << false;
// }
#include <bits/stdc++.h>
#include <sys/wait.h>  // For wait()
using namespace std;
int main() {
    int n = fork();  // Create a new process (fork())

    if (n < 0) {
        cout << "Fork failed!" << endl;
        return 1;
    }
    else if (n == 0) {  // Child process
        cout << "Child process" << endl;
    }
    else if (n > 0) {  // Parent process
        wait(NULL);  // Wait for the child process to finish
        cout << "Parent process";
    }

    return 0;
}
