#include<iostream>
#include<stack>
using namespace std;
void displayRev(stack<int>&st){
    if(st.size()==0) return;
    int x = st.top();
    cout << x << " ";
    st.pop();
    displayRev(st);
    st.push(x);
}

void display(stack<int>&st){
    if(st.size()==0) return;
    int x = st.top();
    st.pop();
    display(st);
    cout << x << " ";
    st.push(x);
}

void insertatbottom(stack<int>&st,int val){
    if(st.size()==0){
        st.push(val);
        return;
    }
    int x = st.top();
    st.pop();
    insertatbottom(st,val);
    st.push(x);
}
int main(){
    stack<int>st;
    st.push(4);
    st.push(5);
    st.push(7);
    displayRev(st);
    cout << endl;
    // display(st);
    // insertatbottom(st,-1);
    // cout << endl;
    // display(st);
}