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
void pre(Node* root){
    if(root==NULL)return;
    cout << root->val << " ";
    pre(root->left);
    pre(root->right);
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
    Node* i = new Node(9);
    Node* j = new Node(10);
    a->left = b;
    b->left = c;
    b->right = f;
    c->left = d;
    c->right = e;
    a->right = g;
    g->right = h;
    h->left = i;
    h->right = j;
    display(a);
    cout << endl;
    cout << sum(a);
    cout << endl;
    cout << size(a);
    //pre(a);
}