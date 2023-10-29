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
class linkedlist{
public:
    node* head;
    node* tail;
    int size;

    linkedlist(){
        head = tail = NULL;
        size = 0;
    }

    void insertattail(int val){
        node* temp = new node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        size++;
    }
    void insertathead(int val){
        node* temp = new node(val);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        size++;
    }
    void insertatindex(int idx,int val){
        if(idx==size) insertattail(val);
        if(size==0) insertathead(val);
        else{
            node* val = new node(val);
            node* temp = head;
            for(int i=1;i<=idx-1;i++){
                temp = temp->next;
            }
            temp->next
        }
    }
};
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
}
