#include<bits/stdc++.h>
using namespace std;
int cal(int val1,int val2,char ch){
    if(ch=='+'){
        return (val1+val2);
    }
    else if(ch=='-'){
        return (val1-val2);
    }
    else if(ch=='*'){
        return (val1*val2);
    }
    else{
        return (val1/val2);
    }
}
int main(){
    string str = "79+4*8/3-";
    int n = str.size();
    stack<int>val;
    for(int i=0;i<n;i++){
        if(isdigit(str[i])){
            val.push(str[i]-48);
        }
        else{
            int val2 = val.top();
            val.pop();
            int val1 = val.top();
            val.pop();
            char ch = str[i];
            int ans = cal(val1,val2,ch);
            val.push(ans);
        }
    }
    cout << val.top() << endl;
}