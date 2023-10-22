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
    node* f = new node(60);
    node* g = new node(70);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    node* slow = a;
    node* fast = b;
    //for middle and right middle
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    cout << slow->val;

    //for left middle
    // while(fast->next!=NULL && fast->next->next!=NULL){
    //     slow = slow->next;
    //     fast = fast->next->next;
    // }
    // cout << slow->val;
}