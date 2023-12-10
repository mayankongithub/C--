#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   int arr[5] = {1,2,3,4,5};
   replace(arr,arr+5,3,30);
   for(int i=0;i<5;i++){
    cout << arr[i] << " ";
   }
}