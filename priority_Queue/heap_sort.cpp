// #include<bits/stdc++.h>
// using namespace std;
// void heapify(vector<int>&v,int idx,int n){
//     int largest = idx;
//     int left = 2*idx+1;
//     int right = 2*idx+2;

//     if(left<n && v[left]>v[largest]){
//         largest = left;
//     }

//     if(right<n && v[right]>v[largest]){
//         largest = right;
//     }
//     if(largest!=idx){
//         swap(v[largest],v[idx]);
//         heapify(v,largest,n);
//     }
// }
// void heapsort(vector<int>&v,int n){
//     for(int i=n-1;i>0;i--){
//         swap(v[0],v[i]);
//         heapify(v,0,i);
//     }
// }
// int main(){
//     vector<int>arr = {10,3,8,9,5,13,18,14,11,70};
//     for(int i=arr.size()/2-1;i>=0;i--){
//         heapify(arr,i,arr.size());
//     }
//     heapsort(arr,arr.size());
//     for(int i=0;i<arr.size();i++){
//         cout << arr[i] << " ";
//     }
// }



// Sorting Algorithm		Worst Time	      Space Complexity
// Bubble Sort	            O(N2)	           O(1)
// Selection Sort	        O(N2)	           O(1)	
// Insertion Sort	        O(N2)              O(1)	
// Merge Sort	            O(N)	           O(N)
// Quick Sort	            O(N2)	           O(logN)	
// Heap Sort	            O(NlogN)	       O(1)	
// Counting Sort	        O(N+K)	           O(K)	
// Radix Sort	            O(N⋅K)	           O(N+K)	
// Bucket Sort	            O(N2)	           O(N+K)	

#include<bits/stdc++.h>
using namespace std;

void heapify(vector<int>&arr,int idx,int n){
    int largest = idx;
    int left = 2*idx + 1;
    int right = 2*idx + 2;
    if(left<n && arr[left]>arr[largest]){
        largest = left;
    }

    if(right<n && arr[right]>arr[largest]){
        largest = right;
    }

    if(largest!=idx){
        swap(arr[largest],arr[idx]);
        heapify(arr,largest,n);
    }
}
void heapsort(vector<int>&arr,int n){
    for(int i=n-1;i>0;i--){
        swap(arr[0],arr[i]);
        heapify(arr,0,i);
    }
}
int main(){ 
    vector<int>arr = {10,3,8,9,5,13,18,14,11,70};
    int n = arr.size();
    for(int i=n/2-1;i>=0;i--){
        heapify(arr,i,n);
    }
    heapsort(arr,n);
    for(int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }
}