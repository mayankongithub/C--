// #include<iostream>
// using namespace std;
// void display(int n){
//     if(n==0) return ;
//     cout << "GOOD MORNING \n";
//     display(n-1);
// }
// int main(){
//     int n;
//     cout << "Enter the value of n - > ";
//     cin >> n;
//     display(n);
// }
// #include<iostream>
// using namespace std;
// int fact(int n){
//     if(n==1 || n==0) return 1;
//     int ans = n*fact(n-1);
//     return ans;
// }
// int main(){
//     int n;
//     cout << "Enter the value of n - > ";
//     cin >> n;
//     int a = fact(n);
//     cout << a;
// }
// #include<iostream>
// using namespace std;
// void print(int n){
//     if(n==0) return;
//     cout << n << endl;
//     print(n-1);
// }
// int main(){
//     int n = 6;
//     print(n);
// }
// PRINT 1 TO N NUMBERS BY RECURSION
// #include<iostream>
// using namespace std;
// void print(int i,int n){
//     if(i>n) return;
//     cout << i << endl;
//     print(i+1,n);
// }
// int main(){
//     int n;
//     cout << "Enter the value of n -> ";
//     cin >> n;
//     print(1,n);
// }
// PRINT 1 TO N NUMBERS WITHOUT EXTRA PARAMETER
// #include<iostream>
// using namespace std;
// void print(int n){
//     if(n==0) return;
//     print(n-1);
//     cout << n << endl;
// }
// int main(){
//     int n;
//     cout << "Enter the value of n -> ";
//     cin >> n;
//     print(n);
// }
// PRINT THE SUM UP TO N WITH EXTRA PARAMETER
// #include<iostream>
// using namespace std;
// void SUM(int sum,int n){
//     if(n==0){
//         cout << sum;
//         return;
//     }
//     SUM(sum+n,n-1);
// }
// int main(){
//     int n = 5;
//     SUM(0,n);
// }
// PRINT THE SUM UP TO N
// #include<iostream>
// using namespace std;
// int SUM(int n){
//     if(n==0) return 0;
//     return n+SUM(n-1);
// }
// int main(){
//     int n = 5;
//     int sum = SUM(n);
//     cout << sum;
// }
// POWER FUNCTION USING RECURSION
// #include<iostream>
// using namespace std;
// void power(int a,int b){
//     int p = 1;
//     for(int i=1;i<=b;i++){
//         p *= a;
//     }
//     cout << p;
// }
// int powrec(int a,int b){
//     if(b==0) return 1;
//     return a*powrec(a,b-1);
// }
// int main(){
//     power(3,4);
//     cout << endl;
//     int c = powrec(3,4);
//     cout << c;
// }
// FIBONACCI SERIES USING RECURSION
// #include<iostream>
// using namespace std;
// int fiborec(int n){
//     if(n==1 || n==2) return 1;
//     return fiborec(n-1) + fiborec(n-2);
// }
// int main(){
//     int n = 11;
//     int c = fiborec(n);
//     cout << c;

// }
// #include<iostream>
// using namespace std;
// int pow(int a,int b){
//     if(b==0) return 1;
//     if(b%2==0){
//         int ans = pow(a,b/2);
//         return ans*ans;
//     }
//     else{
//         int ans = pow(a,b/2) * a;
//         return ans;
//     }
// }
// int main(){
//     cout << pow(3,4);
// }
// MAZE PATH
// #include<iostream>
// using namespace std;
// int maze(int sr,int sc,int er,int ec){
//     if(sr>er || sc>ec) return 0;
//     if(sr==er && sc==ec) return 1;
//     int right = maze(sr,sc+1,er,ec);
//     int down = maze(sr+1,sc,er,ec);
//     int total = right + down;
//     return total;
// }
// int main(){
//     int t = maze(0,0,2,2);
//     cout << t;
// }
// ZIG ZAG
// #include<iostream>
// using namespace std;
// void zigzag(int n){
//     if(n==0) return;
//     cout << n;
//     zigzag(n-1);
//     cout << n;
//     zigzag(n-1);
//     cout << n; 
// }
// int main(){
//     int n;
//     cout << "enter the number n -> ";
//     cin >> n;
//     zigzag(n);
// }
// TOWER OF HAANOI
// #include<iostream>
// using namespace std;
// void hannoi(int n,char source,char helper,char destination){
//     if(n == 0) return;
//     hannoi(n-1,source,destination,helper);
//     cout << source << " -> " << destination << endl;
//     hannoi(n-1,helper,source,destination);

