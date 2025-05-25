// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    queue<int>q;
//    q.push(1);
//    q.push(2);
//    q.push(3);
//    q.push(4);
//    q.push(5);
//    q.push(6);
//    q.push(7);
//    q.push(8);
//    stack<int>st;
//    int half = q.size()/2;
//    for(int i=1;i<=half;i++){
//         st.push(q.front());
//         q.pop();
//     }
//     while(st.size()>0){
//         q.push(st.top());
//         st.pop();
//     }
//     for(int i=1;i<=half;i++){
//         st.push(q.front());
//         q.pop();
//     }
//     while(st.size()>0){
//         q.push(st.top());
//         q.push(q.front());
//         q.pop();
//         st.pop();
//     }
//     stack<int>r;
//     while(q.size()>0){
//         r.push(q.front());
//         q.pop();
//     }
//     while(r.size()>0){
//         q.push(r.top());
//         r.pop();
//     }

//     int n = q.size();
//     while(n!=0){
//         cout << q.front() << " ";
//         q.push(q.front());
//         q.pop();
//         n--;
//     }
// }
// #include<bits/stdc++.h>
// using namespace std;
// void printsub(string ans,string s){
//     if(s==""){
//         cout << ans << endl;
//         return;
//     }
//     char ch = s[0];
//     printsub(ans+ch,s.substr(1));
//     printsub(ans,s.substr(1));
// }
// int main(){
//     string s = "abc";
//     printsub("",s);

// }
// #include<bits/stdc++.h>
// using namespace std;
// void sub(vector<int>&v,vector<int>ans,int i){
//     if(i==v.size()){
//         for(int ele : ans){
//             cout << ele << " ";
//         }
//         cout << endl;
//         return;
//     }
//     sub(v,ans,i+1);
//     ans.push_back(v[i]);
//     sub(v,ans,i+1);
// }
// int main(){
//     vector<int>v = {1,2,3};
//     vector<int>ans;
//     sub(v,ans,0);
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {1,2,3,4};
//     int n = 4;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             for(int k=i;k<=j;k++){
//                 cout << arr[k];
//             }
//             cout << endl;
//         }
//     }
// }
// #include<bits/stdc++.h>
// using namespace std;
// void subarray(int arr[],int idx,vector<int>v,int n){
//     if(idx==n){
//         for(int i=0;i<v.size();i++){
//             cout << v[i] << " ";
//         }
//         cout << endl;
//         return;
//     }
//     subarray(arr,idx+1,v,n);
    
//     if(v.size()==0){
//         v.push_back(arr[idx]);
//         subarray(arr,idx+1,v,n);
//     }
    
//     else if(v[v.size()-1] == arr[idx-1]){
//         v.push_back(arr[idx]);
//         subarray(arr,idx+1,v,n);
//     }
// }
// int main(){
//     int arr[] = {1,2,3,4};
//     int n = 4;
//     vector<int>v;
//     subarray(arr,0,v,n);
// }
// #include<iostream>
// using namespace std;
// bool palin(string str,int i,int j){
//     if(i>=j){
//         return true;
//     }
//     else if(str[i]==str[j]){
//         return palin(str,i+1,j-1);
//     }
//     return false;
// }
// int main(){
//     string str = "aba";
//     cout << (palin(str,0,str.length()-1) ? "Palin" : "Not");
// }
// #include<iostream>
// using namespace std;
// int gcd(int a,int b){
//     if(b==0){
//         return a;
//     }
//     return gcd(b,a%b);

// }
// int main(){
//     cout << gcd(23,45);
// }
// #include<iostream>
// using namespace std;
// void generate(int n,string ans){
//     if(ans.size()==n){
//         cout << ans << endl;
//         return;
//     }

//     generate(n, ans+'0');
//     if(ans.size()==0 || ans.back()=='0'){
//         generate(n,ans+'1');
//     }
// }
// int main(){
//     int n = 4;
//     generate(n,"");
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s = "cczazcc";
//     sort(s.rbegin(),s.rend());
//     cout << s;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int helper(int a,int b){
//     if(b==1)return a;
//     if(b%2==0){
//         int ans = helper(a,b/2);
//         return ans * ans;
//     }
//     else{
//         int ans = helper(a,b/2);
//         return ans * ans * ans;
//     }
    
// }
// int main(){
//    int a = 2;
//    int b = 3;
//    cout << helper(a,b);
// }
// #include<bits/stdc++.h>
// using namespace std;
// void helper(string original,string store,int i){
//     if(original.size()==i){
//         cout << store;
//         return;
//     }
//     if(original[i]=='a'){
//         helper(original,store,i+1);
//     }
//     else{
//         helper(original,store+original[i],i+1);
//     }
// }
// int main(){
//    string str = "mayank sharma";
//    string store = "";
//    helper(str,store,0);
// }
// #include<bits/stdc++.h>
// using namespace std;
// void subset(string original,string str,int i){
//     if(i==original.size()){
//         cout << str << " ";
//         return;
//     }
//     subset(original,str,i+1);
//     subset(original,str+original[i],i+1);
// }
// int main(){
//    string str = "abc";
//    subset(str,"",0);
// }
// #include <vector>
// #include <iostream>
// using namespace std;

