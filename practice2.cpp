// #include<iostream>
// using namespace std;
// int main(){
//     int x = 5;
//     for(int i=1;i<=x;i++){
//         for(int j=1;j<=i;j++){
//             cout << j;
//         }
//         cout << endl;
//     }
// }
// #include<iostream>
// using namespace std;
// void numberofzero(int arr[],int s){
//     int index = 0;
//     for(int i=0;i<s;i++){
//         if(arr[i]!=0){
//             arr[index++] = arr[i];
//         }
//     }
//     while(index<s){
//         arr[index] = 0;
//         index++;
//     }
   
// }
// int main(){
//     int arr[7] = {2,5,0,1,0,3,2};//2,5,1,3,2,0,0
//     int s = sizeof(arr)/sizeof(arr[0]);
//     numberofzero(arr,s);
//     for(int i=0;i<7;i++){
//         cout << arr[i] << " ";
//     }
// }
// #include<iostream>
// using namespace std;
// void shift(int arr[],int n){
//     int i=0,j=n-1;
//     while(i<=j){
//         if(arr[i]>=arr[j]){
//             int temp = arr[i];
//             arr[i] = arr[j];
//             arr[j] = temp;
//         }
//         i++;
//         j--;
//     }
//     for(int i=0;i<7;i++){
//         cout << arr[i] << " ";
//     }
    
// }
// int main(){
//     int arr[7] = {2,5,0,1,0,3,1};
//     int n = 7;
//     shift(arr,n);
    
// }
#include<iostream>
using namespace std;
int main(){
    int arr[7] = {2,5,0,1,0,3,1};
    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
            if(arr[i]<=arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i=0;i<7;i++){
        cout << arr[i] << " ";
    }
}