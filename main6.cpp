// #include<bits/stdc++.h>
// using namespace std;
// class node{
// public:
//     int val;
//     node * next;
//     node(int val){
//         this->val = val;
//         this-> next = NULL;
//     }

// };
// int main(){
//    node* a = new node(10);
//    node* b = new node(20);
//    node* c = new node(30);
//    a->next = b;
//    b->next = c;

//    node* temp = a;
//    while(temp!=NULL){
//     cout << temp->val << " ";
//     temp = temp->next;
//    }
// }
// #include<bits/stdc++.h>
// using namespace std;
// class node{
// public:
//     int val;
//     node* next;
//     node(int val){
//         this->val = val;
//         this-> next = NULL;
//     }
// };
// void display(node * head){
//     if(head==NULL) return;
//     cout << head->val << " ";
//     display(head->next);
// }
// void insert(int val,node* head){
//     node* temp = head;
//     node* temp2 = new node(val);
//     while(temp){
//         temp->next = head;
//         head = temp;
//         temp = temp->next;
//     }
// }
// int main(){
//    node* a = new node(10);
//    node* b = new node(20);
//    node* c = new node(30);
//    node* d = new node(40);
//    a->next = b;
//    b->next = c;
//    c->next = d;
//    display(a);
//    insert(70,a);
//    display(a);
// }
// #include<bits/stdc++.h>
// using namespace std;
// class node{
// public:
//     int val;
//     node* next;
//     int size;
//     node(int val){
//         size = 0;
//         this->val = val;
//         this->next = NULL;
//     }
// };
// void display(node* head){
//     if(head==0) return;
//     cout << head->val << " ";
//     display(head->next);
// }
// void insertAtHead(int value,node* head){
//     node* temp = new node(value);
//     temp->next = head;
//     head = temp;

//     node* temp2 = head;
//     while(temp2!=NULL){
//     cout << temp2->val << " ";
//     temp2 = temp2->next;
//    }
// }
// int main(){
//    node* a = new node(10);
//    node* b = new node(20);
//    node* c = new node(30);
//    node* d = new node(40);
//    node* e = new node(50);
//    a->next = b;
//    b->next = c;
//    c->next = d;
//    d->next = e;
//    display(a);
//    cout << endl;
//    insertAtHead(60,a);
//    //display(a);
// }
// #include<bits/stdc++.h>
// using namespace std;
// class node{
// public:
//     int val;
//     node* next;
//     int size;
//     node(int val){
//         size = 0;
//         this->val = val;
//         this->next = NULL;
//     }
// };
// void display(node* head){
//     if(head==0) return;
//     cout << head->val << " ";
//     display(head->next);
// }
// void attail(int idx,node* head){
//     node* temp = head;
//     for(int i=1;i<idx;i++){
//         temp = temp->next;
//     }
//     temp->next = temp->next->next;
// }
// int main(){
//    node* a = new node(10);
//    node* b = new node(20);
//    node* c = new node(30);
//    node* d = new node(40);
//    node* e = new node(50);
//    a->next = b;
//    b->next = c;
//    c->next = d;
//    d->next = e;
//    display(a);
//    attail(1,a);
//    cout << endl;
//    display(a);
// }

// #include<bits/stdc++.h>
// using namespace std;
// class node{
// public:
//     int val;
//     node* next;
//     int size;
//     node(int val){
//         size = 0;
//         this->val = val;
//         this->next = NULL;
//     }
// };
// void display(node* head){
//     if(head==0) return;
//     cout << head->val << " ";
//     display(head->next);
// }
// void delmid(node* head){
//     node* temp = head;
//     int size = 0;
//     while(temp!=NULL){
//         temp = temp->next;
//         size++;
//     }
//     int mid = size/2;
//     temp = head;
//     for(int i=1;i<mid;i++){
//         temp = temp->next;
//     }
//     temp->val = temp->next->val;
//     temp->next = temp->next->next;
// }
// int main(){
//    node* a = new node(10);
//    node* b = new node(20);
//    node* c = new node(30);
//    node* d = new node(40);
//    node* e = new node(50);
//    a->next = b;
//    b->next = c;
//    c->next = d;
//    d->next = e;
//    display(a);
//    cout << endl;
//    delmid(a);
//    display(a);
// }

