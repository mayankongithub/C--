#include<iostream>
#include<queue>
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
bool sym(Node* root){
    if(root==NULL)return true;
    if(root->left->val!=root->right->val)return false;
    
}
int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(2);
    Node* f = new Node(4);
    Node* g = new Node(3);
    
    a->left = b;
    b->left = c;
    b->right = d;
    a->right = e;
    e->right = f;
    b->right = g;
    cout << sym(a);
}