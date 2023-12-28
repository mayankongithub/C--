// int main(){
//     string s = "aaaabbbccaaaccdddd";
//     cout << remove(s);
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[8] = {3,1,2,7,4,6,2,3};
//     int n = 8;
//     int newarr[n];
//     newarr[n-1] = -1;
//     stack<int>st;
//     st.push(arr[n-1]);
//     for(int i=n-2;i>=0;i--){
//         while(st.size()>0 && st.top()<=arr[i]){
//             st.pop();
//         }
//         if(st.size()==0) newarr[i]=-1;
//         else{
//             newarr[i] = st.top();
//         }
//         st.push(arr[i]);
//     }
//     for(int i=0;i<n;i++){
//         cout << newarr[i] << " ";
//     }
// }

// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     int arr[8] = {100,80,60,81,70,60,75,85};
//     int n = 8;
//     int newarr[n];
//     newarr[0] = -1;
//     stack<int>st;
//     st.push(0);
//     for(int i=1;i<n;i++){
//         while(st.size()>0 && arr[st.top()]<=arr[i]){
//             st.pop();
//         }
//         if(st.size()==0) newarr[i] = -1;
//         else{
//             newarr[i] = st.top();
//         }
//         st.push(i);
//     }
//     for(int i=0;i<n;i++){
//         newarr[i] = i - newarr[i];
//         cout << newarr[i] << " ";
//     }
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {10,6,8,5,11,9};