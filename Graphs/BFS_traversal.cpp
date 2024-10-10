#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>adj = {{1,2,3},{},{4},{},{}};
    int v = 5;
    queue<int>q;
    vector<int>ans;
    vector<int>visited(v,0);
    q.push(0);
    visited[0] = 1;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        ans.push_back(node);
        for(int i=0;i<adj[node].size();i++){
            if(!visited[adj[node][i]]){
                visited[adj[node][i]] = 1;
                q.push(adj[node][i]);
            }
        }
    }
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }

}