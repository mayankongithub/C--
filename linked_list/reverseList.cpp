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

    node* temp = a;
    node* tail = NULL;
    while(temp!=NULL){
        if(temp->next==NULL) tail = temp;
        temp = temp->next;
    }
    temp = a;
    tail->next = tail-1->next;
    while(tail){
        cout << tail->val << " ";
        tail = tail->next;
    }
}