// #include<bits/stdc++.h>
// using namespace std;
// class node{
// public:
//     int val;
//     node* next;
//     int size;
//     node(int val){
//         size = 0;
//         this->val = val;
//         this->next = NULL;
//     }
// };
// void display(node* head){
//     if(head==0) return;
//     cout << head->val << " ";
//     display(head->next);
// }
// void delmid(node* head){
//     node* fast = head;
//     node* slow = head;
//     while(fast->next!=NULL){
//         fast = fast->next->next;
//         slow = slow->next;
//     }
//     cout << slow->val;
// }
// int main(){
//    node* a = new node(10);
//    node* b = new node(20);
//    node* c = new node(30);
//    node* d = new node(40);
//    node* e = new node(50);
//    //node* f = new node(60);
//    a->next = b;
//    b->next = c;
//    c->next = d;
//    d->next = e;
//    //e->next = f;
//    display(a);
//    cout << endl;
//    delmid(a);
//    //display(a);
// }
// #include <bits/stdc++.h>
// using namespace std;
// class node{
// public:
//     int val;
//     node *next;
//     node(int val){
//         this->val = val;
//         this->next = NULL;
//     }
// };

// void display(node* head){
//     if(head==0) return;
//     cout << head->val << " ";
//     display(head->next);
// }

// int main(){
//     node *a = new node(10);
//     node *b = new node(20);
//     node *c = new node(30);
//     node *d = new node(40);
//     node *e = new node(50);

//     a->next = b;
//     b->next = c;
//     c->next = d;
//     d->next = e;

//     int len = 5;
//     int n = 2;
//     int go = len-n+1;
//     node* temp = a;
//     for(int i=1;i<go-1;i++){
//         temp = temp->next;
//     }
//     temp->next = temp->next->next;
//     display(a);
// }

// #include <bits/stdc++.h>
// using namespace std;
// class node{
// public:
//     int val;
//     node *next;
//     node(int val){
//         this->val = val;
//         this->next = NULL;
//     }
// };

// void display(node* head){
//     if(head==0) return;
//     cout << head->val << " ";
//     display(head->next);
// }

// int main(){
//     node *a = new node(10);
//     node *b = new node(20);
//     node *c = new node(30);
//     node *d = new node(40);
//     node *e = new node(50);

//     a->next = b;
//     b->next = c;
//     c->next = d;
//     d->next = e;
//     e->next = c;

//     bool flag = false;
//     node* fast = a;
//     node* slow = a;
//     while(fast!=NULL && fast->next!=NULL){
//         fast = fast->next->next;
//         slow = slow->next;
//         if(fast==slow){
//             flag = true;
//             break;
//         }
//     }
    
//     if(flag == true){
//         node* temp = a;
//         while(temp!=slow){
//             temp = temp->next;
//             slow = slow->next;
//         }
//         cout << slow->val;
//     }
//     else{
//         cout << "Not a linked list cycle";
//     }
    
    
//     //display(a);
// }

// #include <bits/stdc++.h>
// using namespace std;
// class node{
// public:
//     int val;
//     node *next;
//     node(int val){
//         this->val = val;
//         this->next = NULL;
//     }
// };

// void display(node* head){
//     if(head==0) return;
//     cout << head->val << " ";
//     display(head->next);
// }

// int main(){
//     node *a = new node(10);
//     node *b = new node(10);
//     node *c = new node(20);
//     node *d = new node(20);
//     node *e = new node(50);
//     node *f = new node(30);
//     node *g = new node(40);
//     node *h = new node(80);

//     a->next = b;
//     b->next = c;
//     c->next = d;
//     d->next = e;
//     e->next = f;
//     f->next = g;
//     g->next = h;
//     node* temp = a;
//     node* tempb = a->next;
//      while(tempb!=NULL){
//         while(tempb!=NULL && temp->val==tempb->val){
//             tempb = tempb->next;
//         }
//         temp->next = tempb;
//         temp = tempb;
//         if(tempb!=NULL){
//             tempb = tempb->next;
//         }
//     }
    
//     display(a);
// }

// #include <bits/stdc++.h>
// using namespace std;
// class node{
// public:
//     int val;
//     node *next;
//     node(int val){
//         this->val = val;
//         this->next = NULL;
//     }
// };

// void display(node* head){
//     if(head==0) return;
//     cout << head->val << " ";
//     display(head->next);
// }

// int main(){
//     node *a = new node(1);
//     node *b = new node(2);
//     node *c = new node(3);
//     node *d = new node(4);
//     node *e = new node(5);
    
//     a->next = b;
//     b->next = c;
//     c->next = d;
//     d->next = e;
//     node* temp = a;
//     node* tail = NULL;
//     int n = 0;
//     while(temp){
//         if(temp->next==NULL) tail = temp;
//         temp = temp->next;
//         n++;
//     }
//     int k = 2;
//     temp = a;
//     for(int i=1;i<n-k;i++){
//         temp = temp->next;
//     }
//     tail->next = a;
//     a = temp->next;
//     temp->next = NULL;
//     display(a);
// }

// #include <bits/stdc++.h>
// using namespace std;
// class node{
// public:
//     int val;
//     node *next;
//     node(int val){
//         this->val = val;
//         this->next = NULL;
//     }
// };

