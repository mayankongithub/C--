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


// PRINT THE SUM IN AN RANGE
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

// PRINT THE PATH OF BINARY TREE
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
// void path(Node* root,string s,vector<string>&ans){
//     if(root==NULL)return;
//     string a = to_string(root->val);
//     if(root->left==NULL && root->right==NULL){
//         s+=a;
//         ans.push_back(s);
//         return;
//     }
//     path(root->left,s+a,ans);
//     path(root->right,s+a,ans);
// }
// int main(){
//     Node* a = new Node(1);
//     Node* b = new Node(2);
//     Node* c = new Node(3);
//     Node* d = new Node(5);
    
//     a->left = b;
//     b->right = d;
//     a->right = c;
//     string s = "";
//     vector<string>ans;
//     path(a,s,ans);
//     for(int i=0;i<ans.size();i++){
//         cout << ans[i] << " ";
//     }
// }
//          1
//      2       3
//          5

// #include<iostream>
// #include<queue>
// #include <bits/stdc++.h>
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
// void reverse(vector<int>&level){
//     reverse(level.begin(),level.end());
// }
// vector<vector<int>> level(Node* root,vector<vector<int>> &ans){
//     if(root==NULL){
//         return ans;
//     }
//     queue<Node*>q;
//     q.push(root);
//     int r = 0;
//     while(!q.empty()){
//         int size = q.size();
//         vector<int>level;
//         for(int i=0;i<size;i++){
//             Node* node = q.front();
//             q.pop();
//             if(node->left!=NULL)q.push(node->left);
//             if(node->right!=NULL)q.push(node->right);
//             level.push_back(node->val);
//         }
//         if(r%2!=0){
//             reverse(level);
//             ans.push_back(level);
//             r++;
//         }
//         else{
//             ans.push_back(level);
//             r++;
//         }
//     }
//     return ans;
// }
// int main(){
//     Node* a = new Node(3);
//     Node* b = new Node(9);
//     Node* c = new Node(20);
//     Node* d = new Node(15);
//     Node* e = new Node(7);
    
//     a->left = b;
//     a->right = c;
//     c->left = d;
//     c->right = e;

    
//     vector<vector<int>> ans;
//     level(a,ans);
//     for(int i=0;i<ans.size();i++){
//         for(int j=0;j<ans[i].size();j++){
//             cout << ans[i][j] << " ";
//         }
//     }
// }
//          1
//     2        
//          5


// #include<iostream>
// #include<queue>
// #include <bits/stdc++.h>
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
// vector<vector<int>> level(Node* root,vector<vector<int>> &ans,int i){
//     if(root==NULL){
//         return ans;
//     }
//     level(root->left,ans,i+1);
//     level(root->right,ans,i+1);
//     if(i==2){
//         i++;
//         queue<Node*>q;
//         q.push(root);
//         int r = 0;
//         while(!q.empty()){
//             int size = q.size();
//             vector<int>level;
//             for(int i=0;i<size;i++){
//                 Node* node = q.front();
//                 q.pop();
//                 if(node->left!=NULL)q.push(node->left);
//                 if(node->right!=NULL)q.push(node->right);
//                 level.push_back(node->val);
//             }
//             ans.push_back(level);
//         }
//         return ans;
//     }
//     return ans;
// }
// int main(){
//     Node* a = new Node(3);
//     Node* b = new Node(9);
//     Node* c = new Node(20);
//     Node* d = new Node(15);
//     Node* e = new Node(7);
    
//     a->left = b;
//     a->right = c;
//     c->left = d;
//     c->right = e;

    
//     vector<vector<int>> ans;
//     level(a,ans,0);
//     for(int i=0;i<ans.size();i++){
//         for(int j=0;j<ans[i].size();j++){
//             cout << ans[i][j] << " ";
//         }
//     }
// }

// #include<iostream>
// #include<queue>
// #include <bits/stdc++.h>
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
// void leftside(Node* root,vector<int>&v){
//     if(root==NULL)return;
//     v.push_back(root->val);
//     leftside(root->left,v);
// }
// int main(){
//     Node* a = new Node(3);
//     Node* b = new Node(9);
//     Node* c = new Node(20);
//     Node* d = new Node(15);
//     Node* e = new Node(7);
    
//     a->left = b;
//     a->right = c;
//     c->left = d;
//     c->right = e;

    
//     vector<int> v;
//     leftside(a,v);
//     for(int i=0;i<v.size();i++){
//         cout << v[i] << " ";
//     }
// }
// #include<bits/stdc++.h>
// using namespace std;
// class node{
// public: 
//     int val;
//     node* left,*right;
//     node(int val){
//         this->val = val;
//         left = right = NULL;
//     }
// };
// node* construct(int arr[],int n){
//     int i = 1;
//     int j = 2;
//     queue<node*>q;
//     node* root = new node(arr[0]);
//     q.push(root);
    
