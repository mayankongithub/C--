// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     for(int i=1;i<=n;i++){
//         cout << i;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5];
//     for(int i=0;i<5;i++){
//         cin >> arr[i];
//     }
//     for(int i=0;i<5;i++){
//         cout << arr[i]<< '\n';
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5];
//     for(int i=0;i<5;i++){
//         cin >> arr[i];
//     }
//     for(int i=0;i<5;i++){
//         if(arr[i]<35){
//             cout << i << '\t';
        
//         }
//     }
//     cout << sizeof(arr);   

// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     int arr[n];
//     int a=0;
//     for(int i=0;i<n;i++){
//         cout << "Enter the element at index[" << a << "] - ";
//         a++;
//         cin >> arr[i];
//     }
//     int sum = 0;
//     for(int i=0;i<n;i++){
//         sum += arr[i];
//     }
//     cout << sum;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int x;
//     cout << "Enter x : ";
//     cin >> x;
//     bool flag = false;
//     for(int i=0;i<5;i++){
//         if(arr[i]==x){
//             flag = true;
//         }
//     }
//     if(flag = true){
//         cout << x << " is present in the given array";
//     }
//     else{
//         cout << x << " x is not present in the given array";
//     }
// }
// #include<iostream>
// #include<limits.h>
// using namespace std;
// int main(){
//     int arr[5] = {12,324,33,24,15};
//     int max = INT_MIN;
//     int s_max = INT_MIN;
//     for(int i=0;i<5;i++){
//         if (max<arr[i]){
//             max = arr[i];
//         }
//         if(s_max<arr[i] && arr[i]!=max){
//             s_max = arr[i];
//         }
//     }
//     cout << max << endl;
//     cout << s_max;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int * ptr = arr;
//     cout << ptr << endl;
//     cout << arr << endl;
//     cout << &arr[0] << endl;
//     cout << &arr[1] << endl;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {1,2,3,4,5};
//     int *ptr = arr;
//     for(int i=0;i<5;i++){
//         cout << *ptr << '\t';//cout << i[arr] << '\t
//         ptr++;
//     }
//     ptr = arr;//pointing towards ist element
//     *ptr = 4;//ptr[0] = 4
//     ptr++;// ptr[0] + 1 = ptr[1]
//     *ptr = 8;//ptr[1] = 8
//     ptr--;//ptr[1] - 1 = ptr[0]
//     cout << endl;
//     for(int i=0;i<5;i++){
//         cout << *ptr<<'\t';
//         ptr++;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     int count = 0;
//     while(t!=0){
//         int n;
//         cin>>n;
//         count = 0;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         for(int i=0;i<n;i++){
//             if(arr[i]>=1000){
//                 count++;
//             }
//         }
//         cout<<count<<endl;
//         t--;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int t = 4;
//     int arr[4];
//     while(t--){
//         for(int i=0;i<5;i++){
//             cout << "Enter the element : ";
//             cin >> arr[i];
//         }
//     }
//     while(t--){
//         for(int i=0;i<5;i++){
//         cout << arr[i] << endl;;
//         }
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout << "Enter the value of a -> ";
//     cin >> a;
//     int b;
//     cout << "Enter the value of b -> ";
//     cin >> b;
//     char ch;
//     cout << "Enter the operator -> ";
//     cin >> ch;
//     switch(ch){
//         case '+' : cout << a+b;
//                   break;
//         case '-' : cout << a-b;
//                   break;
//         case '/' : cout << a/b;
//                   break;
//         case '*' : cout << a*b;
//                   break;
//         default : cout << "Enter the valid operator";
//                   break;
//     }

// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[4][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
//     int minr = 0,minc = 0;
//     int maxr = 3,maxc = 4;
//     while(minr<=maxr && minc<=maxc){
//         for(int i=minc;i<=maxc;i++){
//             cout << arr[minc][i] << " ";
//         }
//         minr++;
//         for(int j=minr;j<=maxr;j++){
//             cout << arr[j][minr] << " ";
//         }
//         maxc--;
//         for(int i=maxc;i<)
//     }
// }
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int n = 5;
//     int ans = 0;
//     int i = 0;
//     while(n!=0){
//         int bit = n & 1;
//         ans = (bit * pow(10,i) ) + ans;
//         n = n >> 1;
//         i++;
//     }
//     cout << ans <<endl;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n = 10;
//     int arr[32];
//     int i = 0;
//     while(n > 0){
//         arr[i] = n & 1;
//         n = n >> 1;
//         i++;
//     }
//     for(int k=i-1;k>=0;k--){
//         cout << arr[k];
//     }
//     cout << endl;
//     for(int j=0;j<i;j++){
//         if(arr[j] == 1){
//             arr[j] == 0;
//         }
//         else{
//             arr[j] == 1;
//         }
//     }
//     for(int g=0;g<i;g++){
//         cout << arr[g];
//     }
// }
// #include<iostream>
// using namespace std;
// void diff(int a,int b){
//     cout << a-b;
// }
// void sum(int a,int b){
//     cout << a+b;
// }
// void divide(int a,int b){
//     cout << a/b;
// }
// void mul(int a,int b){
//     cout << a*b;
// }
// int main(){
//     // int a,b;
//     // cout << "Enter the value of a -> ";
//     // cin >> a;
//     // cout << "Enter the value of b -> ";
//     // cin >> b;
//     // char op;
//     // cout << "Enter the operator -> ";
//     // cin >> op;
//     // void (*x[]) (int,int) = {sum,divide,mul,diff};
//     // (*x)(10,20);
//     for(int i=0;i<4;i++){
//         void (*x[]) (int,int) = {sum,divide,mul,diff};
//         (*x[i])(10,20);
//         cout << endl;
//     }
// }
// #include<iostream>
// #include<limits.h>
// using namespace std;
// int main(){
//     long long x = LONG_LONG_MAX;
//     cout << x;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     //int x = 0;
//     //int *ptr = &x;
//     int *ptr = (int*) calloc(25,sizeof(int));
//     cout << *ptr << " ";
//     * ptr++;
//     //x++;
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v(26,0);
//     string str = "mayanky";
//     char ch;
//     int n = str.size();
//     for(int i=0;i<n;i++){
//         ch = str[i];
//         int ascii = (int)(ch);
//         v[ascii-97]++;
//     }
//     int max = 0;
//     for(int i=0;i<26;i++){
//         if(max<v[i]){
//             max = v[i];
//         }
//     }
//     for(int i=0;i<26;i++){
//         if(v[i] == max){
//             char change = (char)(97+i);
//             cout << change << " ";
//         }
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     string str = "mayank";
//     int count = 0;
//     int n = str.size();
//     for(int i=0;i<n;i++){
//         if(i==0){
//             str[i] = str[i+1];
//             count++;
//         }
//         else{
//             if(str[i] == str[i+1] || str[i] == str[i-1]){
//             count++;
//         }
//             else{
//                 str[n-1] = str[i-1];
//                 //count++;
//             }
//         }
        
//     }
//     cout << count;
// }
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str = "good me";
//     for(int i=str.size();i>=0;i--){
//         cout << str[i] << " ";
//     }   
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int digit = 0;
//     int arr[] = {9,9,9};
//     for(int i=0;i<3;i++){
//         digit = digit * 10 + arr[i];
//     }
//     int rem;
//     digit = digit + 1;
//     int i = 0;
//     while(digit>0){
//         rem = digit%10;
//         arr[i] = rem;
//         i++;
//         rem = 0;
//         digit = digit/10;
//     }
//     for(int i=3;i>=0;i--){
//         cout << arr[i] << " ";
//     }
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v(26,0);
//     string str = "mayanky";
//     char ch;
//     int n = str.size();
//     for(int i=0;i<n;i++){
//         ch = str[i];
//         int ascii = (int)(ch);
//         v[ascii-97]++;
//     }
//     int max = 0;
//     for(int i=0;i<26;i++){
//         if(max<v[i]){
//             max = v[i];
//         }
//     }
//     for(int i=0;i<26;i++){
//         if(v[i] == max){
//             char change = (char)(97+i);
//             cout << change << " ";
//         }
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     //int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//     int n,m;
//     cout << "Enter the value of n -> ";
//     cin >> n;
//     cout << "Enter the value of m -> ";
//     cin >> m;
//     int arr[n][m];
//      int sum = 0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout << "Enter the element -> ";
//             cin >> arr[i][j];
//         }
//     }
//     // for(int i=0;i<3;i++){
//     //     for(int j=0;j<3;j++){
//     //         if(i+j==2 || j>=i && i!=0){
//     //             sum += arr[i][j];
//     //         }
//     //     }
//     // }
//     cout << sum;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             if(i!=j){
//                 int temp = arr[i][j];
//                 arr[i][j] = arr[j][i];
//                 arr[j][i] = temp;
//             }
//             else{
//                 arr[i][j] = arr[i][j];
//             }
            
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cin >> n >> m;
//     //int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     int arr[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout << "Enter the element -> ";
//             cin >> arr[i][j];
//         }
//     }