// void display(node* head){
//     if(head==0) return;
//     cout << head->val << " ";
//     display(head->next);
// }

// int main(){
//     node *a = new node(1);
//     node *b = new node(2);
//     node *c = new node(3);
//     node *d = new node(4);
//     node *e = new node(5);
    
//     a->next = b;
//     b->next = c;
//     c->next = d;
//     d->next = e;
//     node* Next = a;
//     node* curr = a;
//     node* prev = NULL;
//     while(curr){
//         Next = Next->next;
//         curr->next = prev;
//         prev = curr;
//         curr = Next;
//     }
//     //display(a);
//     node* tempp = prev;
//     while(tempp){
//         cout << tempp->val << " ";
//         tempp = tempp->next;
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// class node{
// public:
//     int val;
//     node *next;
//     node(int val){
//         this->val = val;
//         this->next = NULL;
//     }
// };

// void display(node* head){
//     if(head==0) return;
//     cout << head->val << " ";
//     display(head->next);
// }

// int main(){
//     node *a = new node(10);
//     node *b = new node(10);
//     node *c = new node(30);
//     node *d = new node(30);
//     node *e = new node(50);
    
//     a->next = b;
//     b->next = c;
//     c->next = d;
//     d->next = e;
//     node* temp = a;
//     node* tempb = b;
//     while(tempb!=NULL){
//         while(tempb && temp->val==tempb->val){
//             tempb = tempb->next;
//         }
//         temp->next = tempb;
//         temp = tempb;
//         if(tempb){
//             tempb = tempb->next;
//         }
//     }
//     display(a);
    
// }

// #include <bits/stdc++.h>
// using namespace std;
// class node{
// public:
//     int val;
//     node *next;
//     node(int val){
//         this->val = val;
//         this->next = NULL;
//     }
// };

// void display(node* head){
//     if(head==0) return;
//     cout << head->val << " ";
//     display(head->next);
// }

// int main(){
//     node *a = new node(10);
//     node *b = new node(20);
//     node *c = new node(30);
//     node *d = new node(40);
//     node *e = new node(50);
    
//     a->next = b;
//     b->next = c;
//     c->next = d;
//     d->next = e;
   

//     node *pa = new node(60);
//     node *pb = new node(70);
//     node *pc = new node(80);
//     node *pd = new node(90);
//     node *pe = new node(100);
    
//     pa->next = pb;
//     pb->next = pc;
//     pc->next = pd;
//     pd->next = pe;
//     node* tc = new node(100);
//     node* temp = tc;
//     while(a!=NULL && pa!=NULL){
//         if(a->val <= pa->val){
//             temp->next = a;
//             a = a->next;
            
//             temp = temp->next;
//         }
//         else{
//             temp->next = pa;
//             pa = pa->next;
//             temp = temp->next;
//         }
//     }    
//     if(a==NULL){
//         temp->next = pa;
//     }
//     else{
//         temp->next = a;
//     }
//     tc = tc->next;
//     while(tc){
//         cout << tc->val << " ";
//         tc = tc->next;
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// class node{
// public:
//     int val;
//     node *next;
//     node(int val){
//         this->val = val;
//         this->next = NULL;
//     }
// };

// void display(node* head){
//     if(head==0) return;
//     cout << head->val << " ";
//     display(head->next);
// }
// node* reverse(node* head){
//     node* Next = head;
//     node* curr = head;
//     node* prev = NULL;
//     while(curr){
//         Next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = Next;
//     }
//     return prev;
// }
// string palindrome(node* a){
//     node* cc = new node(100);
//     node* temp = a;
//     node* tempc = cc;
//     while(temp){
//         node* Node = new node(temp->val);
//         tempc->next = Node;
//         tempc = tempc->next;
//         temp = temp->next;
//     }
//     cc = cc->next;
//     cc = reverse(cc);
//     node* aa = a;
//     node* bb = cc;
//     while(aa!=NULL){
//         if(aa->val!=bb->val) return "false";
//         aa = aa->next;
//         bb = bb->next;
//     }
//     return "true";
// }
// int main(){
//     node *a = new node(10);
//     node *b = new node(20);
//     node *c = new node(30);
//     node *d = new node(30);
//     node *e = new node(20);
//     node *f = new node(10);
    
//     a->next = b;
//     b->next = c;
//     c->next = d;
//     d->next = e;
//     e->next = f;

//     string r = palindrome(a);
//     cout << r;    

// }

// #include <bits/stdc++.h>
// using namespace std;
// class node{
// public:
//     int val;
//     node *next;
//     node(int val){
//         this->val = val;
//         this->next = NULL;
//     }
// };
// void display(node* head){
//     if(head==0) return;
//     cout << head->val << " ";
//     display(head->next);
// }