//     while(i<n && q.size()>0){
//         node* temp = q.front();
//         q.pop();
//         node* l;
//         node* r;
//         if(arr[i]!=INT_MIN) l = new node(arr[i]);
//         else l = NULL;
//         temp->left = l;
//         if(j!=n && arr[j]!=INT_MIN) r = new node(arr[j]);
//         else r = NULL;
//         temp->right = r;
//         if(l!=NULL)q.push(l);
//         if(r!=NULL)q.push(r);
//         i += 2;
//         j += 2;
//     }
//     return root;
// }
// void leftboundary(node* root){
//     if(root==NULL)return;
//     if(root->left==NULL && root->right==NULL)return;
//     cout << root->val << " ";
//     leftboundary(root->left);
//     if(root->left==NULL)leftboundary(root->right);
// }
// void boundary(node* root){
//     if(root==NULL)return;
//     if(root->left==NULL && root->right==NULL)cout << root->val << " ";
//     boundary(root->left);
//     boundary(root->right);
// }
// void rightboundary(node* root){
//     if(root==NULL)return;
//     if(root->left==NULL && root->right==NULL)return;
//     rightboundary(root->right);
//     if(root->right==NULL)root->left;
//     cout << root->val << " "; 
// }

// int main(){
//     int arr[] = {1,2,3,4,5,INT_MIN,6,7,INT_MIN,8,INT_MIN,9,10,11,INT_MIN,12,INT_MIN,13,INT_MIN,14,15,16,INT_MIN,17,18,INT_MIN,19,INT_MIN,INT_MIN,INT_MIN,20,21,22,23,INT_MIN,24,25,26,27,INT_MIN,INT_MIN,28,INT_MIN,INT_MIN};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     node* root = construct(arr,n);
//     leftboundary(root);
//     //boundary(root);
//     //rightboundary(root);
// }
// #include<iostream>
// #include<vector>
// #include<string>
// #include<bits/stdc++.h>
// using namespace std;

// int mini(vector<int>&nums){
//     int miin = INT_MAX;
//     int idx = -1;
//     for(int i=0;i<nums.size();i++){
//         if(nums[i]<miin){
//             idx = i;
//             miin = nums[i];
//         }
//     }
//     nums.erase(nums.begin() + idx); 
//     return miin;
// }
// int main(){
//     vector<int>nums;
//     nums.push_back(5);
//     nums.push_back(4);
//     nums.push_back(2);
//     nums.push_back(3);
//     int alice, bob;
//     vector<int>v;
//     for(int i=0;i<nums.size();i++){
//         alice = mini(nums);
//             // nums.erase(alice);
//         bob = mini(nums);
//             // nums.erase(bob);
//         v.push_back(bob);
//         v.push_back(alice);
//     }
//     for(int i=0;i<v.size();i++){
//         cout << v[i] << " ";
//     }
    
// }

// #include<bits/stdc++.h>
// using namespace std;
// int counting(char ch,string s){
//     int count = 0;
//     for(int i=0;i<s.size();i++){
//         if(ch==s[i]){
//             count++;
//         }
//     }
//     return count;
// }
// int main(){
//     string stones = "cba";
//     string jewels = "bcd";
//     int sum = 0;
//     int j = 0;
//     // sort(stones.begin(),stones.end());
//     // sort(jewels.begin(),jewels.end());
//     // for(int i=0;i<stones.size();i++){
//     //     if(jewels[j]==stones[i]){
//     //         // char send = jewel[j]
//     //         sum += counting(jewels[j],stones);
//     //     }
//     //     j++;
//     // }


//     int i =0;
//     int n = stones.size();
//     while(i<n){
//         if(jewels[j]==stones[i]){
//             sum += counting(jewels[j],stones);
//             i++;
//             j++;
//         }
//     }
//     cout << sum;
// }

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// class node{
// public:
//     int val;
//     node* left;
//     node* right;
//     node(int val){
//         right = NULL;
//         left = NULL;
//         this->val = val;
//     }
// };
// void helper(node* root,int k,vector<int>&v){
//     if(root==NULL)return;
//     int n = 1;
//     queue<node*>q;
//     q.push(root);
//     while(!q.empty()){
//         int size = q.size();
//         for(int i=0;i<size;i++){
//             node* temp = q.front();
//             q.pop();
//             if(temp->left)q.push(temp->left);
//             if(temp->right)q.push(temp->right);
//             if(n==k){
//                 v.push_back(temp->val);
//             }
//         }
//         n++;
//     }
// }
// int main(){
//     node* a = new node(1);
//     node* b = new node(7);
//     node* c = new node(9);
//     node* d = new node(2);
//     node* e = new node(6);
//     node* f = new node(9);
//     node* g = new node(5);
//     node* h = new node(11);
//     node* i = new node(5);
//     a->left = b;
//     a->right = c;
//     b->left = d;
//     b->right = e;
//     e->left = d;
//     e->right = h;
//     c->right = f;
//     f->left = i;
//     int k = 3;
//     vector<int>v;
//     helper(a,k,v);
//     for(int i=0;i<v.size();i++){
//         cout << v[i] << " ";
//     }
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n = 28;
//     int p = sqrt(n);
//     if(p*p==n){
//         cout << "odd";
//     }
//     else cout << "even";
// }

// check whether number of factor of n is exactly 3 or not without using loop
