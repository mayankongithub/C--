// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int name = 4;
//     int mail = 3;
//     if(name && mail){
//         cout << "true";
//     }
//     else cout << "false";
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int x = 5292;
    int square = x*x;
    int store = square;
    int count = 0;
    while(store>0){
        count++;
        store = store/10;
    }
    int d;
   
    if(count % 2 == 0) {
        d = pow(10, count / 2);  
    } 
    else {
        d = pow(10, (count / 2) + 1);
    }
    int a = square / d;
    int b = square % d;
    cout << a << " " << b << endl;
    if(a+b==x){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int>v = {4,2,7,6,9};
//     priority_queue<int,vector<int>,greater<int>>pq;
//     for(int i : v) {
//         pq.push(i);
//     }
//     while(pq.size()>1){
//         int a = pq.top();
//         pq.pop();
//         int b = pq.top();
//         pq.pop();
//         pq.push(a+b);
        
//     }
//     cout << pq.top();
// }

