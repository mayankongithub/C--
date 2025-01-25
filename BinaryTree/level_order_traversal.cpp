#include<iostream>
#include<queue>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        left = NULL;
        right = NULL;
    }
};
void change(vector<int>&v){
    reverse(v.begin(),v.end());
}
vector<vector<int>> level(Node* root,vector<vector<int>> &ans){
    if(root==NULL){
        return ans;
    }
    queue<Node*>q;
    q.push(root); 
    while(!q.empty()){
        int size = q.size();
        vector<int>level;
        for(int i=0;i<size;i++){
            Node* node = q.front();
            q.pop();
            if(node->left!=NULL)q.push(node->left);
            if(node->right!=NULL)q.push(node->right);
            level.push_back(node->val);
        }
        ans.push_back(level);
    }
    return ans;
}
int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
    Node* h = new Node(8);
    
    a->left = b;
    b->left = d;
    b->right = e;
    e->left = f;
    e->right = g;
    a->right = c;
    c->right = h;
    
    vector<vector<int>> ans;
    level(a,ans);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout << ans[i][j] << " ";
        }
    }
}
