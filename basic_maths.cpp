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
//     findfactor(49);
// }
#include<iostream>
#include<math.h>
using namespace std;
void s(int n){
    int sum = 0;
    int x = n;
    for(int i=1;i<sqrt(n);i++){
        if(n%i==0){
            sum = sum + i;
            cout << i << " ";
        }
    }
    for(int i=sqrt(n);i>1;i--){
        if(n%i==0){
            cout << n/i << " ";
            sum = sum + n/i;
        }
    }
    if(x==sum){
        cout << endl << "SAME";
    }
    else{
        cout << endl << "NOT SAME";
    }
    
}
int main(){
<<<<<<< HEAD
    int n = 28;
    s(n);
}
=======
    findfactor(49);
}
//me
>>>>>>> 15d17ec285d85f277b8f5ab01997cf480945fe6f
