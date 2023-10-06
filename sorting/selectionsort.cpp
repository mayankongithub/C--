#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {15,12,23,44,5};
    int n = 5;
    for(int i=0;i<n-1;i++){
        int min = INT_MAX;
        int mini = -1;
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min = arr[j];
                mini = j;
            }
        }
        swap(arr[i],arr[mini]);
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}