#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int val;
    node* left;
    node* right;
    node(int val){
        this->val = val;
        left = right = NULL;
    }
};
int main(){
    node* a = new node(1);
    node* b = new node(2);
    node* c = new node(3);
    node* d = new node(4);
    node* e = new node(5);
    node* f = new node(6);
    node* g = new node(7);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    vector<int>v;
    stack<node*>st;
    node* root = a;
    while(st.size() > 0 || root!=NULL){
        if(root){
            st.push(root);
            root = root->left;
        }
        else{
            node* temp = st.top();
            st.pop();
            v.push_back(temp->val);
            root = temp->right;
        }
    }
    for(int x : v){
        cout << x << " ";
    }

}