// }
// int main(){
//     int n = 4;
//     hannoi(n,'A','B','C');
// }
// PRINTING THE LARGEST ELEMENT OF AN ARRAY USING RECURSION
// #include<iostream>
// using namespace std;
// int printmax(int arr[],int n,int max,int i){
//     if(i==n) return max;
//     if(max<arr[i]){
//         max = arr[i];
//     }
//     printmax(arr,n,max,i+1);
// }
// int main(){
//     int arr[] = {1,55,3,4,5};
//     int max = 0;
//     int n = 5;
//     cout << printmax(arr,n,max,0);
// }
// #include<iostream>
// using namespace std;
// void remove(string s,string news,int i){
//     if(i==s.size()){
//         cout << news << endl;
//         return;
//     }
//     char ch = s[i];
//     if(ch=='a') remove(s,news,i+1);
//     else remove(s,news+ch,i+1);
// }
// int main(){
//     string s = "mayank sharma";
//     string news = "";
//     remove(s,news,0);
// }
// #include<iostream>
// #include<string>
// using namespace std;
// void subset(string ans,string original){
//     if(original==""){
//         cout << ans << endl;
//         return;
//     }
//     char ch = original[0];
//     subset(ans,original.substr(1));
//     subset(ans+ch,original.substr(1));
// }
// int main(){
//     string str = "abc";
//     subset("",str);
// }
// #include<iostream>
// #include<string>
// #include<vector>
// using namespace std;
// void subset(string ans,string original,vector<string>& v,bool flag){
//     if(original==""){
//         v.push_back(ans);
//         return;
//     }
//     char ch = original[0];
//     if(original.length()==1){
//         if(flag==true)subset(ans+ch,original.substr(1),v,true);
//         subset(ans,original.substr(1),v,true);
//         return;
//     }
//     char next = original[1];
//     if(ch==next){
//         if(flag == true) subset(ans+ch,original.substr(1),v,true);
//         subset(ans,original.substr(1),v,false);
//     }
//     else{
//         if(flag==true)subset(ans+ch,original.substr(1),v,true);
//         subset(ans,original.substr(1),v,true);
//     }
    
// }
// int main(){
//     string str = "abc";
//     vector<string>v;
//     subset("",str,v,true);
//     for(int i=0;i<v.size();i++){
//         cout << v[i] << " ";
//     }
// }
// #include<iostream>
// #include<string>
// using namespace std;
// int subset(string ans,string original,bool flag,int sum){
//     if(original==""){
//         cout << ans << " ";
//         if(ans.length()==3)sum++;
//     }
//     char ch = original[0];
//     if(original.length()==1){
//         if(flag==true)subset(ans+ch,original.substr(1),true,sum);
//         subset(ans,original.substr(1),true,sum);
//         return 0;
//     }
//     char next = original[1];
//     if(ch==next){
//         if(flag == true) subset(ans+ch,original.substr(1),true,sum);
//         subset(ans,original.substr(1),false,sum);
//     }
//     else{
//         if(flag==true)subset(ans+ch,original.substr(1),true,sum);
//         subset(ans,original.substr(1),true,sum);
//     }
//     return sum;
    
// }
// int main(){
//     string str = "abc";
//     int sum = 0;
//     cout << subset("",str,true,sum);

// }
// #include<iostream>
// #include<vector>
// using namespace std;
// void subset(int arr[],int n,int i,vector<int> v){
//     if(i==n){
//         for(int i=0;i<5;i++){
//             cout << v[i] << " ";
//         }
//         return;
//     }
//     subset(arr,n,i+1,v);
//     v.push_back(arr[i]);
//     subset(arr,n,i+1,v);
// }
// int main(){
//     int arr[] = {1,2,3,4,5};
//     vector<int>v;
//     subset(arr,5,0,v);
    
// }
//PERMUTATION
// #include<iostream>
// using namespace std;
// void permu(string original,string ans){
//     if(original==""){
//         cout<<ans<<endl;
//         return;
//     }
//     for(int i=0;i<original.length();i++){ 
//         char ch = original[i];
//         string left = original.substr(0,i);
//         string right = original.substr(i+1);
//         permu(left+right , ans+ch);
//     }
// }
// int main(){
//     string str = "abc";
//     permu(str,"");
//}
// #include<iostream>
// #include<vector>
// using namespace std;
// void subset(int arr[],int n,vector<int>v,int i){
//     if(i==n){
//         for(int i=0;i<v.size();i++){
//             cout << v[i] << " ";
//         }
//         cout << endl;
//         return;
//     }

