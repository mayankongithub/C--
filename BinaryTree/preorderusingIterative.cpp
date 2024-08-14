#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int val;
    node* left;
    node* right;
    node(int val){
        right = NULL;
        left = NULL;
        this->val = val;
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
    st.push(a);
    while(!st.empty()){
        int size = st.size();
        for(int i=0;i<size;i++){
            node* temp = st.top();
            st.pop();
            if(temp->right) st.push(temp->right);
            if(temp->left) st.push(temp->left); 
            v.push_back(temp->val);
        }
    }
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
}