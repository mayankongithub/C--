#include<iostream>
using namespace std;
class node{
public:
    int val;
    node* next;

    node(int val){
        this->val = val;
        this->next = NULL;
    }
};
int main(){
    int len = 0;
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
    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
    int midele = len/2;
    node* ntemp = a;
    for(int i=0;i<midele;i++){
        ntemp = ntemp->next;
    }
    ntemp->val = ntemp->next->val;
    ntemp->next = ntemp->next->next;
    node* ltemp = a;
    while(ltemp!=NULL){
        cout << ltemp->val << " ";
        ltemp = ltemp->next;
    }
    cout << endl << midele;
    //me
}

