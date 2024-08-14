// #include<bits/stdc++.h>
// using namespace std;
// class Stack{
// public:
//     int *arr;
//     int size;
//     int top;

//     Stack(int s){
//         size = s;
//         arr = new int [s];
//         top = -1; 
//     }

//     void push(int val){
//         if(top==size-1 ){
//             cout << "stack over flow";
//             return;
//         }
//         top++;
//         arr[top] = val;
//     }
//     void pop(){
//         if(top==-1){
//             cout << "stack is empty";
//             return;
//         }
//         else{
//             cout << arr[top];
//             top--;
//             return;
//         }
//     }
//     int peek(){
//         if(top==-1){
//             cout << "stack is empty";
//             return 0;
//         }
//         return arr[top];
//     }
// };
// int main(){
//     Stack s(5);
//     s.push(0);
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     cout << s.peek() << endl;
//     s.pop();
//     cout << endl;
//     cout << s.peek();
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     stack<char>st;
//     char str[5] = {'h','e','l','l','o'};
//     for(int i=0;i<5;i++){
//         st.push(str[i]);
//     }
//     int j = 0;
//     while(st.size()!=0){
//         str[j] = st.top();
//         st.pop();
//         j++;
//     }
//     for(int i=0;i<5;i++){
//         cout << str[i] << " ";
//     }
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string a = "audf";
//     string b = "asdf";
//     if(a==b)cout << true;
//     else cout << false;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s = "(aa(bdc))p(de)";
//     stack<int>st;
//     vector<int>v(s.size(),0);
//     int count = 0;
//     for(int i=0;i<s.size();i++){
//         if(s[i]=='('){
//             count++;
//             st.push(count);
//             v[i] = count;
//         }
//         else if(s[i]==')'){
//             v[i] = st.top();
//             st.pop();
//         }
//     }
//     vector<int>n;
//     for(int i=0;i<v.size();i++){
//         if(v[i]!=0){
//             n.push_back(v[i]);
//         }
//     }
//     for(int i=0;i<n.size();i++){
//         cout << n[i] << " ";
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     stack<int>st;
//     stack<int>helper;
//     int arr[13] = {1,34,23,17,37,42,13,39,0,53,49,6,71};
//     int minn = INT_MAX;
//     for(int i=0;i<13;i++){
//         minn = min(minn,arr[i]);
//         st.push(arr[i]);
//         helper.push(minn);
//     }
//     while(helper.size()>0){
//         cout << helper.top() << " ";
//         helper.pop();
//     }
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string str = "i am mayank";
//     stringstream ss(str);
//     string word;
//     vector<string>v;
//     while(ss >> word){
//         v.push_back(word);
//     }
//     for(int i=0;i<v.size();i++){
//         cout << v[i] << " ";
//     }
// }
// #include<bits/stdc++.h>
// using namespace std;
// int pri(char ch){
//     if(ch=='-' || ch=='+')return 1;
//     return 2;
// }
// int solve(int a,int b,char ch){
//     if(ch=='-'){
//         return a - b;
//     }
//     else if(ch=='+'){
//         return a + b;
//     }
//     else if(ch=='/'){
//         return a/b;
//     }
//     else{
//         return a*b;
//     }
// }
// int main(){
//     string str = "42";
//     stack<int>val;
//     stack<char>op;
//     for(int i=0;i<str.size();i++){
//         if(isdigit(str[i])){
//             val.push(str[i]-48);
//         }
//         else{
//             if(op.empty()){
//                 op.push(str[i]);
//             }
//             else if(pri(op.top()) < pri(str[i])){
//                 op.push(str[i]);
//             }
//             else{
//                 while(op.size() > 0 && pri(op.top()) >= pri(str[i])){
//                     int val2 = val.top();
//                     val.pop();
//                     int val1 = val.top();
//                     val.pop();
//                     char ch = op.top();
//                     op.pop();
//                     int ans = solve(val1,val2,ch);
//                     val.push(ans);
//                 }
//                 op.push(str[i]);
//             }
//         }
//     }
//     while(op.size() > 0){
//         int val2 = val.top();
//         val.pop();
//         int val1 = val.top();
//         val.pop();
//         char ch = op.top();
//         op.pop();
//         int ans = solve(val1,val2,ch);
//         val.push(ans);
//     }
//     cout << val.top();
    

//     cout << endl << (2+6*4/8-3);
// }

// #include<bits/stdc++.h>
// using namespace std;
// int pri(char ch){
//     if(ch=='-' || ch=='+')return 1;
//     return 2;
// }
// string solve(string a,string b,char ch){
//     string f = "";
//     f.push_back(ch);
//     f += a;
//     f += b;
//     return f;
// }
// int main(){
//     string s = "7+9*4/8-3";
//     stack<string>st;
//     stack<char>op;
//     for(int i=0;i<s.size();i++){
//         if(isdigit(s[i])){
//             st.push(to_string(s[i]-48));
//         }
//         else{
//             if(op.size()==0){
//                 op.push(s[i]);
//             }
//             else if(pri(op.top()) < pri(s[i])){
//                 op.push(s[i]);
//             }
//             else{
//                 while(op.size()>0 && pri(op.top() >= pri(s[i]))){
//                     string val2 = st.top();
//                     st.pop();
//                     string val1 = st.top();
//                     st.pop();
//                     char ch = op.top();
//                     op.pop();
//                     string ans = solve(val1,val2,ch);
//                     st.push(ans);
//                 }
//                 op.push(s[i]);
//             }
//         }
//     }
//     while(op.size()>0){
//         string val2 = st.top();
//         st.pop();
//         string val1 = st.top();
//         st.pop();
//         char ch = op.top();
//         op.pop();
//         string ans = solve(val1,val2,ch);
//         st.push(ans);
//     }
//     cout << st.top();
// }

