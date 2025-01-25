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


#include<bits/stdc++.h>
using namespace std;
int main(){
   string str = "anc";
   cout << str[0] - '0';
}