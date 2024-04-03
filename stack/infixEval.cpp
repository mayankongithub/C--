// #include<bits/stdc++.h>
// using namespace std;
// int pri(char c){
//     if(c=='+'|| c=='-'){
//         return 1;
//     }
//     else{
//         return 2;
//     }
// }
// int cal(int val1,char ch,int val2){
//     if(ch=='*'){
//         return (val1 * val2);
//     }
//     else if(ch=='-'){
//         return (val1 - val2);
//     }
//     else if(ch=='+'){
//         return (val1 + val2);
//     }
//     else{
//         return (val1 / val2);
//     }
// }
// int main(){
//     string str = "2+6*4/8-3";
//     stack<int>val;
//     stack<char>op;
//     for(int i=0;i<str.size();i++){
//         if(isdigit(str[i])){ 
//             val.push(str[i]-48);
//         }
//         else{
//             if(op.size()==0){
//                 op.push(str[i]);
//             }
//             else{
//                 if(pri(str[i]) > pri(op.top())){
//                     op.push(str[i]);
//                 }
//                 else{
//                     while(op.size()>0 && pri(str[i])<=pri(op.top())){
//                         char ch = op.top();
//                         op.pop();
//                         int val2 = val.top();
//                         val.pop();
//                         int val1 = val.top();
//                         val.pop();
//                         int p = cal(val1,ch,val2);
//                         val.push(p);
//                     }
//                     op.push(str[i]);
//                 }    
//             }
//         }
//     }
//     while(op.size()!=0){
//         char ch = op.top();
//         op.pop();
//         int val2 = val.top();
//         val.pop();
//         int val1 = val.top();
//         val.pop();
//         int p = cal(val1,ch,val2);
//         val.push(p);
//     }
//     cout << val.top() << endl;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int pri(char c){
//     if(c=='+'|| c=='-'){
//         return 1;
//     }
//     else{
//         return 2;
//     }
// }
// string cal(string val1,string val2,char ch){
//     string s=" ";
//     s.push_back(ch);
//     s += val1;
//     s += val2;
//     return s;
// }
// int main(){
//     string str = "7+9*4/8-3";
//     stack<string>val;
//     stack<char>op;
//     for(int i=0;i<str.size();i++){
//         if(isdigit(str[i])){ 
//             val.push(to_string(str[i]-48));
//         }
//         else{
//             if(op.size()==0){
//                 op.push(str[i]);
//             }
//             else{
//                 if(pri(str[i]) > pri(op.top())){
//                     op.push(str[i]);
//                 }
//                 else{
//                     while(op.size()>0 && pri(str[i])<=pri(op.top())){
//                         char ch = op.top();
//                         op.pop();
//                         string val2 = val.top();
//                         val.pop();
//                         string val1 = val.top();
//                         val.pop();
//                         string p = cal(val1,val2,ch);
//                         val.push(p);
//                     }
//                     op.push(str[i]);
//                 }    
//             }
//         }
//     }
//     while(op.size()!=0){
//         char ch = op.top();
//         op.pop();
//         string val2 = val.top();
//         val.pop();
//         string val1 = val.top();
//         val.pop();
//         string p = cal(val1,val2,ch);
//         val.push(p);
//     }
//     cout << val.top() << endl;
// }

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
string cal(string val1,string val2,char ch){
    string s=" ";
    s += val1;
    s += val2;
    s.push_back(ch);
    return s;
}
int main(){
    string str = "7+9*4/8-3";
    stack<string>val;
    stack<char>op;
    for(int i=0;i<str.size();i++){
        if(isdigit(str[i])){ 
            val.push(to_string(str[i]-48));
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
                        string val2 = val.top();
                        val.pop();
                        string val1 = val.top();
                        val.pop();
                        string p = cal(val1,val2,ch);
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
        string val2 = val.top();
        val.pop();
        string val1 = val.top();
        val.pop();
        string p = cal(val1,val2,ch);
        val.push(p);
    }
    cout << val.top() << endl;
}