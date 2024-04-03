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
class LL{
public:
    node* head;
    node* tail;
    int Size;
    LL(){
        head = tail = NULL;
        Size = 0;
    }
    void push(int val){
        node* temp = new node(val);
        if(Size==0)head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        Size++;
    }
    void pop(){
        if(Size==0){
            cout << "Queue is empty!";
            return;
        }
        head = head->next;
        Size--;
    }
    int size(){
        return Size;
    }
    void display(){
        node* temp = head;
        while(temp){
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout <<endl;
    }
};
int main(){
    LL q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.display();  
    q.pop();
    q.push(40);
    q.push(50);
    q.push(60);
    q.display();
    cout << q.size();
}