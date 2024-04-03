// #include<iostream>
// #include<queue>
// #include<stack>
// using namespace std;
// void print(queue<int>&q){
//     int n = q.size();
//     for(int i=0;i<n;i++){
//         int top = q.front();
//         cout << top << " ";
//         q.pop();
//         q.push(top);
//     }
// }
// void reverse(stack<int>&st,queue<int>&q){
//     while(q.size()!=0){
//         st.push(q.front());
//         q.pop();
//     }
//     while(st.size()!=0){
//         q.push(st.top());
//         cout << st.top() << " ";
//         st.pop();
//     }
// }
// int main(){
//     queue<int>q;
//     stack<int>st;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     q.push(5);
//     print(q);
//     cout << endl;
//     reverse(st,q);
// }
#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void print(queue<int>&q){
    int n = q.size();
    for(int i=0;i<n;i++){
        int top = q.front();
        cout << top << " ";
        q.pop();
        q.push(top);
    }
}

int main(){
    queue<int>q;
    stack<int>st;
    q.push(1);//0
    q.push(2);//1
    q.push(3);//2
    q.push(4);//3
    q.push(5);//4
    int n = q.size();
    for(int i=0;i<n;i++){
        if(i%2==0){
            q.pop();
        }
        else{
            int x = q.front();
            q.pop();
            q.push(x);
        }
    }
    print(q);
}