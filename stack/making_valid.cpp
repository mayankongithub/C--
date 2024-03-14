#include<iostream>
#include<stack>
using namespace std;
int main(){
    string str = "}{}";
    stack<char>st;
    for(int i=0;i<str.length();i++){
        if(str[i]=='('){
            st.push(str[i]);
        }
        else{
            if(!st.empty() && st.top()==')'){
                st.pop();
            }
            else{
                st.push(str[i]);
            }

        }
    }
    int opening = 0;
    int closing = 0;
    while(st.size()>0){
        if(st.top()=='('){
            opening++;
        }
        else{
            closing++;
        }
        st.pop();
    }
    int ans = (opening+1)/2 + (closing+1)/2;
    cout << ans << endl;
    //  }{}
    //  1/2 + 1 
}