// #include<bits/stdc++.h>
// using namespace std;
// int pri(char ch){
//     if(ch=='-' || ch=='+')return 1;
//     return 2;
// }
// string solve(string a,string b,char ch){
//     string f = "";
//     f += a;
//     f += b;
//     f.push_back(ch);
//     return f;
// }
// int main(){
//     string s = "7+9*4/8-3";
//     stack<string>st;
//     stack<char>op;
//     for(int i=0;i<s.size();i++){
//         if(isdigit(s[i])){
//             st.push(to_string(s[i]-48));
//         }
//         else{
//             if(op.size()==0){
//                 op.push(s[i]);
//             }
//             else if(pri(op.top()) < pri(s[i])){
//                 op.push(s[i]);
//             }
//             else{
//                 while(op.size()>0 && pri(op.top()) >= pri(s[i])){
//                     string val2 = st.top();
//                     st.pop();
//                     string val1 = st.top();
//                     st.pop();
//                     char ch = op.top();
//                     op.pop();
//                     string ans = solve(val1,val2,ch);
//                     st.push(ans);
//                 }
//                 op.push(s[i]);
//             }
//         }
//     }
//     while(op.size()>0){
//         string val2 = st.top();
//         st.pop();
//         string val1 = st.top();
//         st.pop();
//         char ch = op.top();
//         op.pop();
//         string ans = solve(val1,val2,ch);
//         st.push(ans);
//     }
//     cout << st.top();
// }
//794*8/+3-



// #include<bits/stdc++.h>
// using namespace std;
// int pri(char ch){
//     if(ch=='-' || ch=='+')return 1;
//     return 2;
// }
// string solve(char ch,string a,string b){
//     string f = "";
    
