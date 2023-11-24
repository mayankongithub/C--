
#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
string remove(string s){
    stack<char>st;
    st.push(s[0]);
    for(int i=1;i<s.length();i++){
        if(st.top()!=s[i]) st.push(s[i]);
    }
    s = "";
    while(st.size()){
        s = s+st.top();
        st.pop();
    }
    reverse(s.begin(),s.end());
    return s;
}
int main(){
    string s = "aabccdddaeef";
    cout << remove(s);
}