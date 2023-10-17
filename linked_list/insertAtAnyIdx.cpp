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
class linkedlist{
public:
    node* head;
    node* tail;
    int size;

    linkedlist(){
        this->head = NULL;
        this->tail = NULL;
        this->size = 0;
    }
    
    int insertathead(int val){
        node* temp = new node(val);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }
    int insertattail(int val){
        node* temp = new node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void insert5(int idx,int val){
        if(idx<0 || idx>size){
            cout << "ERROR";
        }
        else if(idx==0)  insertathead(val);
        else if(idx==size-1) insertattail(val);
        else{
            node* t = new node(val);
            node* temp = head;
            for(int i=1;i<=idx-1;i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            //return;
        }
    }
    void display(){
        node* temp = head;
        while(temp!=NULL){
            cout << temp->val << " ";
            temp = temp->next;
        }
    }
    int getvalue(int idx){
        node* temp = head;
        for(int i=0;i<idx;i++){
            temp = temp->next;
        }
        return temp->val;
    }
};
int main(){
    linkedlist ll;
    ll.insertathead(40);
    ll.display();
    cout << endl;
    ll.insertathead(60);
    ll.display();
    cout << endl;
    ll.insertathead(80);
    ll.display();
    cout << endl;
    ll.insertattail(90);
    ll.display();
    cout << endl;
    ll.insertattail(30);
    ll.display();
    cout << endl;
    ll.insert5(3,10);
    ll.display();
    cout << endl;
    int v = ll.getvalue(2);
    cout << v;
}