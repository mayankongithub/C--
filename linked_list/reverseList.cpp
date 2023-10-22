#include<iostream>
using namespace std;
class node{
public:
    int val;
    node* next;

    node(int val){
        this->val = val;
        next = NULL;
    }
};
int main(){
    node* a = new node(10);
    node* b = new node(20);
    node* c = new node(30);
    node* d = new node(40);
    node* e = new node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    node* prev = NULL;
    node* curr = a;
    node* Next = a;
    while(curr!=NULL){
        Next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = Next;
    }
    node* temp = prev;
    while(prev){
        cout << prev->val << " ";
        prev = prev->next;
    }
}