//     subset(arr,n,v,i+1);
//     v.push_back(arr[i]);
//     subset(arr,n,v,i+1);
// }
// int main(){
//     int arr[] = {1,2,3,4};
//     vector<int>v;
//     subset(arr,4,v,0);
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// void subarray(int arr[],int n,vector<int>v,int i){
//     if(i==n){
//         for(int i=0;i<v.size();i++){
//             cout << v[i] << " ";
//         }
//         cout << endl;
//         return;
//     }

//     subarray(arr,n,v,i+1);
//     if(v.size()==0){
//         v.push_back(arr[i]);
//         subarray(arr,n,v,i+1);
//     }
//     else if(arr[i-1]==v[v.size()-1]){
//         v.push_back(arr[i]);
//         subarray(arr,n,v,i+1);
//     }
    
// }
// int main(){
//     int arr[] = {1,2,3,4};
//     vector<int>v;
//     subarray(arr,4,v,0);
// }
// #include<iostream>
// #include<string>
// using namespace std;
// void check(string str){
//     bool flag = false;
//     int i=0,j=str.size()-1;
//     while(i<j){
//         if(str[i]==str[j]){
//             flag = true;
//             i++;
//             j--;
//         }
//         else{
//             flag = false;
//             break;
//         }
//     }
//     if(flag == true){
//         cout << "palindrome";
//     }
//     else{
//         cout << "not a palindrome";
//     }
// }
// int main(){
//     string str = "physics";
//     check(str);
// }
// HCF USING RECURSION
// #include<iostream>
// using namespace std;
// void gcm(int a,int b){
//     if(a==0){
//         cout << b;
//         return;
//     }
//     gcm(b%a,a);
// }
// int main(){
//     int a = 23;
//     int b = 45;
//     gcm(a,b);
// }
//BINARY STRING WITHOUT CONSECUTIVE 1'S
// #include<iostream>
// using namespace std;
// void generate(string str,int n){
//     if(str.length()==n){
//         cout << str << endl;
//         return;
//     }
//     generate(str+'0',n);
//     if(str.length()==0){
//         generate(str+'1',n);
//     }
//     else if(str[str.length()-1]=='0'){
//         generate(str+'1',n);
//     }
    
    
// }
// int main(){
//     int n = 3;
//     generate("",n);
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// void sum(int arr[],int n,vector<int>v,int target,int idx){
//     if(target==0){
//         for(int i=0;i<v.size();i++){
//             cout << v[i];
//         }
//         cout << endl;
//     }
//     if(target<0) return;
//     for(int i=idx;i<n;i++){
//         v.push_back(arr[i]);
//         sum(arr,n,v,target-arr[i],i);
//         v.pop_back();
//     }
// }
// int main(){
//     int arr[] = {2,3,5};
//     vector<int>v;
//     sum(arr,3,v,8,0);
// }
// #include<iostream>
// using namespace std;
// void print(string str,int n,int o,int c){
//     if(c==n){
//         cout << str << endl;
//         return;
//     }
//     if(o<n){
//         print(str+'(',n,o+1,c);
//     }
//     if(c<o){
//         print(str+')',n,o,c+1);
//     }
// }
// int main(){
//     print("",3,0,0);
// }
// #include<iostream>
// using namespace std;
// int kth(int n,int k){
//     if(n==1) return 0;
//     if(k%2==0){
//         int ans = kth(n-1,k/2);
//         if(ans==0) return 1;
//         else return 0;
//     }
//     else{
//         return (n-1,k/2+1);
//     }
// }
// int main(){
//     int n = 1;
//     int k = 1;
//     cout << kth(n,k);
// }
// #include<iostream>
// using namespace std;
// string countandsay(int n){
//     if(n==1){
//         return "1";
//     }
//     string str = countandsay(n-1);
//     string ztr = "";
//     int freq = 1;
//     char ch = str[0];
//     char dh;
//     for(int i=1;i<str.length();i++){
//         dh = str[i];
//         if(ch==dh){
//             freq++;
//         }
//         else{
//             ztr += (to_string(freq) + ch);
//             freq = 1;
//             ch = dh;

//         }
//     }
//     ztr += (to_string(freq) + ch);
//     cout << ztr;
    
// }
// int main(){
//     int n = 332251;
//     string stre =  countandsay(n);
//     cout << stre;
// }
// #include<iostream>
// #include<string>
// using namespace std;
// void permu(string str,string ans){
//     if(str.size()==0){
//         cout << ans << endl;
//         return;
//     }
//     for(int i=0;i<str.size();i++){
//         char ch = str[i];
//         string right = str.substr(0,i);
//         string left = str.substr(i+1);
//         permu(right+left,ans+ch);
//     }
// }
// int main(){
//     string str = "abc";
//     permu(str,"");
// }