// bool isvalid(vector<vector<char>>&board,int row,int col,char ch){
//     for(int i=0;i<9;i++){
//         if(board[row][i]==ch)return false;
//     }

//     for(int i=0;i<9;i++){
//         if(board[i][col]==ch)return false;
//     }
//     int srow = (row/3)*3;
//     int scol = (col/3)*3;

//     for(int i=srow;i<srow+3;i++){
//         for(int j=scol;j<scol+3;j++){
//             if(board[i][j]==ch)return false;
//         }
//     } 
//     return true;
// }
// int main() {
//     vector<vector<char>> board = {
//         {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
//         {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
//         {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
//         {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
//         {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
//         {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
//         {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
//         {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
//         {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
//     };
//     bool flag = true;
//     for(int i=0;i<9;i++){
//         for(int j=0;j<9;j++){
//             char ch = board[i][j];
//             if(ch!='.'){
//                 board[i][j] = '.';
//                 if(isvalid(board,i,j,ch)==false){
//                     flag = false;
//                     break;
//                 } 
//                 board[i][j] = ch;
//             }
            
//         }
//         if (!flag) break;
//     }
//     if(flag==true)cout << "VALID SUDOKU";
//     else{
//         cout << "NOT A VALID SUDOKU";
//     }
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    vector<int>v = {3,1,2,5,4,6,2,3}; 
//    stack<int>st;
//    int n = v.size();
//    int new_arr[n];
//    new_arr[n-1] = -1;
//    st.push(v[n-1]);
//    for(int i=n-2;i>=0;i--){
//         while(st.size()>0 && st.top()<v[i]){
//             st.pop();
//         }
//         if(st.size()==0)new_arr[i] = -1;
//         else{
//             new_arr[i] = st.top();
//         }
//         st.push(v[i]);
//    }
//     for(int i=0;i<n;i++){
//         cout << new_arr[i] << " ";
//     }
// } 
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int>v = {3,1,2,5,4,6,2,3}; 
//     stack<int>st;
//     int n = v.size();
//     int new_arr[n];
//     st.push(v[0]);
//     new_arr[0] = -1;
//     for(int i=1;i<n;i++){
//         while(st.size()>0 && st.top()<v[i]){
//             st.pop();
//         }
//         if(st.size()==0)new_arr[i] = -1;
//         else{
//             new_arr[i] = st.top();
//         }
//         st.push(v[i]);
//     }
//     for(int i=0;i<n;i++){
//         cout << new_arr[i] << " ";
//     }
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     queue<int>q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     q.push(5);
//     q.push(6);
//     q.push(7);
//     q.push(8);
//     // 1 2 3 4 5 6 7 8
//     // 5 6 7 8 4 3 2 1
//     // 4 3 2 1 
//     int n = q.size();
//     stack<int>st;
//     while(q.size()>n/2){
//         st.push(q.front());
//         q.pop();
//     }

//     while(st.size()>0){
//         int top = st.top();
//         st.pop();
//         q.push(top);
//     }
//     while(q.size()>n/2){
//         int top = q.front();
//         q.pop();
//         st.push(top);
//     }
//     while(st.size()>0){
//         int top = q.front();
//         q.pop();
//         q.push(st.top());
//         q.push(top);
//         st.pop();
//     }
//     while(q.size()>0){
//         int top = q.front();
//         q.pop();
//         st.push(top);
//     }
//     while(st.size()>0){
//         int top = st.top();
//         st.pop();
//         cout << top << " ";
//     }
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[] = {17,19,2,5,8,4,9,3,6};
//     int n = 9;
//     int k = 3;
//     int maxi = 0;
//     int sum = 0;
//     int i = 0;
//     while(i<=n-k){
//         sum = 0;
//         int j = i;
//         if(j<i)j=i;
//         while(j<i+k){
//             sum += arr[j];
//             j++;
//         }
//         maxi = max(maxi,sum);
//        if(j==i+k)sum = sum - arr[j-k-1] + arr[i+k-1];
//         i++;
//     }
//     cout << maxi;
// }

#include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[] = {17,19,2,5,8,4,9,3,6};
//     int n = 9;
//     int k = 3;
//     int sum = 0;
//     int i = 1;
//     for(int i=0;i<k;i++){
//         sum+=arr[i];
//     }
//     int maxi = sum;
//     int j = k;

