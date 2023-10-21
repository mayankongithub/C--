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
class linkedlist{
public:
    node* head;
    node* tail;
    int size;

    void insert(int val){
        node* temp = new node(val);
        if(size==0)head = tail = temp;
        else{
            temp->next = head;
            head = temp; 
        }
        size++;
    }
    void display(){
        node* temp = head;
        while(temp!=NULL){
            cout << temp->val << " ";
            temp = temp->next;
        }
    }
};
int main(){
    linkedlist ll;
    ll.insert(20);
    ll.display();
    // ll.insert(40);
    // ll.display();
}