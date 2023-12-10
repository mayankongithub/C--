#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 5;
   int arr[n] = {2,2,3,4,5};
   unique(arr,arr+n);
   for(int i=0;i<n;i++){
    cout << arr[i] << " ";
   }
}