// #include<bits/stdc++.h>
// using namespace std;
// class node{
// public:
//     int val;
//     node * next;
//     node(int val){
//         this->val = val;
//         this-> next = NULL;
//     }

// };
// int main(){
//    node* a = new node(10);
//    node* b = new node(20);
//    node* c = new node(30);
//    a->next = b;
//    b->next = c;

//    node* temp = a;
//    while(temp!=NULL){
//     cout << temp->val << " ";
//     temp = temp->next;
//    }
// }
// #include<bits/stdc++.h>
// using namespace std;
// class node{
// public:
//     int val;
//     node* next;
//     node(int val){
//         this->val = val;
//         this-> next = NULL;
//     }
// };
// void display(node * head){
//     if(head==NULL) return;
//     cout << head->val << " ";
//     display(head->next);
// }
// void insert(int val,node* head){
//     node* temp = head;
//     node* temp2 = new node(val);
//     while(temp){
//         temp->next = head;
//         head = temp;
//         temp = temp->next;
//     }
// }
// int main(){
//    node* a = new node(10);
//    node* b = new node(20);
//    node* c = new node(30);
//    node* d = new node(40);
//    a->next = b;
//    b->next = c;
//    c->next = d;
//    display(a);
//    insert(70,a);
//    display(a);
// }
// #include<bits/stdc++.h>
// using namespace std;
// class node{
// public:
//     int val;
//     node* next;
//     int size;
//     node(int val){
//         size = 0;
//         this->val = val;
//         this->next = NULL;
//     }
// };
// void display(node* head){
//     if(head==0) return;
//     cout << head->val << " ";
//     display(head->next);
// }
// void insertAtHead(int value,node* head){
//     node* temp = new node(value);
//     temp->next = head;
//     head = temp;

//     node* temp2 = head;
//     while(temp2!=NULL){
//     cout << temp2->val << " ";
//     temp2 = temp2->next;
//    }
// }
// int main(){
//    node* a = new node(10);
//    node* b = new node(20);
//    node* c = new node(30);
//    node* d = new node(40);
//    node* e = new node(50);
//    a->next = b;
//    b->next = c;
//    c->next = d;
//    d->next = e;
//    display(a);
//    cout << endl;
//    insertAtHead(60,a);
//    //display(a);
// }
// #include<bits/stdc++.h>
// using namespace std;
// class node{
// public:
//     int val;
//     node* next;
//     int size;
//     node(int val){
//         size = 0;
//         this->val = val;
//         this->next = NULL;
//     }
// };
// void display(node* head){
//     if(head==0) return;
//     cout << head->val << " ";
//     display(head->next);
// }
// void attail(int idx,node* head){
//     node* temp = head;
//     for(int i=1;i<idx;i++){
//         temp = temp->next;
//     }
//     temp->next = temp->next->next;
// }
// int main(){
//    node* a = new node(10);
//    node* b = new node(20);
//    node* c = new node(30);
//    node* d = new node(40);
//    node* e = new node(50);
//    a->next = b;
//    b->next = c;
//    c->next = d;
//    d->next = e;
//    display(a);
//    attail(1,a);
//    cout << endl;
//    display(a);
// }

// #include<bits/stdc++.h>
// using namespace std;
// class node{
// public:
//     int val;
//     node* next;
//     int size;
//     node(int val){
//         size = 0;
//         this->val = val;
//         this->next = NULL;
//     }
// };
// void display(node* head){
//     if(head==0) return;
//     cout << head->val << " ";
//     display(head->next);
// }
// void delmid(node* head){
//     node* temp = head;
//     int size = 0;
//     while(temp!=NULL){
//         temp = temp->next;
//         size++;
//     }
//     int mid = size/2;
//     temp = head;
//     for(int i=1;i<mid;i++){
//         temp = temp->next;
//     }
//     temp->val = temp->next->val;
//     temp->next = temp->next->next;
// }
// int main(){
//    node* a = new node(10);
//    node* b = new node(20);
//    node* c = new node(30);
//    node* d = new node(40);
//    node* e = new node(50);
//    a->next = b;
//    b->next = c;
//    c->next = d;
//    d->next = e;
//    display(a);
//    cout << endl;
//    delmid(a);
//    display(a);
// }

// #include<bits/stdc++.h>
// using namespace std;
// class node{
// public:
//     int val;
//     node* next;
//     int size;
//     node(int val){
//         size = 0;
//         this->val = val;
//         this->next = NULL;
//     }
// };
// void display(node* head){
//     if(head==0) return;
//     cout << head->val << " ";
//     display(head->next);
// }
// void delmid(node* head){
//     node* fast = head;
//     node* slow = head;
//     while(fast->next!=NULL){
//         fast = fast->next->next;
//         slow = slow->next;
//     }
//     cout << slow->val;
// }
// int main(){
//    node* a = new node(10);
//    node* b = new node(20);
//    node* c = new node(30);
//    node* d = new node(40);
//    node* e = new node(50);
//    //node* f = new node(60);
//    a->next = b;
//    b->next = c;
//    c->next = d;
//    d->next = e;
//    //e->next = f;
//    display(a);
//    cout << endl;
//    delmid(a);
//    //display(a);
// }
// #include <bits/stdc++.h>
// using namespace std;
// class node{
// public:
//     int val;
//     node *next;
//     node(int val){
//         this->val = val;
//         this->next = NULL;
//     }
// };

// void display(node* head){
//     if(head==0) return;
//     cout << head->val << " ";
//     display(head->next);
// }

// int main(){
//     node *a = new node(10);
//     node *b = new node(20);
//     node *c = new node(30);
//     node *d = new node(40);
//     node *e = new node(50);

//     a->next = b;
//     b->next = c;
//     c->next = d;
//     d->next = e;

//     int len = 5;
//     int n = 2;
//     int go = len-n+1;
//     node* temp = a;
//     for(int i=1;i<go-1;i++){
//         temp = temp->next;
//     }
//     temp->next = temp->next->next;
//     display(a);
// }

#include <bits/stdc++.h>
using namespace std;
class node{
public:
    int val;
    node *next;
    node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void display(node* head){
    if(head==0) return;
    cout << head->val << " ";
    display(head->next);
}

int main(){
    node *a = new node(10);
    node *b = new node(20);
    node *c = new node(30);
    node *d = new node(40);
    node *e = new node(50);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = c;

    bool flag = false;
    node* fast = a;
    node* slow = a;
    while(fast!=NULL && fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
        if(fast==slow){
            flag = true;
            break;
        }
    }
    
    if(flag == true){
        node* temp = a;
        while(temp!=slow){
            temp = temp->next;
            slow = slow->next;
        }
        cout << slow->val;
    }
    else{
        cout << "Not a linked list cycle";
    }
    
    
    //display(a);
}