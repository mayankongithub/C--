#include<bits/stdc++.h>
using namespace std;
int main(){
   queue<int>q;
   q.push(1);
   q.push(2);
   q.push(3);
   q.push(4);
   q.push(5);
   q.push(6);
   q.push(7);
   q.push(8);
   stack<int>st;
   int half = q.size()/2;
   for(int i=1;i<=half;i++){
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    for(int i=1;i<=half;i++){
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        q.push(q.front());
        q.pop();
        st.pop();
    }
    stack<int>r;
    while(q.size()>0){
        r.push(q.front());
        q.pop();
    }
    while(r.size()>0){
        q.push(r.top());
        r.pop();
    }

    int n = q.size();
    while(n!=0){
        cout << q.front() << " ";
        q.push(q.front());
        q.pop();
        n--;
    }
}