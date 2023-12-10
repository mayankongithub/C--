#include<bits/stdc++.h>
using namespace std;
int main(){
   int arr[5] = {1,2,3,4,5};
   int arr2[5];
   reverse_copy(arr,arr+5,arr2);
   for(int i=0;i<5;i++){
    cout << arr2[i] << " ";
   }
}