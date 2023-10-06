#include<iostream>
#include<cmath>
using namespace std;
bool is_prime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int fact(int n){
    int count = 0;
    for(int i=1;i<sqrt(n);i++){
        if(n%i==0){
            count += i;
            cout << i << " ";
        }
    }
    for(int i=sqrt(n);i>1;i--){
        if(n%i==0){
            count += n/i;
            cout << n/i << " ";     
        }  
    }
    cout << endl;
    cout << count;
    cout << endl;
    if(count==n){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int n;
    cout << "Enter the number n -> ";
    cin >> n;
    int a = is_prime(n);
    cout << a << endl;
    int s = fact(n);
    cout << s;
}