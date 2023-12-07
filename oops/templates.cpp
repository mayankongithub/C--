#include<iostream>
using namespace std;
template<class t>
t getmax(t x,t y){
    if(x>y){
        return x;
    }
    else{
        return y;
    }
}
int main(){
    int a = 3,b = 6;
    cout << getmax(a,b);
}