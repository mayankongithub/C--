#include<iostream>
using namespace std;
int main(){
    int n = 6;
    int arr[n+1] = {1,2,3,4,5,6,2};
    for(int i=0;i<n;i++){
        if(arr[i] == arr[i+1]){
            cout << i;
        }
    }
}