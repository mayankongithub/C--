// REVERSE FIRST K ELEMENTS
// #include<bits/stdc++.h>
// using namespace std;
// void reversepart(queue<int>&q){
//     stack<int>st;
//     int n = q.size();
//     for(int i=0;i<2;i++){
//         int x = q.front();
//         st.push(x);
//         q.pop();
//     }
//     int k = 2;
    
//     while(st.size()!=0){
//         int x = st.top();
//         q.push(x);
//         st.pop();
//     }
//     for(int i=0;i<n-k;i++){
//         int x = q.front();
//         q.pop();
//         q.push(x);
//     }
// }
// void display(queue<int>&q){
//     int n = q.size();
//     for(int i=0;i<n;i++){
//         int x = q.front();
//         cout << x << " ";
//         q.pop();
//         q.push(x);
//     }
// }
// int main(){
//     queue<int>q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     q.push(60);
//     reversepart(q);
//     display(q);
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>ans;
    queue<int>q;
    int arr[10] = {3,-4,-7,30,7,-9,2,1,6,-1};
    for(int i=0;i<10;i++){
        if(arr[i]<0){
            q.push(i);
        }
    }
    int k = 3;
    int i = 0;
    while(i<=10-k){
        while(q.size() > 0 && q.front()<i) q.pop();
        if(q.size()==0 || q.front() >= i+k) ans.push_back(0);
        else ans.push_back(arr[q.front()]);
        i++;
    }
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
}
