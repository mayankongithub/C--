// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {5,2,4,7,1};
//     int n = 5;
//     for(int i=1;i<n;i++){
//         int j = i;
//         while(j>=1){
//             if(arr[j]<arr[j-1]){
//                 swap(arr[j],arr[j-1]);
//                 j--;
//             }
//             else{
//                 break;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout << arr[i] << " ";
//     }
// }
#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,2,4,7,1};
    int n = 5;
    for(int i=0;i<n;i++){
        int j = i;
        while(j>=1){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
                j--;
            }
            else{
                break;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " "; 
    }
}