// node* reverse(node* head){
//     node* Next = head;
//     node* curr = head;
//     node* prev = NULL;
//     while(curr){
//         Next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = Next;
//     }
//     return prev;
// }

// void reversepart(node* head,int left,int right){
//     node* a = NULL;
//     node* b = NULL;
//     node* c = NULL;
//     node* d = NULL;
//     node* temp = head;
//     int n = 1;
//     while(temp){
//         if(n==left-1) a = temp;
//         if(n==left) b = temp;
//         if(n==right) c = temp;
//         if(n==right+1) d = temp;
//         n++;
//         temp = temp->next;
//     }
//     a->next = NULL;
//     c->next = NULL;
//     c = reverse(b);
//     a->next = c;
//     b->next = d;
//     display(head);
// }


// int main(){
//     node *a = new node(10);
//     node *b = new node(20);
//     node *c = new node(30);
//     node *d = new node(40);
//     node *e = new node(50);
//     node *f = new node(60);
    
//     a->next = b;
//     b->next = c;
//     c->next = d;
//     d->next = e;
//     e->next = f;

//     reversepart(a,2,4);
//     //display(a);
// }
// #include<bits/stdc++.h>
// using namespace std;
// bool isbalanced(string s){
//     int n = s.size();
//     stack<char>st;
//     for(int i=0;i<n;i++){
//         if(n%2!=0) return false;
//         else{
//             if(s[i] == '('){
//                 st.push(s[i]);
//             }
//             else{
//                 if(st.size()==0) return false;
//                 else{
//                     st.pop();
//                 }
//             }
//         }
//     }
//     if(st.size()==0) return true;
//     else return false;
// }
// int main(){
//     string s = "(())";
//     cout << isbalanced(s);
// }
// #include<bits/stdc++.h>
// using namespace std;
// bool isbalanced(string s){
//     int n = s.size();
//     stack<char>st;
//     for(int i=0;i<n;i++){
//         if(n%2!=0) return false;
//         else{
//             if(st.empty()){
//                 st.push(s[i]);
//             }
            
//             else if(st.top()=='(' && s[i]==')' || st.top()=='[' && s[i]==']' || st.top()=='{' && s[i]=='}'){
//                 st.pop();
//             }
//             else{
//                 st.push(s[i]);
//             }
//         }
//     }
//     if(st.empty()) return true;
//     else return true;
// }
// int main(){
//     string s = "(())";
//     cout << isbalanced(s);
// }
// #include<bits/stdc++.h>
// using namespace std;
// string remove(string s){
//     int n = s.size();
//     stack<char>st;
//     st.push(s[0]);
//     for(int i=1;i<n;i++){
//         if(st.top()!=s[i]){
//             st.push(s[i]);
//         }
//     }
//     s = " ";
//     while(st.size()!=0){
//         char x = st.top();
//         s = s + x;
//         st.pop();
//     }
//     reverse(s.begin(),s.end());
//     return s;
// }
// int main(){
//     string s = "aaaabbbccaaaccdddd";
//     cout << remove(s);
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[8] = {3,1,2,7,4,6,2,3};
//     int n = 8;
//     int newarr[n];
//     newarr[n-1] = -1;
//     stack<int>st;
//     st.push(arr[n-1]);
//     for(int i=n-2;i>=0;i--){
//         while(st.size()>0 && st.top()<=arr[i]){
//             st.pop();
//         }
//         if(st.size()==0) newarr[i]=-1;
//         else{
//             newarr[i] = st.top();
//         }
//         st.push(arr[i]);
//     }
//     for(int i=0;i<n;i++){
//         cout << newarr[i] << " ";
//     }
// }

// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     int arr[8] = {100,80,60,81,70,60,75,85};
//     int n = 8;
//     int newarr[n];
//     newarr[0] = -1;
//     stack<int>st;
//     st.push(0);
//     for(int i=1;i<n;i++){
//         while(st.size()>0 && arr[st.top()]<=arr[i]){
//             st.pop();
//         }
//         if(st.size()==0) newarr[i] = -1;
//         else{
//             newarr[i] = st.top();
//         }
//         st.push(i);
//     }
//     for(int i=0;i<n;i++){
//         newarr[i] = i - newarr[i];
//         cout << newarr[i] << " ";
//     }
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {10,6,8,5,11,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>newarr(n,0);
    stack<int>st;
    st.push(arr[n-1]);
    for(int i=n-2;i>=0;i--){
        int count = 0;
        while(st.size()>0 && st.top()<arr[i]){
            st.pop();
            count++;
        }
        if(st.size()!=0) count++;
        newarr[i] = count;
        st.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout << newarr[i] << " ";
    }
    cout << endl;
}