//     while(j<n){
//         int currsum = sum + arr[j] - arr[i-1];
//         maxi = max(maxi,currsum);
//         i++;j++;
//         sum = currsum;
//     }
//     cout << maxi;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    string str = "anc";
//    cout << str[0] - '0';
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int arr[5] = {1,3,2,4,5};
//    vector<pair<int,int>>v(5);
//    for(int i=0;i<5;i++){
//       v[i] = {arr[i],i};
//    }
//    int count = 0;
//    sort(v.begin(),v.end());
//    for(int i=0;i<5;i++){
//       if(v[i].second==i)continue;
//       else{
//          count++;
//          swap(v[i],v[v[i].second]);
//          --i;
//       }
//    }
//    cout << count;
// }
// #include<bits/stdc++.h>
// using namespace std;
// class a{
//     private:
//     int age;
//     public:
//     a(int aa){
//         age = aa;
//     }
//     void getage(){
//         cout << age;
//     }
// };
// int main(){
//     a o(8);
//     o.getage();
// }
// #include<bits/stdc++.h>
// using namespace std;
// class s{
//     public:
//     int age;
// };
// int main(){
//     s *a = new s;
//     a->age = 1;
//     cout << a->age;
// }
// #include <bits/stdc++.h>
// using namespace std;

// void helper(int arr[], int idx) {
//     if (idx == 3) return;

//     for (int i = idx; i < 3; i++) { // Start swapping from idx
//         swap(arr[i], arr[idx]);
//         helper(arr, idx + 1);
//         // swap(arr[i], arr[idx]); // Swap back to restore original state
//     }
// }

// int main() {
//     int arr[] = {1, 2, 3};
//     // next_permutation(arr, arr + 3); // Generate next permutation
//     helper(arr, 0); 

//     for (int i = 0; i < 3; i++) {
//         cout << arr[i] << " ";
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// class student{
// public:
//     string name;
//     int roll_number;
//     int batch;
//     int age;
//     // student(string name,int roll_number,int batch,int age){
//     //     this->name = name;
//     //     this->roll_number = roll_number;
//     //     this->batch = batch;
//     //     this->age = age;
//     // }
//     inline student(string name,int r,int b,int a) : name(name),roll_number(r),batch(b),age(a){

//     }
//     ~student(){

//     }
// };
// int main(){
//     student* a = new student("swati",22909,5,21);
//     student s("mayank",22909,5,21);
//     cout << s.name << " " << s.roll_number << " " << s.batch << " " << s.age << endl; 
//     cout << a->name << " " << a->roll_number << " " << a->batch << " " << a->age; 
// }


// #include<bits/stdc++.h>
// using namespace std;
// class bank{
// public:
//     static int num;
//     bank(){
//         num++;
//     }
// };
// int bank :: num = 0;
// int main(){
//     bank a;
//     bank b;
//     cout << bank::num;
// }

// #include<bits/stdc++.h>
// using namespace std;
// class human{
// public:
//     string name;
//     human(string name){
//         this->name = name;
//     }
// };
// class student : public human{
// public:
//     int age;
//     student(int age,string name):human(name){
//         // this->name = name;
//         this->age = age;
//     }
// };
// int main(){
//     student s(3,"as");
//     cout << s.name << " " <<  s.age << " ";
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string ans = "abc";
//     ans.erase(0,1);
//     vector<int>v = {1,2,3,4,5,6};  //500 //6
//     v.erase(v.begin()+5);
//     // auto loda =  find(v.begin(),v.end(),6);
//     // v.erase(loda);
//     for(int i=0;i<v.size();i++){
//         cout << v[i] << " ";
//     }
//     // cout << v.size() << " ";

//     // cout << endl;
//     // cout << ans;
//     // cout << '1' + 1 << endl;
//     // cout << 1 + '10';

// }


// interview


// #include<bits/stdc++.h>
// using namespace std;
// class animal{
// public:
//     string name;
//     animal(){

//     }
//     animal(string name){
//         this->name = name;
//     }
//     virtual void display(){
        
//     }
// };
// class dog : public animal{
// public:
//     int number_of_legs;
//     dog(string name,int number_of_legs):animal(name){
//         this->number_of_legs = number_of_legs;
//     }
//     void display(){
//         cout << name << endl << number_of_legs;
//     }
// };
// int main(){
//     animal *p;
//     p = new dog("jnjnu",4);
//     p->display();
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    string str = "";
//    int i = 0;
//    int j = str.size()-1;
//    while(i<j){
//     swap(str[i],str[j]);
//     i++;
//     j--;
// }
//     cout << str;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int>arr = {1,2,4,4,4,4,4,4,4,3,3,3,3,3,3,3,1,1,1,1,1,1,3,4,1};
//     set<pair<int,int>>st;
//     for(int i=0;i<arr.size();i++){
//         st.insert({arr[i],i});
//     }
//     for(auto x : st){
//         cout << x.first << " " << x.second << endl << " ";
//     }
//     cout << st.size();
// }
// #include<bits/stdc++.h>
// #include<thread>
// using namespace std;
// int task(){
//     int count = 0;
//     for(int i=1;i<=1000000;i++){
//         count += i;
//     }
//     return count;
// }
// int main(){
//     int result1, result2;
//     thread t1([&result1]() {
//         result1 = task();
//     });
//     thread t2([&result2]() {
//         result2 = task(); 
//     });
//     t1.join();
//     t2.join();
// }


