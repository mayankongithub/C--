#include<iostream>
using namespace std;
class node{
public:
    int val;
    node* next;
    node(int val){
        this->val=val;
        this->next=NULL;
    }
};
int main(){
    node* a = new node(10);
    node* b = new node(10);
    node* c = new node(30);
    node* d = new node(40);
    node* e = new node(50);
    node* f = new node(60);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    node* first = a;
    node* second = b;
    while(second!=NULL){
        while(second!=NULL && first->val==second->val){
            second = second->next;
        }
        first->next = second;
        first = second;
        if(b!=NULL){
            b = b->next;
        }
    }
    node*temp = a;
    while(temp!=NULL){
        cout<< temp->val <<" ";
        temp = temp->next;
    }
    //me

}
<<<<<<< HEAD
fv = 8 
=======
>>>>>>> bd306ce889ee187b0763545c2e8f87a166ab8477
