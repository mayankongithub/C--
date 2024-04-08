// #include<iostream>
// #include<queue>
// using namespace std;
// class node{
// public:
//     int val;
//     node* left , *right;
//     node(int val){
//         this->val = val;
//         left = right = NULL;
//     }

// };
// int main(){
//     int x;
//     cout << "Enter the root value : ";
//     cin >> x;
//     queue<node*>q;
//     node* root = new node(x);
//     q.push(root);
//     while(!q.empty()){
//         node* temp = q.front();
//         q.pop();
//         int first;
//         cout << "Enter the left value of " << temp->val << " : ";
//         cin >> first;
//         if(first!=-1){
//             temp->left = new node(first);
//             q.push(temp->left);
//         }
//         int second;
//         cout << "Enter the right value of " << temp->val << " : ";
//         cin >> second;
//         if(second!=-1){
//             temp->right = new node(second);
//             q.push(temp->right);
//         }
//     }
// }

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
vector<vector<int>> level(Node* root){
    vector<vector<int>> ans;
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
    level(a);
    for(int i=0;i<)
    //pre(a);
}