// friend function
// #include<bits/stdc++.h>
// using namespace std;
// class a{
// private:
//     string name;
// public:
//     a(string name){
//         this->name = name;
//     }
//     friend string print(a s);
// };
// string print(a s){
//     return s.name;
// }
// int main(){
//     a m("mayank");
//     cout << print(m);
// }


// function override
// #include<bits/stdc++.h>
// using namespace std;
// class a{
// public:
//     string name;
//     a(string name){
//         this->name = name;
//     }
//     virtual void display(){
//         cout << name;
//     }
// };
// class b : public a{
//     public:
//         b(string name):a(name){
            
//         }
//         void display(){
//             cout << name;
//         }
//     };
// int main(){
//     a m("mayank");
//     b n("sharma");
//     n.display();
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int>v = {4,3,2,1};
//     for(int i=0;i<v.size();i++){
//         for(int j=i;j<v.size();j++){
//             if(v[i]>v[j]){
//                 swap(v[i],v[j]);
//             }
//         }
//     }
//     for(int i=0;i<v.size();i++){
//         cout << v[i];
//     }
// }

#include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int>v = {1,2,3,4,5,6,7,8,9};
//     int start = 0;
//     int high = v.size() - 1;
//     while(start<high){
//         int mid = start + high / 2;
//         if(v[mid]==4){
//             cout << "yes present";
//             break;
//         }
//         else if(v[mid]>4){
//             high = mid - 1;
//         }
//         else if(v[mid]<4){
//             start = mid + 1;
//         }

//     }
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<vector<int>> arr = {{1,2,3,16},
//                     {4,5,6,12},
//                     {7,8,9,15}};
    
//     // for(int i=0;i<arr.size();i++){
//         reverse(arr.begin(),arr.end());    
//     // }
//     for(int i=0;i<arr.size();i++){
//         for(int j=0;j<arr[0].size();j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// class Node{
// public:
//     int val;
//     Node* left,*right;
//     Node(int val){
//         this->val = val;
//         left = right = NULL;
//     }
// };
// Node* construct(vector<int>&arr,int n){
//     int i = 1;
//     int j = 2;
//     queue<Node*>q;
//     Node* root = new Node(arr[0]);
//     q.push(root);
//     while(i<n && q.size()>0){
//         Node* temp = q.front();
//         q.pop();
//         Node* l;
//         Node* r;
//         if(arr[i]!=INT_MIN){
//             l = new Node(arr[i]);
//         }
//         else l = NULL;
//         temp->left = l;
//         if(j!=n && arr[j]!=INT_MIN){
//             r = new Node(arr[j]);
//         }
//         else r = NULL;
//         temp->right = r;
//         if(l)q.push(l);
//         if(r)q.push(r);
//         i += 2;
//         j += 2;
//     }
//     return root;
// }
// bool check(Node* root,int idx){
//     if(!root)return true;
//     bool flag = false;
//     queue<Node*>q;
//     q.push(root);
//     while(q.size()>0){
//         Node* temp = q.front();
//         q.pop();
//         if(temp->left){
//             if(flag)return false;
//             q.push(temp->left);
//         }
//         if(temp->right){
//             if(flag)return false;
//             q.push(temp->right);
//         }
//         else{
//             flag = true;
//         }
//     }
//     return true;
// }
// bool maxheap(Node* root){
//     if(!root)return true;
//     if(!root->left && !root->right){
//         return true;
//     }
//     if(root->left && root->right){
//         if(root->val >= root->left->val && root->val >= root->right->val){
//             return max(maxheap(root->left),maxheap(root->right));
//         }
//         return false;
//     }
//     if(root->left && !root->right){
//         if(root->val >= root->left->val){
//             return maxheap(root->left);
//         }
//         return false;
//     }

//     if(root->right && !root->left){
//         return false;
//     }
//     return true;
// }
// int main(){
//     vector<int>v = {10, 9, 8, 7, 6, 5, 4};
//     int n = v.size();
//     Node* root = construct(v,n);
//     cout << check(root,0) << endl << maxheap(root);
// }


#include<bits/stdc++.h>
using namespace std;
int main(){
    string a = "a";
    cout << typeid(a).name();
}