//     f += a;
//     f.push_back(ch);
//     f += b;
//     return f;
// }
// int main(){
//     string s = "794*8/+3-";
//     stack<string>st;
//     for(int i=0;i<s.size();i++){
//         if(isdigit(s[i])){
//             st.push(to_string(s[i]-48));
//         }
//         else{
//             string val2 = st.top();
//             st.pop();
//             string val1 = st.top();
//             st.pop();
//             string ans = solve(s[i],val1,val2);
//             st.push(ans);
//         }
//     }
//     cout << st.top();
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     for(int i=2;i>=0;i--){
//         if(i%2!=0){
//             for(int j=2;j>=0;j--){
//                 cout << arr[i][j] << " ";
//             }
//             // cout << endl;
//         }
//         else{
//             for(int j=0;j<3;j++){
//                 cout << arr[i][j] << " ";
//             }
//             // cout << endl;
//         }
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     for(int j=0;j<3;j++){
//         if(j%2!=0){
//             for(int i=2;i>=0;i--){
//                 cout << arr[i][j] << " ";
//             }
//             // cout << endl;
//         }
//         else{
//             for(int i=0;i<3;i++){
//                 cout << arr[i][j] << " ";
//             }
//             // cout << endl;
//         }
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     for(int i=0;i<3;i++){
//         for(int j=0;j<i;j++){
//             swap(arr[i][j],arr[j][i]);
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3/2;j++){
//             swap(arr[i][j],arr[i][3-1-j]);
//         }
//     }
// // 1 2 3
// // 4 5 6
// // 7 8 9


//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout << arr[i][j] << " ";
//         } 
//         cout << endl;
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     // 1 2 3
//     // 4 5 6 => 1,2
//     // 7 8 9 => 2,2
//     int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     int mrow = 2;
//     int mcol = 2;
//     int minr = 0;
//     int minc = 0; 
//     for(int i=minr;i<3;i++){
//         cout << arr[minr][i] << " ";
//     }
//     minr++;
//     for(int i=minr;i<=mcol;i++){
//         cout << arr[i][3] << " ";
//     }
//     mcol--;
//     for(int j=mcol;j>=minc;j--){
//         cout << arr[mrow][j] << " ";
//     }
//     mrow--;

// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[] = {2,3,4,2,6,5,4,5,3};
//     int n = 9;
//     int area = 0;
//     int maxx = 0;
//     for(int i=0;i<9;i++){
//         int min_height = arr[i];
//         for(int j=i;j<9;j++){
//             min_height = min(min_height, arr[j]);
//             area = min_height*(j-i+1);
//             maxx = max(maxx,area);
//         }
        
//     }
//     cout << maxx;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     queue<int>q;
//     q.push(1);
//     q.push(13);
//     q.push(14);
//     q.push(15);
//     q.push(16);
//     int n = q.size();
//     while(n>0){
//         int temp = q.back();
//         cout << temp << " ";
//         q.pop();
//         q.push(temp);
//         n--;
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// class q{
// public:
//     int *arr;
//     int size;
//     int front;
//     int rear;

//     q(int n){
//         arr = new int [n];
//         front = -1;
//         rear = -1;
//         size = 0;
//     }
//     void push(int val){
//         if(size==0){
//             rear++;
//             arr[rear] = val;
//             front++;
//         }
//         else{
//             rear++;
//             arr[rear] = val;
//         }
//         size++;
//     }
//     int pop(){
//         if(size==0){
//             cout << "queue is empty!!";
//             return 0;
//         }
//         int temp = arr[front];
//         front++;
//         return temp;
//         size--;
//     }
//     int phela(){
//         if(front==-1){
//             cout << "Kuch bi ni h";
//             return 0;
//         }
//         int store = arr[front];
//         return store;
//     }

// };
// int main(){
//     q qq(5);
//     qq.push( 0);
//     qq.push(10);
//     qq.push(20);
//     qq.push(40);
//     qq.push(60);
//     // cout << qq.pop();
//     cout << qq.rear - qq.front+1 << endl;
//     cout << qq.phela();
// }

// #include<bits/stdc++.h>
// using namespace std;
// class node{
// public:
//     int val;
//     node* next;
//     node(int val){
//         this->val = val;
//         next = NULL;
//     }
// };
// class q{
// public:
//     node* front;
//     node* tail;
//     int size;
//     q(){
//         size = 0;
//         tail = NULL;
//         front = NULL;
//     }
//     void push(int val){
//         node* temp = new node(val);
//         if(size==0){
//             front = tail = temp;
//         }
//         else{
//             tail->next = temp; 
//             tail = temp;
//         }
//         size++;
//     }
//     int top(){
//         return front->val;
//     }
//     int back(){ 
//         return tail->val;
//     }
//     int pop(){
//         int temp = front->val;
//         front = front->next;
//         size--;
//         return temp;
//     }
//     int s(){
//         return size;
//     }
// };
// int main(){
//     q qq;
//     qq.push(10);
//     qq.push(20);
//     qq.push(30);
//     qq.push(40);
//     qq.push(50);
//     cout << qq.top() << endl << qq.back() << endl << qq.s();
// }
// #include<bits/stdc++.h>
// using namespace std;
// void display(queue<int>q){
//     int n = q.size();
//     while(n>0){
//         int temp = q.front();
//         cout <<temp << " ";
//         q.pop();
//         n--;
//     }
// }
// int main(){
//     queue<int>q;
//     stack<int>st;
//     int k = 2;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     q.push(5);
//     display(q);
    
//     //  2 , 1 , 3 , 4 , 5
//     for(int i=0;i<k;i++){
//         st.push(q.front());
//         q.pop();
//     }
//     int n = q.size();
//     for(int i=k+1;i<n;i++){
//         q.push(q.front());
//         q.pop();
//     }

//     while(st.size()>0){
//         q.push(st.top());
//         st.pop();
//     }


//     while(n>0){
//         st.push(q.front());
//         q.pop();
//         n--;
//     }
//      while(st.size()>0){
//         q.push(st.top());
//         st.pop();
//     }

//     cout << endl;
//     display(q);
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int k = 3;
//     int maxx = INT_MIN;
//     vector<int>v;
//     vector<int> arr = {0,-1,-2,3,4,-5,6,4,7,-8};
//     for(int i=0;i<arr.size()-2;i++){
//         maxx = INT_MIN;
//         for(int j=i;j<i+3;j++){
//             if(arr[j]<0)maxx = max(maxx,arr[j]);
//         }
//         if(maxx==INT_MIN)v.push_back(0);
//         else{
//             v.push_back(maxx);
//         }
//     }
//     for(int i=0;i<v.size();i++){
//         cout << v[i] << " ";
//     }
// }
// -1 , 3 , 4 , 4 , 6 , 7 , 7


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> v = {0,-1,-2,3,4,-5,6,4,7,-8};
//     queue<int>q;
//     vector<int>ans;
//     for(int i=0;i<v.size();i++){
//         if(v[i] < 0)q.push(i);
//     } 
//     int k = 3;
//     int i = 0;
//     while(i+k<=v.size()){
//         while(q.size() > 0 && q.front() < i){
//             q.pop();
//         }
//         if(q.size()==0 || q.front() >= i+k){
//             ans.push_back(0);
//         }
//         else{
//             ans.push_back(v[q.front()]);
//         }
//         i++;
//     }
//     for(int i=0;i<ans.size();i++){
//         cout << ans[i] << " ";
//     }

// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>v = {{2,3,5},{6,9,8},{4,1,1}};
    for(int i=0;i<v.size();i++){
        for(int j=0;j<i;j++){
            swap(v[i][j],v[j][i]);
        }
    }
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size()/2;j++){
            swap(v[i][j],v[i][v.size()-j-1]);
        }
    }


    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}