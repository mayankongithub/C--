//me
#include<iostream>
using namespace std;
class node{
public:
    int val;
    node* next;
    node* prev;
    node(int val){
        this->val = val;
        next = NULL;
        prev = NULL;
    }

};
void rev(node* e){
    node* temp = e;
    while(temp){
        cout << temp->val << " ";
        temp = temp->prev;
    }
}
int main(){
    node* a = new node(10);
    node* b = new node(20);
    node* c = new node(30);
    node* d = new node(40);
    node* e = new node(50);
    a->next = b;
    b->prev = a;
    b->next = c;
    c->next = d;
    d->next = e;

    a->prev = NULL;
    b->prev = a;
    c->prev = b;
    d->prev = c;
    e->prev = d;
    rev(e);
}
