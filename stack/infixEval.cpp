#include<bits/stdc++.h>
using namespace std;
int pri(char c){
    if(c=='+'|| c=='-'){
        return 1;
    }
    else{
        return 2;
    }
}
int cal(int val1,char ch,int val2){
    if(ch=='*'){
        return (val1 * val2);
    }
    else if(ch=='-'){
        return (val1 - val2);
    }
    else if(ch=='+'){
        return (val1 + val2);
    }
    else{
        return (val1 / val2);
    }
}
int main(){
    string str = "2+6*4/8-3";
    stack<int>val;
    stack<char>op;
    for(int i=0;i<str.size();i++){
        if(isdigit(str[i])){ 
            val.push(str[i]-48);
        }
        else{
            if(op.size()==0){
                op.push(str[i]);
            }
            else{
                if(pri(str[i]) > pri(op.top())){
                    op.push(str[i]);
                }
                else{
                    while(op.size()>0 && pri(str[i])<=pri(op.top())){
                        char ch = op.top();
                        op.pop();
                        int val2 = val.top();
                        val.pop();
                        int val1 = val.top();
                        val.pop();
                        int p = cal(val1,ch,val2);
                        val.push(p);
                    }
                    op.push(str[i]);
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