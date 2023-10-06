#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n = 6;
    int arr[6] = {1,6,4,3,2,77};
    for(int i=0;i<n-1-i;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int n = 6;
//     int arr[6] = {2,3,4,5,6,7};
//     bool flag = true;
//     for(int i=0;i<n-1-i;i++){
//         for(int j=0;j<n-1-i;j++){
//             if(arr[j] > arr[j+1]){
//                 flag = false;
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
//     if(flag == true){
//         cout << "Is an sorted array" << endl;
//     }
//     for(int i=0;i<n;i++){
//         cout << arr[i] << " ";
//     }
// }
// SORTING AN STRING
// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){
//     string str = "ZZYX";
//     for(int i=0;i<str.size()-1;i++){
//         for(int j=0;j<str.size()-1-i;j++){
//             if(str[j] > str[j+1]){
//                 swap(str[j],str[j+1]);
//             }
//         }
//     }
//     for(int i=str.size();i>=0;i--){
//         cout << str[i] << " ";
//     }
// }
