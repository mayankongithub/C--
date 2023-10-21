// #include<iostream>
// using namespace std;
// class node{
// public:
//     int val;
//     node* next;
//     node(int val){
//         this->val = val;
//         this->next = NULL;
//     }
// };
// void insert(node* a,int val){
//     node* temp = new node(val);
//     while(a->next!=NULL) a = a->next;//agar aage wala null ni h toh aage jaate rho
//     a->next = temp;//agar aage wala address null h toh us ke next mai temp daal do
// }
// int main(){
//     node* a = new node (10);
//     node* b = new node (20);
//     node* c = new node (30);
//     node* d = new node (40);
//     a->next = b;
//     b->next = c;
//     c->next = d;
//     insert(a,50);
//     node* temp = a;
//     while(temp!=NULL){
//         cout << temp->val << " ";
//         temp = temp->next;
//     }
// }

#include<iostream>
using namespace std;
class node{//CREATING A DATA TYPE
public:
    int val;
    node* next;
    node(int val){
        this->val = val;
        this->next = NULL;
    }
};
class linkedlist{//CREATING A DATA STRUCTURE
public:
    node* head;
    node* tail;
    int size;
    linkedlist(){
        head = NULL;
        tail = NULL;
        size = 0;
    }
    void insert(int val){
        node* temp = new node(val);
        if(size==0)head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void display(){
        node* temp = head;
        while(temp!=NULL){
            cout << temp->val << " ";
            temp = temp->next;
        }
    }
};
int main(){
    linkedlist ll;
    ll.insert(10);
    ll.display();
}