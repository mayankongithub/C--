#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[8] = {3,1,2,7,4,6,2,3};
    int n = 8;
    int newarr[n];
    newarr[n-1] = -1;
    stack<int>st;
    st.push(arr[n-1]);
    //pop
    //insert
    //push
    for(int i=n-2;i>=0;i--){
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }
        if(st.size()==0) newarr[i] = -1;
        else{
            newarr[i] = st.top();
        }
        st.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout << newarr[i] << " ";
    }
    cout << endl;
}


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int>v(4,-1);
//     stack<int>st;
//     int arr[4] = {1,3,2,4};
//     for(int i=0;i<4;i++){
//         while(!st.empty() && arr[st.top()] < arr[i]){
//             v[st.top()] = arr[i];
//             st.pop();
//         }
//         st.push(i);
//     }
//     for(int i=0;i<4;i++){
//         cout << v[i] << " ";
//     }
// }


// nse
// #include<bits/stdc++.h>
// using namespace std; 
// int main(){
//     stack<int>st;
//     int arr[] = {7,9,12,10,14,8,3,6,9};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     vector<int>v(n,-1); 
//     for(int i=0;i<n;i++){
//         while(!st.empty() && arr[st.top()] > arr[i]){
//             v[st.top()] = arr[i];
//             st.pop();
//         }
//         st.push(i);
//     }
//     for(int i=0;i<n;i++){
//         cout << v[i] << " ";
//     }
// }


// #include<bits/stdc++.h>
// using namespace std; 
// int main(){
//     stack<int>st;
//     int arr[] = {100,80,55,70,60,75,85};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     vector<int>v(n,-1);
//     for(int i=n-1;i>=0;i--){
//         while(!st.empty() && arr[st.top()] < arr[i]){
//             v[st.top()] = i;
//             st.pop();
//         }
//         st.push(i);
//     }
//     for(int i=0;i<n;i++){
//         cout << i - v[i] << " ";
//     }
// // }
