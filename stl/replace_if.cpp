#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isodd(int i){
    if(i%2!=0){
        return true;
    }
    else{
        false;
    }
}
int main(){
   int arr[5] = {1,2,3,4,5};
   replace_if(arr,arr+5,isodd,10);
   for(int i=0;i<5;i++){
    cout << arr[i] << " ";
   }
}