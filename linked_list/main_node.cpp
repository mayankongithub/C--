#include<iostream>
using namespace std;
// class node{
// public:
//     int val;
//     node* next;

//     node(int val){
//         this->val = val;
//         this->next = NULL;
//     }
// };
// int main(){
//     node a(10);
//     node b(20);
//     node c(30);
//     node d(40);

//     a.next = &b;
//     b.next = &c;
//     c.next = &d;
//     //PRINTING LAST VALUE WHICH IS D
//     //cout << (((a.next)->next)->next)->val;

//     node temp = a;
//     while(1){
//         cout << temp.val << " ";
//         if(temp.next==NULL) break;
//         temp = *(temp.next);
//     }

// }
// FORMING ACTUAL LINKED LIST
// #include<iostream>
// using namespace std;
// class node{
// public:
//     int val;
//     node * next;
//     node(int val){
//         this->val = val;
//         this->next = NULL;
//     }
// };
// int size(node* a){
//     node* temp = a;
//     int n = 0;
//     while(temp!=NULL){
//         n++;
//         temp = temp->next;
//     }
//     return n;
// }
// int main(){
//     node* a = new node (10);
//     node* b = new node (20);
//     node* c = new node (30);
//     node* d = new node (40);

//     a->next = b;
//     b->next = c;
//     c->next = d;

//     node* temp = a;
//     while(temp!=NULL){
//         cout << temp->val << " ";
//         temp = temp->next;
//     }
//

