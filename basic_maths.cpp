// PRIME NUMBER
// #include<iostream>
// #include<math.h>
// using namespace std;
// int fact = 0;
// bool prime(int n){
//     bool flag = true;
//     for(int i=2;i<=sqrt(n);i++){
//         if(n%i==0){
//             flag = false;
//             fact = i;
//             break;
//         }
//     }
//     if(flag){
//         cout << "prime";
//     }
//     else{
//         cout << "not prime" << fact;
//     }
// }
// int main(){
//     int n = 13;
//     prime(n);
// }
// FACTORS
// #include<iostream>
// #include<math.h>
// using namespace std;
// void findfactor(int n){
//     for(int i=1;i<sqrt(n);i++){
//         if(n%i==0) cout << i << " ";
//     }
//     for(int i=sqrt(n);i>=1;i--){
//         if(n%i==0) cout << n/i << " ";
//     }
// }
// int main(){
//     findfactor(2);
// }
// #include<iostream>
// #include<math.h>
// using namespace std;
// void s(int n){
//     int sum = 0;
//     int x = n;
//     for(int i=1;i<sqrt(n);i++){
//         if(n%i==0){
//             sum = sum + i;
//             cout << i << " ";
//         }
//     }
//     for(int i=sqrt(n);i>1;i--){
//         if(n%i==0){
//             cout << n/i << " ";
//             sum = sum + n/i;
//         }
//     }
//     if(x==sum){
//         cout << endl << "SAME";
//     }
//     else{
//         cout << endl << "NOT SAME";
//     }
    
// }
// int main(){
//     int n = 28;
//     s(n);
// }
// SUM OF ALL THE PRIME NUMBER TILL N
// #include<iostream>
// #include<math.h>
// using namespace std;
// bool isprime(int n){
//     if(n==1) return false;
//     for(int i=2;i<=sqrt(n);i++){
//         if(i%n==0){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     int n = 49;
//     int sum = 0;
//     for(int i=1;i<sqrt(n);i++){
//         if(n%i==0 && isprime(i)){
//             int m = n;
//             while(m%i==0){
//                 sum += i;
//                 m /= i;
//             }
//         }
//     }
//     for(int i=sqrt(n);i>0;i--){
//         if(n%i==0 && isprime(n/i)){
//             int m = n;
//             while(m%(n/i)==0){
//                 sum += (n/i);
//                 m /= (n/i);
//             }
//         }
//     }
//     cout << sum;
// }
// LEETCODE 204 COUNT PRIME BYE SIEVE METHOD
// #include<iostream>
// #include<vector>
// #include<math.h>
// using namespace std;
// void fillsieve(vector<int>&sieve){
//     int n = sieve.size()-1;
//     for(int i=2;i<=sqrt(n);i++){
//         for(int j=i*2;j<=n;j+=i){
//             sieve[j] = 0;
//         }
//     }
// }
// int main(){
//     int n = 100;
//     int count = 0;
//     vector<int>sieve(n,1);
//     fillsieve(sieve);
//     sieve[0] = 0;
//     sieve[1] = 0;
//     for(int i=0;i<sieve.size();i++){
//         if(sieve[i] == 1){
//             count++;
//         }
//     }
//     cout << count;
// }
// #include<iostream>
// #include<math.h>
// using namespace std;
// bool isprime(int n){
//     if(n==1) return false;
//     for(int i=2;i<=sqrt(n);i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     int arr[1] = {27};
//     int pro = 1;
//     int m = 0;
//     int count = 0;
//     for(int i=0;i<1;i++){
//         if(isprime(arr[i])){
//             pro = pro*arr[i];
//         }
//     }
//     if(pro==2){
//         count = 1;
//     }
//     else{
//         for(int i=1;i<sqrt(pro);i++){
//             if(pro%i==0){
//                 m = i;
//                 if(isprime(m)){
//                     count++;
//                 }
//             }
//         }
//         for(int i=sqrt(pro);i>0;i--){
//             if(pro%i==0){
//                 m = arr[i]/i;
//                 if(isprime(m)){
//                     count++;
//                 }
//             }
//         }
//     }
//     cout << pro << endl << count;
// }
// COPY & PASTE
#include<iostream>
#include<math.h>
using namespace std;
int gd(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return n/i;
    }
}
bool isprime(int n){
    if(n==1) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int c(int n){
    int count = 0;
    while(n>1){
        if(isprime(n)){
            count += n;
            break;
        }
        int hf = gd(n);
        count += (n/hf);
        n = hf;
    }
    return count;
}
int main(){
<<<<<<< HEAD
    int n = 8;
    cout << c(n);
}
=======
<<<<<<< HEAD
    int n = 28;
    s(n);
}
=======
    findfactor(49);
}
//me
>>>>>>> 15d17ec285d85f277b8f5ab01997cf480945fe6f
    //me
>>>>>>> 498234d0a7622077d97cc0aaf9bc0df4573038c4