//        for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//         cout << endl;

//     }
//     for(int i=0;i<n;i++){
//         for(int j=i;j<m;j++){
//             swap(arr[i][j],arr[j][i]);
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
// //     cout << "Enter the value of n -> ";
// //     cin >> n;
// //     cout << "Enter the value of m -> ";
// //     cin >> m;
// //     int arr[n][m];
// //     for(int i=0;i<n;i++){
// //         for(int j=0;j<m;j++){
// //             cout << "Enter the element -> ";
// //             cin >> arr[i][j];
// //         }
// //     }
//     int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             int temp = arr[i][0];
//             arr[i][0] = arr[i][3-1];
//             arr[i][3-1] = temp;
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int i=0;
//     for(cout<<i<<"f ";cout<<i<<"s ";cout<<i<<"t "){
//         i++;
//         if(i>10) break;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// bool isPalindrome(int x) {
//     int n = x;
//     int sum = 0;
//     if(x<0){
//         return false;
//     }
//     else{
//         while(n!=0){
//             int rem = n%10;
//             sum = sum*10+rem;
//             n = n/10;
//         }
//     }
    
//     if(sum==x){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
// int main(){
//     cout << isPalindrome(-121);
// }
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int arr[] = {1,5,4,2};
//     sort(arr,arr+4);
//     for(int i=0;i<4;i++){
//         cout << arr[i] << " ";
//     }
// }
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int arr[] = {3,2,4};
//     int idx1 = 0;
//     int idx2 = 0;
//     for(int i=0;i<3;i++){
//         for(int j=1;j<3;j++){
//             if(arr[i]+arr[j]==6){
//                 idx1 = i;
//                 idx2 = j;
//                 break;
//             }
//         }
//     }
//     cout << idx1 << endl << idx2;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int x = 5;
//     int *t = &x;
//     cout << t;
// }
// #include<iostream>
// using namespace std;
// int print(int n,int count){
//     if(n==0){
//         return n;
//     }
    
//     return n + print(n-1,count+n);
// }
// int main(){
//     int n = 10;
//     int x = print(n,0);
//     cout << x;
// }
// #include<iostream>
// using namespace std;
// int factorial(int n){
//     if(n==0 || n==1) return 1;
//     return n*factorial(n-1);
// }
// int main(){
//     int n = 5;
//     int x = factorial(n);
//     cout << x;
// }
// #include<iostream>
// using namespace std;
// int fibo(int n){
//     if(n==1 || n==2) return 1;
//     return fibo(n-1) + fibo(n-2);
// }
// int main(){
//     int n = 10;
//     int x = fibo(n);
//     cout << x;
// }
// #include<iostream>
// using namespace std;
// int factorial(int n){
//     if(n==0 || n==1) return 1;
//     if(n>0){
//         return n*factorial(n-1);
//     }
//     else{
//         return n*factorial(n+1);
//     }
    
// }
// int main(){
//     int n = -5;
//     int x = factorial(n);
//     cout << x;
// }
// #include<iostream>
// using namespace std;
// int fibo(int n){
//     if(n==1 || n==0) return n;
//     else{
//         return (fibo(n-1) + fibo(n-2));
//     }
// }
// int main(){
//     int n = 10;
//     int i = 0;
//     while (i < n ){
//         cout << fibo(i) << " ";
//         i++;
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
void print(int arr[],int i,int n){
    if(i==n) return;
    cout << arr[i] << " ";
    print(arr,i+1,n);
} 
int main(){
    int arr[] = {1,2,3,4,5};
    print(arr,0,5);
}
// #include<iostream>
// using namespace std;
// int main(){
//     int x = 10;
//     for(int i=0;i<5;i++){
//         if(i%2==0)
//         continue;
//         x+=i;
//     }
//     cout << x;
// }