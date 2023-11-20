<<<<<<< HEAD
// //me
// #include<iostream>
// #include<stack>
// #include<algorithm>
// using namespace std;
// int main(){
//     stack<int>st;
//     stack<int>help;
//     cout << st.size() << endl;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     cout << st.size() << endl;
=======
//me
#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
int main(){
    stack<int>st;
    cout << st.size() << endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout << st.size() << endl;
>>>>>>> df2eebc5c9b2636d3a2dc59623857917b5cc5730
    
//     stack<int>temp;
//     while(st.size()>0){
//         //cout << st.top() << endl;
//         int x = st.top();
//         st.pop();
//         temp.push(x);
//     }
//     // while(temp.size()>0){
//     //     cout << temp.top() << endl;
//     //     int x = temp.top();
//     //     st.push(x);
//     //     temp.pop();
//     // }
//     while(temp.size()){
//         int x = temp.top();
//         help.push(x);
//         temp.pop();
//     }
//     while(help.size()){
//         cout << help.top() << endl;
//         int x = help.top();
//         st.push(x);
//         help.pop();
//     }
// }

//INSERT AT BOTTOM
#include<iostream>
#include<stack>
using namespace std;


void insertatbottom(stack<int>&st,int val){
    stack <int> temp;
    while(st.size()){
        int x = st.top();
        temp.push(x);
        st.pop();
    }
    st.push(val);
    while(temp.size()){
        int x = temp.top();
        st.push(x);
        temp.pop();
    }
}


void print(stack<int>st){
    stack <int> temp;
    while(st.size()){
        int x = st.top();
        temp.push(x);
        st.pop();
    }
    while(temp.size()){
        cout << temp.top() << endl;
        int x = temp.top();
        st.push(x);
        temp.pop();
    }
}


void insertatindex(stack<int>&st , int val , int idx){
    stack<int>temp;
    while(st.size()>idx){
        int x = st.top();
        temp.push(x);
        st.pop();
    }
    st.push(val);
    while(temp.size()){
        int x = temp.top();
        st.push(x);
        temp.pop();
    }

}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    insertatbottom(st,80);
    print(st);
    cout << endl;
    insertatindex(st,90,2);
    print(st);
    cout << endl;
}