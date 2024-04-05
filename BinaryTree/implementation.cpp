#include<iostream>
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
int sum(Node* root){
    if(root==NULL)return 0;
    return root->val + sum(root->left) + sum(root->right);
}
int size(Node* root){
    if(root==NULL)return 0;
    return 1 + size(root->left) + size(root->right); 
}
void display(Node* root){
    if(root==NULL)return;
    cout << root->val << " ";
    display(root->left);
    display(root->right);
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    Node* f = new Node(60);
    Node* g = new Node(70);
    a->left = b;
    b->left = d;
    b->right = e;
    a->right = c;
    c->right = g;
    c->left = f;
    display(a);
    cout << endl;
    cout << sum(a);
    cout << endl;
    cout << size(a);
}