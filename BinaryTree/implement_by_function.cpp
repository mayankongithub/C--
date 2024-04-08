#include<iostream>
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
node* binary(){
    int x;
    cin >> x;
    if(x==-1){
        return NULL;
    }
    node* temp = new node(x);
    cout << "Enter the left side of " << x << " : ";
    temp->left = binary();

    cout << "Enter the right side of " << x << " : ";
    temp->right = binary();
    return temp;
}
int main(){
    node* root;
    cout << "Enter the root value : ";
    root = binary();
}