// #include<iostream>
// using namespace std;
// void generate(string str,int n){
//     if(str.length()==n){
//         cout << str << endl;
//         return;
//     }
//     generate(str+'0',n);
//     if(str.length()==0){
//         generate(str+'1',n);
//     }
//     else if(str[str.length()-1]=='0'){
//         generate(str+'1',n);
//     }
// }
// int main(){
//     int n = 3;
//     generate("",n);
// }


// #include<bits/stdc++.h>
// using namespace std;
// void sub(int arr[],int i,vector<int>v){
//     if(i==3){
//         for(int i=0;i<v.size();i++){
//             cout << v[i]; 
//         }
//         cout << endl;
//         return;
//     }
//     sub(arr,i+1,v);
//     v.push_back(arr[i]);
//     sub(arr,i+1,v);
// }
// int main(){
//     int arr[3] = {1,2,3};
//     vector<int>v;
//     sub(arr,0,v);
// }
// #include<iostream>
// using namespace std;
// void skip(string &str,int i,string ori){
//     if(i==str.size()){
//         cout << ori;
//         return;
//     }
//     if(str[i]=='a'){
//         skip(str,i+1,ori);
//     }
//     else skip(str,i+1,ori+str[i]);
// }
// int main(){
//     string str = "mayank";
//     skip(str,0,"");
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// void subset(string str,string ans,vector<string>&v,bool flag){
//     if(str==""){
//         v.push_back(ans);
//         return;
//     }
//     char ch = str[0];
    
//     if(str.size()==1){
//         if(flag==true) subset(str.substr(1),ans,v,true);
//         subset(str.substr(1),ans+ch,v,true);
//         return;
//     }
//     char dh = str[1];
//     if(ch==dh){
//         subset(str.substr(1),ans,v,false);
//         if(flag==true) subset(str.substr(1),ans+ch,v,true);
//     }
//     else{
//         subset(str.substr(1),ans,v,true);
//         if(flag==true) subset(str.substr(1),ans+ch,v,true);
//     }
// }
// int main(){
//     vector<string>v;
//     string str = "aabc";
//     subset(str,"",v,true);
//     for(int i=0;i<v.size();i++){
//         cout << v[i] << endl;
//     }
// }
// #include<bits/stdc++.h>
// #include<vector>
// using namespace std;
// void sub(int arr[],int n,int i,vector<int>v){
//     if(i==5 ){
//         if(v.size()==3){
//             for(int i=0;i<v.size();i++){
//                 cout << v[i];
//             }
//             cout << endl;
//         }
//         return;
//     }
//     sub(arr,n,i+1,v);
//     v.push_back(arr[i]);
//     sub(arr,n,i+1,v);
// }
// int main(){
    
//     int arr[] = {1,2,3,4,5};
//     vector<int>v;
//     int i = 0;
//     sub(arr,5,i,v);
// }

// #include<iostream>
// using namespace std;
// int find(int arr[],int n,int i,int target){
//     if(i==n) return -1;
//     if(arr[i]==target){
//         return i;
//     }
//     return find(arr,n,i+1,target);
// }
// int main(){
//     int arr[] = {1,2,3,4,5};
//     cout << find(arr,5,0,3);
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// void rev(int arr[],int n,int i){
//     if(i==n){
//         return;
//     }
//     rev(arr,n,i+1);
//     cout << arr[i] << " ";
// }
// int main(){
//     int arr[] = {1,2,3,4,5};
//     rev(arr,5,0);
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// void printsubset(int arr[],int n,int i,vector<int>ans){
//     if(i==n){
//         for(int i=0;i<ans.size();i++){
//             cout << ans[i] << " ";
//         }
//         cout << endl;
//         return;
//     }
//     printsubset(arr,n,i+1,ans);
//     if(i==0 || ans.size()==0 || arr[i-1]==ans[ans.size()-1]){
//         ans.push_back(arr[i]);
//         printsubset(arr,n,i+1,ans);
//     }
// }
// int main(){
//     int arr[] = {1,2,3,4};
//     int n = 4;
//     vector<int>v;
//     printsubset(arr,n,0,v);
// }

// #include<iostream>
// using namespace std;
// bool palin(string s){
//     int i = 0;
//     int j = s.size()-1;
//     while(i<j){
//         if(s[i]!=s[j]) return false;
//         i++;
//         j--;
//     }
//     return true;
// }
// int main(){
//     string s = "amanaplanacanalpanama";
//     cout << palin(s);
// }

