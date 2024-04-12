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
// void display(Node* root,int& sum){
//     if(root==NULL)return;
//      display(root->left,sum);
//     // if(root->val>1 && root->val<5){
//     //     sum+=root->val;
//     // }
//     display(root->right,sum);
//     if(root->val>1 && root->val<5){
//         sum+=root->val;
//     }
// }
// int main(){
//     Node* a = new Node(1);
//     Node* b = new Node(2);
//     Node* c = new Node(3);
//     Node* d = new Node(5);
    
//     a->left = b;
//     b->right = d;
//     a->right = c;
//     int sum=0;
//      display(a,sum);
//      cout<<sum;
// }

// PRE ORDEDR USING ITERATIVE METHOD
// #include<iostream>
// #include<queue>
// #include<string>
// #include<stack>
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
// vector<int> pre(Node* root){
//     vector<int>v;
//     stack<Node*>st;
//     st.push(root);
//     while(st.size()>0){
//         Node* temp = st.top();
//         st.pop();
//         v.push_back(temp->val);
//         if(temp->right!=NULL)st.push(temp->right);
//         if(temp->left!=NULL)st.push(temp->left);
//     }
//     return v;
// }
// int main(){
//     Node* a = new Node(1);
//     Node* b = new Node(2);
//     Node* c = new Node(3);
//     Node* d = new Node(5);
    
//     a->left = b;
//     b->right = d;
//     a->right = c;
 
// }
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str[] = {"495","491","40"};
//     int sum = 0;
//     for(int i=0;i<3;i++){
//         int c = stoi(str[i]);
//         sum += c;
//     }
//     cout << sum;
// }

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
//     display(root->left,ans,s+a);
//     display(root->right,ans,s+a);
// }

// int sumNumbers(Node* root){
//     vector<string>ans;
//     string s= "";
//     display(root,ans,s);
//     int sum = 0;
//     int size = ans.size();
//     for(int i=0;i<size;i++){
//         int c = stoi(ans[i]);
//         sum += c;
//     }
//     return sum;
// }
//  int add(vector<string>ans,int& sum){
//     int size = ans.size();
//     for(int i=0;i<size;i++){
//         int c = stoi(ans[i]);
//         sum += c;
//     }
//     return sum;
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
//     cout << endl;
//     int sum = 0;
//     cout << add(ans,sum);
// }
#include<iostream>
#include<queue>
#include<bits/stdc++.h>
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
node* construct(int arr[],int n){
    int i = 1;
    int j = 2;
    queue<node*>q;
    node* root = new node(arr[0]);
    q.push(root);
    
    while(i<n && q.size()>0){
        node* temp = q.front();
        q.pop();
        node* l;
        node* r;
        if(arr[i]!=INT_MIN) l = new node(arr[i]);
        else l = NULL;
        temp->left = l;
        if(j!=n && arr[j]!=INT_MIN) r = new node(arr[j]);
        else r = NULL;
        temp->right = r;
        if(l!=NULL)q.push(l);
        if(r!=NULL)q.push(r);
        i += 2;
        j += 2;
    }
    return root;
}
void leftboundary(node* root){
    if(root==NULL)return;
    if(root->left==NULL && root->right==NULL)return;
    cout << root->val << " ";
    leftboundary(root->left);
    if(root->left==NULL)leftboundary(root->right);
}
void boundary(node* root){
    if(root==NULL)return;
    if(root->left==NULL && root->right==NULL)cout << root->val << " ";
    boundary(root->left);
    boundary(root->right);
}
void rightboundary(node* root){
    if(root==NULL)return;
    if(root->left==NULL && root->right==NULL)return;
    rightboundary(root->right);
    if(root->right==NULL)root->left;
    cout << root->val << " "; 
}

int main(){
    int arr[] = {1,2,3,4,5,INT_MIN,6,7,INT_MIN,8,INT_MIN,9,10,11,INT_MIN,12,INT_MIN,13,INT_MIN,14,15,16,INT_MIN,17,18,INT_MIN,19,INT_MIN,INT_MIN,INT_MIN,20,21,22,23,INT_MIN,24,25,26,27,INT_MIN,INT_MIN,28,INT_MIN,INT_MIN};
    int n = sizeof(arr)/sizeof(arr[0]);
    node* root = construct(arr,n);
    leftboundary(root);
    //boundary(root);
    //rightboundary(root);
}