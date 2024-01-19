#include<bits/stdc++.h>
using namespace std;
int pri(char ch){
    if(ch=='*' || ch=='/') return 2;
    else return 1;
}
string cal(string val1,string val2,char ch){
    string s = "";
    s += val1;
    s.push_back(ch);
    s += val2;
    return s;
}
int main(){
    string str = "79+4*8/3-";
    stack<string>val;
    stack<char>op;
    int n = str.size();
    for(int i=0;i<n;i++){
        if(isdigit(str[i])){
            val.push(to_string(str[i]-48));
        }
        else{
            if(op.size()==0){
                op.push(str[i]);
            }
            else if(str[i]=='('){
                op.push(str[i]);
            }
            else if(op.top()=='('){
                op.push(str[i]);
            }
            else if(str[i]==')'){
                while(op.top()!='('){
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    char ch = op.top();
                    op.pop();
                    string ans = cal(val1,val2,ch);
                    val.push(ans);
                }
                op.pop();
            }
            else if(pri(str[i]) > pri(op.top())){
                op.push(str[i]);
            }
            else{
                while(op.size()>0 && pri(str[i] <= op.top())){
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    char ch = op.top();
                    op.pop();
                    string ans = cal(val1,val2,ch);
                    val.push(ans);
                }
                op.push(str[i]);
            }
        }
    }
    while(op.size()!=0){
        char ch = op.top();
        op.pop();
        string val2 = val.top();
        val.pop();
        string val1 = val.top();
        val.pop();
        string p = cal(val1,val2,ch);
        val.push(p);
    }
    cout << val.top() << endl;
}
