 // #include<iostream>
// using namespace std;
// int fact(int n){
//     if(n==1 || n==0) return 1;
//     int f = n*fact(n-1);
//     return f;
// }
// int main(){
//     int n = 0;
//     int x = fact(n);
//     cout << x;
// }
// #include<iostream>
// using namespace std;
// int print(int n){
//     if(n==0) return 1;
//     cout << n;
//     print(n-1);
// }
// int main(){
//     int n = 5;
//     print(n);
// }
// #include<iostream>
// using namespace std;
// int sum1ton(int sum,int n){
//     if(n==0){
//         cout << sum;
//     }
//     sum1ton(sum+n,n-1);
// }
// int main(){
//     int n = 5;
//     sum1ton(0,n);
// }
// #include<iostream>
// using namespace std;
// int sum1ton(int n){
//     if(n==0) return 0;

//     return n+sum1ton(n-1);
// }
// int main(){
//     int n = 5;
//     int x = sum1ton(n);
//     cout << x;
// }
// #include<iostream>
// #include<math.h>
// using namespace std;
// int oddsum(int a,int b,int &sum){
//     if(a>b) return 0;
//     if(a==b){
//         if(a%2!=0){
//             sum += a;
//         }
//         return sum;
//     }

//     if(a%2!=0){
//         sum += a;
//         oddsum(a+2,b,sum);
//     }
//     else{
//         oddsum(a+1,b,sum);
//     }
// }
// int main(){
//     int a = 2;
//     int b = 9;
//     int sum = 0;
//     int x = oddsum(a,b,sum);
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
// int facto(int n){
//     if(n==0) return 1;
//     return n*facto(n-1);
// }
// int main(){
//     int n = 5;
//     int x = facto(n);
//     cout << x;
// }
//POWER FUNCTION
// #include<iostream>
// #include<math.h>
// using namespace std;
// int power(int a,int b){
//     int ans;
//     if(b==1) return a;
//     if(b%2!=0){
//         ans = power(a,b/2);
//         return ans*ans*a;
//     }
//     if (b%2==0) ans = power(a,b/2);
//     return ans*ans;
// }
// int main(){
//     cout << power(3,8);
//     cout << endl << pow(3,8);
// }
// STAIR PATH
// #include<iostream>
// using namespace std;
// unsigned long stairs(unsigned long n){
//     if(n == 2) return 2;
//     if(n == 1) return 1;
//     return stairs(n-1) + stairs(n-2);
// }
// int main(){
//     unsigned long n = 50;
//     cout << stairs(n);
// }
// #include<iostream>
// #include<string>
// using namespace std;
// int mazepath(int sr,int sc,int er,int ec){
//     if(sr>er || sc>ec) return 0;
//     if(sr==er && sc==ec) return 1;
//     int rightway = mazepath(sr,sc+1,er,ec);
//     int downway = mazepath(sr+1,sc,er,ec);
//     return rightway+downway;
// }
// void printpath(int sr,int sc,int er,int ec,string s){
//     if(sr>er || sc>ec)return;
//     if(sr==er && sc==ec){
//         cout << s << endl;
//         return;
//     }
//     printpath(sr,sc+1,er,ec,s+'R');
//     printpath(sr+1,sc,er,ec,s+'D');
// }
// int mazepath2(int er,int ec){
//     if(er<1 || ec<1) return 0;
//     if(er==1 && ec==1) return 1;
//     int rightway = mazepath2(er,ec-1);
//     int downway = mazepath2(er-1,ec);
//     return rightway + downway;
// }
// void printpath2(int er,int ec,string s){
//     if(er<1 || ec<1) return;
//     if(er==1 && ec==1){
//         cout << s << endl;
//         return;
//     };
//     printpath2(er,ec-1,s+'R');
//     printpath2(er-1,ec,s+'D');
// }
// int main(){
//     //cout << mazepath(0,0,4,4) << endl;
//     //printpath(1,1,3,3,"");
//     cout << mazepath2(3,4) << endl;
//     printpath2(3,4,"");

// }
#include<iostream>
using namespace std;
void zigzag(int n){
    if(n==0) return;
    cout << n;
    zigzag(n-1);
    cout << n;
    zigzag(n-1);
    cout << n;
}
int main(){
    zigzag(2);
}