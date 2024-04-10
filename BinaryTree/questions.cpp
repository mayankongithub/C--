// // PRINT THE PATH OF A BINARY TREE
// #include<iostream>
// #include<queue>
// #include<string>
// #include<vector>
// using namespace std;
// class Node{
// public:
//     int val;
//     Node* left;
//     Node* right;
//     Node(int val){
//         this->val = val;
//         left = NULL;
//         right = NULL;
//     }
// };
// void display(Node* root,vector<string>&ans,string s){
//     if(root==NULL)return;
//     string a = to_string(root->val);
//     if(root->left==NULL && root->right==NULL){
//         s += a;
//         ans.push_back(s);
//         return;
//     }
//     display(root->left,ans,s+a+"->");
//     display(root->right,ans,s+a+"->");
// }
// int main(){
//     Node* a = new Node(1);
//     Node* b = new Node(2);
//     Node* c = new Node(3);
//     Node* d = new Node(5);
    
//     a->left = b;
//     b->right = d;
//     a->right = c;
//     vector<string>ans;
//     display(a,ans,"");
//     for(int i=0;i<ans.size();i++){
//         cout << ans[i] << " ";
//     }
// }


// PRINT THE PATH OF A BINARY TREE
#include<iostream>
#include<queue>
#include<string>
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
void display(Node* root,int& sum){
    if(root==NULL)return;
     display(root->left,sum);
    // if(root->val>1 && root->val<5){
    //     sum+=root->val;
    // }
    display(root->right,sum);
    if(root->val>1 && root->val<5){
        sum+=root->val;
    }
}
int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(5);
    
    a->left = b;
    b->right = d;
    a->right = c;
    int sum=0;
     display(a,sum);
     cout<<sum;
}