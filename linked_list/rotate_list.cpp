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
    int n = 0;
    node* temp = a;
    node* tail = NULL;
    while(temp!=NULL){
        if(temp->next==NULL) tail = temp;
        temp = temp->next;
        n++;
    }
    temp = a;
    for(int i=1;i<n-2;i++){
        temp = temp->next; 
    }
    tail->next = a;
    a = temp->next;
    temp->next = NULL;

    node* nnnntemp = a;
    while(nnnntemp!=NULL){
        cout << nnnntemp->val << " ";
        nnnntemp = nnnntemp->next;
    }

}
