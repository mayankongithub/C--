// #include<iostream>
// using namespace std;
// int main(){
//     int m;
//     cout << "Enter the value of m -> ";
//     cin >> m;
//     int n;
//     cout << "Enter the value of n -> ";
//     cin >> n;
//     int arr[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout << "Enter the element";
//             cin >> arr[i][j];
//         }
//     }
//     cout << endl;
//     int p;
//     cout << "Enter the value of p -> ";
//     cin >> p;
//     int q;
//     cout << "Enter the value of q -> ";
//     cin >> q;
//     int arr2[p][q];

//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout << "Enter the element";
//             cin >> arr2[i][j];
//         }
//     }
//     int res[m][q];
//     if(n!=p){
//         cout << "Matrix cannot be multiplied";
//     }
//     else{
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 res[i][j] = 0;
//                 for(int k=0;k<p;k++){
//                     res[i][j] += arr[k][j] * arr2[i][k];
//                 }
//             }
//         }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<q;j++){
//             cout << res[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
//TRANSPOSE
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//     int res[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             res[i][j] = arr[j][i];
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout << res[i][j] <<" ";
//         }
//         cout << endl;
//     }
// }
//TRANSPOSE WITHOUT USING EXTRA MATRIX
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//     for(int i=0;i<3;i++){
//         for(int j=i+1;j<3;j++){
//             if(i!=j){
//                 int temp = arr[i][j];
//                 arr[i][j] = arr[j][i];
//                 arr[j][i] = temp;
//             }
//             else{
//                 arr[i][j] = arr[i][j];
//             }
//         }
//     }
//      for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout << arr[i][j] <<" ";
//         }
//         cout << endl;
//     }
// }
//WAVE PRINT
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
//     for(int i=0;i<5;i++){
//         if(i%2!=0){
//             for(int j=4;j>=0;j--){
//                 cout << arr[i][j] << " ";
//             }
//             cout << endl;
//         }
//         else{
//             for(int j=0;j<5;j++){
//                 cout << arr[i][j] << " ";
//             }
//             cout << endl;
//         }
        
//     }
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int m ;
//     cout << "Enter the value of m -> ";
//     cin >> m;
//     vector<vector<int>>v;
//     for(int i=1;i<=m;i++){
//         vector<int>a(i);
//         v.push_back(a);
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<=i;j++){
//             if(j==0 || j==i){
//                 v[i][j] = 1;
//             }
//             else{
//                 v[i][j] = v[i-1][j] + v[i-1][j-1];
//             }
//         }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<=i;j++){
//             cout << v[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int count = 0;
//     int count2 = 0;
//     int max = 0;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int arr2[n];
//     for(int i=0;i<n;i++){
//         cin >> arr2[i];
//     }
//     for(int i=0;i<n;i++){
//         count += arr[i];
//     }
//     for(int i=0;i<n;i++){
//         count2 += arr2[i];
//     }
//     if(count > count2){
//         cout << "0" << " ";
//     }
//     else{
//         cout << "1" << " ";
//     }
//     for(int i=0;i<n;i++){
//         if(arr[i] - arr2[i]>max){
//             max = arr[i] - arr2[i];
//         }
//     }
//     cout << max;
// }
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         for(int i=2;i<n;i++){
//             if(n%i==0){
//                 cout << "no" << endl;
//                 break;
//             }
//             else{
//                 cout << "yes" << endl;
//                 break;
//             }
//         }
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the value og n -> ";
//     cin >> n;
//     int arr[n];
//     //input
//     for(int i=0;i<n;i++){
//         cout << "Enter the element at index [" << i << "] -> ";
//         cin >> arr[i];
//     }
//     //output
//     for(int i=n-1;i>=0;i--){
//         cout << arr[i] << '\t';
//     }
//     cout << endl << sizeof(arr)/sizeof(arr[0]);
// }
//int arr[5][5] = {1,4,7,11,15,2,5,8,12,19,3,6,9,16,22,10,13,14,17,24,18,21,23,26,30};
#include<iostream>
using namespace std;
int main(){
    int arr[5][5] = {1,4,7,11,15,2,5,8,12,19,3,6,9,16,22,10,13,14,17,24,18,21,23,26,30};
    int i=0,j=4;
    int target = 19;
    bool flag = false;
    while(i<=4 && j>0){
        if(arr[i][j]==target){
            flag = true;
            break;
        }
        if(arr[i][j] > target){
            j--;
        }
        else{
            i++;
        }
    }
    if(flag == true){
        cout << "true";
    }
    else{
        cout << "false";
    }
}