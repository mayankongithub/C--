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

// #include<iostream>
// #include<stack>
// using namespace std;

// //INSERT AT BOTTOM
// void insertatbottom(stack<int>&st,int val){
//     stack <int> temp;
//     while(st.size()){
//         int x = st.top();
//         temp.push(x);
//         st.pop();
//     }
//     st.push(val);
//     while(temp.size()){
//         int x = temp.top();
//         st.push(x);
//         temp.pop();
//     }
// }


// void print(stack<int>st){
//     stack <int> temp;
//     while(st.size()){
//         int x = st.top();
//         temp.push(x);
//         st.pop();
//     }
//     while(temp.size()){
//         cout << temp.top() << endl;
//         int x = temp.top();
//         st.push(x);
//         temp.pop();
//     }
// }


// void insertatindex(stack<int>&st , int val , int idx){
//     stack<int>temp;
//     while(st.size()>idx){
//         int x = st.top();
//         temp.push(x);
//         st.pop();
//     }
//     st.push(val);
//     while(temp.size()){
//         int x = temp.top();
//         st.push(x);
//         temp.pop();
//     }

// }
// int main(){
//     stack<int>st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);
//     //insertatbottom(st,80);
//     print(st);
//     // cout << endl;
//     // insertatindex(st,90,2);
//     // print(st);
//     // cout << endl;
// }
// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     int n = 8;
//     int arr[n] = {3,1,2,7,4,6,2,3};
//     int newarr[n];
//     newarr[n-1] = -1;
//     stack<int>st;
//     st.push(arr[n-1]);
//     for(int i=n-2;i>=0;i--){
//         while(st.size()>0 && st.top()<=arr[i]){
//             st.pop();
//         }
//         if(st.size()==0) newarr[i] = -1;
//         else{
//             newarr[i] = st.top();
//         }
//         st.push(arr[i]);
//     }
//     for(int i=0;i<n;i++){
//         cout << newarr[i] << " ";
//     }
//     cout << endl;
// }
#include<iostream>
#include<stack>
using namespace std;
bool balance(string s){
    if(s.length()%2!=0) return false;
    stack<char>st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='('){
            st.push(s[i]);
        }
        else{
            if(st.size()==0) return false;
            else{
                st.pop();
            }
        }
    }
    if(st.size()==0) return true;
    else{
        return false;
    }
}
int main(){
    string s = "(())";
    cout << balance(s);
}