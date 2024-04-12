#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node* left,*right;
    Node(int val){
        this->val = val;
        left = right = NULL;
    }
};
Node* contruct(int arr[],int n){
    int i = 1;
    int j = 2;
    queue<Node*>q;
    Node* root = new Node(arr[0]);
    q.push(root);
    
    while(i<n && q.size()>0){
        Node* temp = q.front();
        q.pop();
        Node* l;
        Node* r;
        if(arr[i]!=INT_MIN) l = new Node(arr[i]);
        else l = NULL;
        temp->left = l;
        if(j!=n && arr[j]!=INT_MIN) r = new Node(arr[j]);
        else r = NULL;
        temp->right = r;
        if(l!=NULL)q.push(l);
        if(r!=NULL)q.push(r);
        i += 2;
        j += 2;
    }
    return root;
}
void display(Node* root){
    if(root==NULL)return;
    cout << root->val << " ";
    display(root->left);
    display(root->right);
}
int main(){
    int arr[] = {1,2,3,4,5,6,INT_MIN,INT_MIN,INT_MIN,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node* store = contruct(arr,n);
    display(store);
}