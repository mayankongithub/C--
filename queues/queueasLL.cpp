#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int val;
    node* next;
    node(int val){
        this->val = val;
    }
};
class Q{
public:
    node* head;
    node* tail;
    int size;
    Q(){
        head = 0;
        tail = 0;
        size = 0;
    }
    void push(int val){
        node* temp = new node(val);
        if(size==0){
            head = tail = temp;
        }
        else{
            tail->next = temp;
            tail = temp;
        }
        
        size++;
    }
    void pop(){
        head = head->next;
        size--;
    }
    void display(){
        node* temp = head;
        while(temp){
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main(){
    Q q;
    q.push(10);
    q.push(20);
    q.display();
    q.push(30);
    q.push(40);
    q.display();
    q.pop();
    q.display();

}