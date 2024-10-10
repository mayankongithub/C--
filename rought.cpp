// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    queue<int>q;
//    q.push(1);
//    q.push(2);
//    q.push(3);
//    q.push(4);
//    q.push(5);
//    q.push(6);
//    q.push(7);
//    q.push(8);
//    stack<int>st;
//    int half = q.size()/2;
//    for(int i=1;i<=half;i++){
//         st.push(q.front());
//         q.pop();
//     }
//     while(st.size()>0){
//         q.push(st.top());
//         st.pop();
//     }
//     for(int i=1;i<=half;i++){
//         st.push(q.front());
//         q.pop();
//     }
//     while(st.size()>0){
//         q.push(st.top());
//         q.push(q.front());
//         q.pop();
//         st.pop();
//     }
//     stack<int>r;
//     while(q.size()>0){
//         r.push(q.front());
//         q.pop();
//     }
//     while(r.size()>0){
//         q.push(r.top());
//         r.pop();
//     }

//     int n = q.size();
//     while(n!=0){
//         cout << q.front() << " ";
//         q.push(q.front());
//         q.pop();
//         n--;
//     }
// }
// #include<bits/stdc++.h>
// using namespace std;
// void printsub(string ans,string s){
//     if(s==""){
//         cout << ans << endl;
//         return;
//     }
//     char ch = s[0];
//     printsub(ans+ch,s.substr(1));
//     printsub(ans,s.substr(1));
// }
// int main(){
//     string s = "abc";
//     printsub("",s);

// }
// #include<bits/stdc++.h>
// using namespace std;
// void sub(vector<int>&v,vector<int>ans,int i){
//     if(i==v.size()){
//         for(int ele : ans){
//             cout << ele << " ";
//         }
//         cout << endl;
//         return;
//     }
//     sub(v,ans,i+1);
//     ans.push_back(v[i]);
//     sub(v,ans,i+1);
// }
// int main(){
//     vector<int>v = {1,2,3};
//     vector<int>ans;
//     sub(v,ans,0);
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {1,2,3,4};
//     int n = 4;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             for(int k=i;k<=j;k++){
//                 cout << arr[k];
//             }
//             cout << endl;
//         }
//     }
// }
// #include<bits/stdc++.h>
// using namespace std;
// void subarray(int arr[],int idx,vector<int>v,int n){
//     if(idx==n){
//         for(int i=0;i<v.size();i++){
//             cout << v[i] << " ";
//         }
//         cout << endl;
//         return;
//     }
//     subarray(arr,idx+1,v,n);
    
//     if(v.size()==0){
//         v.push_back(arr[idx]);
//         subarray(arr,idx+1,v,n);
//     }
    
//     else if(v[v.size()-1] == arr[idx-1]){
//         v.push_back(arr[idx]);
//         subarray(arr,idx+1,v,n);
//     }
// }
// int main(){
//     int arr[] = {1,2,3,4};
//     int n = 4;
//     vector<int>v;
//     subarray(arr,0,v,n);
// }
// #include<iostream>
// using namespace std;
// bool palin(string str,int i,int j){
//     if(i>=j){
//         return true;
//     }
//     else if(str[i]==str[j]){
//         return palin(str,i+1,j-1);
//     }
//     return false;
// }
// int main(){
//     string str = "aba";
//     cout << (palin(str,0,str.length()-1) ? "Palin" : "Not");
// }
// #include<iostream>
// using namespace std;
// int gcd(int a,int b){
//     if(b==0){
//         return a;
//     }
//     return gcd(b,a%b);

// }
// int main(){
//     cout << gcd(23,45);
// }
#include<iostream>
using namespace std;
void generate(int n,string ans){
    if(ans.size()==n){
        cout << ans << endl;
        return;
    }

    generate(n, ans+'0');
    if(ans.size()==0 || ans.back()=='0'){
        generate(n,ans+'1');
    }
}
int main(){
    int n = 4;
    generate(n,"");
}
