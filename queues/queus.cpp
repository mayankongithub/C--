// #include<bits/stdc++.h>
// using namespace std;
// void display(queue<int> &q){
//     int n = q.size();
//     for(int i=0;i<n;i++){
//         int x = q.front();
//         cout << x << " ";
//         q.pop();
//         q.push(x);
//     }
// }
// void reverse(queue<int> &q){
//     stack<int>st;
//     while(q.size()!=0){
//         int x = q.front();
//         q.pop();
//         st.push(x);
//     }
//     while(st.size()!=0){
//         int x = st.top();
//         st.pop();
//         q.push(x);
//     }
// }
// int main(){
//     queue<int>q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     display(q);
//     cout << endl;
//     reverse(q);
//     display(q);
// }

// #include<bits/stdc++.h>
// using namespace std;
// void display(queue<int> &q){
//     int n = q.size();
//     for(int i=0;i<n;i++){
//         int x = q.front();
//         cout << x << " ";
//         q.pop();
//         q.push(x);
//     }
// }
// int main(){
//     queue<int>q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     int n = q.size();
//     for(int i=0;i<n;i++){
//         if(i%2!=0){
//             q.pop();
//         }
//         else{
//             int x = q.front();
//             q.pop();
//             q.push(x);
//         }
//     }
//     display(q);
// }

#include<iostream>
using namespace std;
class Q{
public:
    int f;
    int b;
    int arr[5];
    Q(){
        f = 0;
        b = 0;
    }
    void push(int val){
        if(b==5){
            cout << "queue is full!!";
            return;
        }
        arr[b] = val;
        b++;
    }
    void pop(){
        if(f-b==0){
            cout << "Queue is empty!!";
            return;
        }
        else{
            f++;
        }
    }
    int front(){
        if(f-b==0){
            cout << "Queue is empty!!";
            return 0;
        }
        else{
            return arr[f];
        }
    }
    void display(){
        for(int i=f;i<b;i++){
            cout << arr[i] << " ";
        }
    }
};
int main(){
    Q q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.display();
    cout << endl;
    q.push(50);
    q.display();
}