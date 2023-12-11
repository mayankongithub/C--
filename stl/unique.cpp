// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n = 5;
//    int arr[n] = {2,2,3,4,5};
//    int *ptr=unique(arr,arr+n);
//    for(int i=0;i<ptr-arr;i++){
//     cout << arr[i] << " ";
//    }
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string str = "hii my name is mayank";
//     for(int i=0;i<str.length();i++){
//         if(i==0){
//             if(isupper(str[i])){
//                 break;
//             }
//             else{
//                 str[i] = toupper(str[i]);
//                 break;
//             }
//         }
//     }
//     cout << str;
// }
// // #include<bits/stdc++.h>
// // #include<string>
// // using namespace std;
// // int main(){
// //    string str = "Hii My name is mayank";
// //    for(int i=0;i<str.length();i++){
// //     if(i==0){
// //         str[i] = toupper(str[i]);
// //     }
// //     else if(str[i-1] == ' '){
// //         str[i] = toupper(str[i]);
// //     }
// //    }
// //    cout << str;

// // }
// #include<bits/stdc++.h>
// #include<string>
// using namespace std;
// int main(){
//    string str = "Hii My Name Is Mayank";
//    bool flag = false;
//    for(int i=0;i<str.length();i++){
//     if(i==0 && isupper(str[i])){
//         flag = true;
//     }
//     else if(str[i-1] == ' ' && !isupper(str[i])){
//         flag=false;
//         break;   
//     }
//    }
//    if(flag == true) cout << "true";
//    else cout << "false";

// }
// #include<bits/stdc++.h>
// using namespace std;
// int cal(string s){
//     int n = s.size();
//     stack<int>st;
//     for(int i=0;i<n;i++){
//         if(isdigit(s[i])){
//             st.push(s[i]-'0');
//         }
//         else if(s[i]!=' '){
//             int a1 = st.top();
//             st.pop();
//             int a2 = st.top();
//             st.pop();
//             switch(s[i]){
//                 case '+' : st.push(a2+a1);
//                            break;
//                 case '-' : st.push(a2-a1);
//                            break;
//                 case '*' : st.push(a2*a1);
//                            break;
//                 case '/' : st.push(a2/a1);
//                            break;
//             }
//         }
        
//     }
//     return st.top();
// }
// int main(){
//    string s = "2 3 1 * + 9 -";
//    cout << cal(s);

// }
// #include<bits/stdc++.h>
// using namespace std;
// int cal(string s){
//     int n = s.size();
//     stack<int>st;
//     for(int i=n-1;i>=0;i--){
//         if(isdigit(s[i])){
//             st.push(s[i]-'0');
//         }
//         else if(s[i]!=' '){
//             int a1 = st.top();
//             st.pop();
//             int a2 = st.top();
//             st.pop();
//             switch(s[i]){
//                 case '+' : st.push(a2+a1);
//                            break;
//                 case '-' : st.push(a1-a2);
//                            break;
//                 case '*' : st.push(a2*a1);
//                            break;
//                 case '/' : st.push(a1/a2);
//                            break;
//             }
//         }
        
//     }
//     return st.top();
// }
// int main(){
//    string s = "*+ 6 9 - 3 1";
//    cout << cal(s);
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
   int arr[3][3] = {1,2,3,4,5,6,7,8,9};
   int sum = 0;
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if(j == 3-1-i){
            //sum += arr[i][2-i];
            cout << arr[i][2-i] << " "; 
        }  
    }
    cout << endl;
   }
   //cout << sum;
}