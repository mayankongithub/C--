#include<bits/stdc++.h>
using namespace std;
int pri(char ch){
    if(ch=='*' || ch=='/') return 2;
    else return 1;
}
int cal(int val1,int val2,char ch){
    if(ch=='+') return (val1 + val2);
    else if(ch=='-') return (val2 - val1);
    else if(ch=='*') return (val2 * val1);
    else return (val2 / val1);
}
int main(){
    string str = "1+(2+6)*4/8-3";
    stack<int>val;
    stack<char>op;
    int n = str.size();
    for(int i=0;i<n;i++){
        if(isdigit(str[i])){
            val.push(str[i]-48);
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
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    char ch = op.top();
                    op.pop();
                    int ans = cal(val1,val2,ch);
                    val.push(ans);
                }
                op.pop();
            }
            else if(pri(str[i]) > pri(op.top())){
                op.push(str[i]);
            }
            else{
                while(op.size()>0 && pri(str[i] <= op.top())){
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    char ch = op.top();
                    op.pop();
                    int ans = cal(val1,val2,ch);
                    val.push(ans);
                }
            }
        }
    }
    while(op.size()!=0){
        char ch = op.top();
        op.pop();
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        int p = cal(val1,ch,val2);
        val.push(p);
    }
    cout << val.top() << endl;
}