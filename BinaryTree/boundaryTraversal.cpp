#include<bits/stdc++.h>
using namespace std;
class node{
public: 
    int val;
    node* left,*right;
    node(int val){
        this->val = val;
        left = right = NULL;
    }
};
node* construct(int arr[],int n){
    int i = 1;
    int j = 2;
    queue<node*>q;
    node* root = new node(arr[0]);
    q.push(root);
    
    while(i<n && q.size()>0){
        node* temp = q.front();
        q.pop();
        node* l;
        node* r;
        if(arr[i]!=INT_MIN) l = new node(arr[i]);
        else l = NULL;
        temp->left = l;
        if(j!=n && arr[j]!=INT_MIN) r = new node(arr[j]);
        else r = NULL;
        temp->right = r;
        if(l!=NULL)q.push(l);
        if(r!=NULL)q.push(r);
        i += 2;
        j += 2;
    }
    return root;
}
void leftboundary(node* root){
    if(root==NULL)return;
    if(root->left==NULL && root->right==NULL)return;
    cout << root->val << " ";
    leftboundary(root->left);
    if(root->left==NULL)leftboundary(root->right);
}
void boundary(node* root){
    if(root==NULL)return;
    if(root->left==NULL && root->right==NULL)cout << root->val << " ";
    boundary(root->left);
    boundary(root->right);
}
void rightboundary(node* root){
    if(root==NULL)return;
    if(root->left==NULL && root->right==NULL)return;
    rightboundary(root->right);
    if(root->right==NULL)root->left;
    cout << root->val << " "; 
}

int main(){
    int arr[] = {1,2,3,4,5,INT_MIN,6,7,INT_MIN,8,INT_MIN,9,10,11,INT_MIN,12,INT_MIN,13,INT_MIN,14,15,16,INT_MIN,17,18,INT_MIN,19,INT_MIN,INT_MIN,INT_MIN,20,21,22,23,INT_MIN,24,25,26,27,INT_MIN,INT_MIN,28,INT_MIN,INT_MIN};
    int n = sizeof(arr)/sizeof(arr[0]);
    node* root = construct(arr,n);
    // leftboundary(root);
    //boundary(root);
    rightboundary(root);
}

  