// #include<iostream>
// using namespace std;
// int gcd(int a,int b){
//     if(a==0) return b;
//     else return gcd(b%a,a);
// }
// int main(){
//     int a = 27;
//     int b = 45;
//     cout << gcd(a,b); 
// }
// #include<iostream>
// using namespace std;
// void generate(string str,int i){
//     if(i==4){
//         cout << str << endl;
//         return;
//     }
//     generate(str+'0',i+1);
//     if(i==0 || str[str.length()-1]!='1'){
//         generate(str+'1',i+1);
//     }
// }
// int main(){    
//     string str = " ";
//     generate(str,0);
// }
// #include<iostream>
// using namespace std;
// class node{
// public:
//     int val;
//     node* next;
//     node(int val){
//         this->val = val;
//         next = NULL;
//     }
// };
// int main(){
//     node* a = new node(10);
//     node* b = new node(20);
//     node* c = new node(30);
//     node* d = new node(40);
//     node* e = new node(50);
//     a->next = b;
//     b->next = c;
//     c->next = d;
//     d->next = e;

//     int val = 100;
//     int idx = 0;
//     node* temp = a;
//     node* val1 = new node(val);
//     for(int i=0;i<idx;i++){
//         temp = temp->next;
//     }
//     val1->next = temp->next;
//     temp->next = val1;
//     temp = a;
//     while(temp){
//         cout << temp->val << " ";
//         temp = temp->next;
//     }

// }
// #include<iostream>
// using namespace std;
// void gene(string s,int open,int close,int n){
//     if(close==n){
//         cout << s << endl;
//         return;
//     }
//     if(open<n) gene(s+'(',open+1,close,n);
//     if(close<open) gene(s+')',open,close+1,n);
// }
// int main(){
//     int n = 3;
//     gene("",0,0,n);
// }
// #include<iostream>
// using namespace std;
// void print(string name,int n,int i){
//     if(i == n){
//         return;
//     }
//     cout << name << endl;
//     print(name,n,i+1);
// }
// int main(){
//     string name = "mayank";
//     print(name,5,0);
// }
// #include<iostream>
// using namespace std;
// void print(int n,int i){
//     if(i > n){
//         return;
//     }
//     print(n,i+1);
//     cout << i << endl;
// }
// int main(){
//     int n = 10;
//     print(n,1);
// }
// #include<iostream>
// using namespace std;
// int main(){
//     string str = "  -43 words";
//     int n = 0;
//     bool flag = false;
//     for(int i=0;i<str.length();i++){
//         if(str[i]=='-'){
//             flag = true;
//             continue;
//         }
//         else if(str[i] == ' '){
//             continue;
//         }
//         else if(str[i]==' ' && str[i-1]==' '){
//             continue;
//         }
//         else if(!isdigit(str[i])&&str[i]!='-'){
//             break;
//         }


//         n = n*10 + (str[i]-'0');
//     }
//     if(flag == true){
//          n = n * -1;
//     }
//     cout << n;
// }
// #include<iostream>
// using namespace std;
// void sum(int n,int i,int add){
//     if(i>n){
//         cout << add;
//         return;
//     }
//     sum(n,i+1,add+i);
// }
// int main(){
//     int n = 5;
//     sum(n,0,0);
// }
// #include<iostream>
// using namespace std;
// int sum(int n){
//     if(n==0){
//         return 0;
//     }
//     return n + sum(n-1);
// }
// int main(){
//     int n = 5;
//     cout << sum(n);
// }

// #include<iostream>
// #include<algorithm>
// using namespace std;
// void reverse(int i,int arr[],int n){
//     if(i>=n/2){
//         return ;
//     }
//     swap(arr[i],arr[n-i-1]);
//     reverse(i+1,arr,n);
// }
// int main(){
//     int arr[] = {1,2,3,4,5};
//     int n = 5;
//     reverse(0,arr,n);
//     for(int i=0;i<n;i++){
//         cout << arr[i] << " ";
//     }
// }
// #include<iostream>
// #include<algorithm>
// using namespace std;
// bool palin(string str,int i){
//     int n = str.size();
//     if(i>=n/2){
//         return true;
//     }
    
//     if(str[i]!=str[n-i-1]){
//         return false;
//     }
//     return palin(str,i+1);
// }
// int main(){
//     string str = "madam";
//     int n = str.length();
//     cout << palin(str,0);
// }
#include<iostream>
using namespace std;
int fibo(int n){
    if(n==1 || n==2) return n;
    return fibo(n-1) + fibo(n-2);
}
int main(){
    int n = 10;
    cout << fibo(n);
}