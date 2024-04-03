#include<iostream>
using namespace std;
class Queue{
public:
    int f;
    int b;
    int arr[5];
    Queue(){
        f = 0;
        b = 0;
    }
    void push(int val){
        if(b==5){
            cout << "Queue is full! push" << endl;
            return;
        }
        arr[b] = val;
        b++;
    }
    void pop(){
        if(f-b==0){
            cout << "Queue is empty! pop" << endl;
            return;
        }
        f++;
    }
    void display(){
        for(int i=f;i<b;i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    int top(){
        if(b==0){
            cout << "Queue is empty! top" << endl;
            return -1;
        }
        return arr[f];
    }
};
int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.pop();
    q.display();
    q.push(50);
    q.push(60);
    q.display();
    q.top();
}