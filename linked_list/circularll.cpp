//INSERTING AN ELEMENT AT THE TAIL OF LINKED LIST 
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
void add(node* a,int val){
    node* t = new node(val);
    node* temp = a;
    node* tail = NULL;
    while(temp->next!=a){
        temp = temp->next;
    }
    temp->next = t;
    t->next = a;
}
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
    e->next = a;
    node* temp = a;
    add(a,60);
    while(temp->next!=a){
        cout << temp->val << " "; 
        temp = temp->next;
    }

}


