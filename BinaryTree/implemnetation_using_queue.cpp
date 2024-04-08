#include<iostream>
#include<queue>
using namespace std;
class node{
public:
    int val;
    node* left , *right;
    node(int val){
        this->val = val;
        left = right = NULL;
    }

};
int main(){
    int x;
    cout << "Enter the root value : ";
    cin >> x;
    queue<node*>q;
    node* root = new node(x);
    q.push(root);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        int first;
        cout << "Enter the left value of " << temp->val << " : ";
        cin >> first;
        if(first!=-1){
            temp->left = new node(first);
            q.push(temp->left);
        }
        int second;
        cout << "Enter the right value of " << temp->val << " : ";
        cin >> second;
        if(second!=-1){
            temp->right = new node(second);
            q.push(temp->right);
        }
    }
}
