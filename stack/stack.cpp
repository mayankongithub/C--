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
    
    stack<int>temp;
    while(st.size()>0){
        //cout << st.top() << endl;
        int x = st.top();
        st.pop();
        temp.push(x);
    }
    while(temp.size()>0){
        cout << temp.top() << endl;
        int x = temp.top();
        st.push(x);
        temp.pop();
    }
}