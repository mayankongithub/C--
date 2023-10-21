// #include<iostream>
// using namespace std;
// class Node{
// public:
//     int val;
//     Node* next;

//     Node(int val){
//         this->val = val;
//         this->next = NULL;
//     }
// };
// int main(){
//     Node a(1);
//     Node b(2);
//     Node c(3);
//     Node d(4);
//     Node e(5);
//     //forming ll
//     a.next = &b;
//     b.next = &c;
//     c.next = &d;
//     d.next = NULL;
    
//     Node temp = a;
//     while(1){
//         cout << temp.val << endl;
//         if(temp.next==NULL) break;
//         temp = *(temp.next);
//     }
// }
//BEST OF TAKING INPUT OF LINKED LIST
#include<iostream>
class Node{
public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
using namespace std;
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;
    Node* temp = a;
    while(temp!=NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
}