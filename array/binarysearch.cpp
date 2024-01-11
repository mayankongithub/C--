#include<iostream>
using namespace std;
int search(int arr[],int size,int i,int element){
    while(i<=size){
        int mid = i + (size-i)/2;
        if(arr[mid]==element){
            return mid;
        }
        else if(arr[mid]<element){
            i = mid + 1;
        }
        else{ //arr[mid]>element
            size = mid - 1;
        }
    }
    return -1;
    
}
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    int res = search(arr,size-1,0,5);
    if(res==-1){
        cout << "Element not present" << endl;
    }
    else{
        cout << "Element is present at index -> " << res << endl;
    }
}