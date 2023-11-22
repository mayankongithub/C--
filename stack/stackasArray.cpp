// #include<iostream>
// using namespace std;
// class stack{
// public:
//     int arr[5];
//     int idx;
//     stack(){
//         idx = -1;
//     }
//     void push(int val){
//         idx++;
//         arr[idx] = val;
//     }
//     void pop(){
//         idx--;
//     }
//     int size(){
//         return idx+1;
//     }
//     int top(){
//         return arr[idx];
//     }
// };
// int main(){
//     stack st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     cout << st.size();
// }
//STACK IMPLEMENTATION USING LINKED LIST
#include<iostream>
using namespace std;
class node{
public:
    int val;
    node* next;
    node(int val){
        this -> val = val;
        this -> next = next;
    }
};
class stack{
public:
    node* head;
    int size;
    stack(){
        size = 0;
        head = NULL;
    }
    void push(int val){
        node* temp = new node(val);
        temp->next = head;
        head = temp;
        size++;
    }
    void pop(){
        if(head==NULL){
            cout << "Stack is empty";
            return;
        }
        head = head->next;
        size--;
    }
    int top(){
        if(head==NULL){
            cout << "stack is empty";
            return -1;
        }
        return head->val;
    }
};
int main(){
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout << st.top();
}