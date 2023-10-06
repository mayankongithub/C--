// PASCAL TRIANGLE USING 2-D VECTOR
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int m;
//     cout << "Enter the size of pascal triangle -> ";
//     cin >>m;
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
// #include<vector>
// using namespace std;
// int main(){
//     int m;
//     cout << "Enter the size of pascal triangle -> ";
//     cin >>m;
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
//     // for(int i=0;i<m;i++){
//     //     for(int j=0;j<=i;j++){
//     //         cout << v[2][j] << " ";   
//     //     }
//     //     cout << endl;
//     // }
//     for(int j=0;j<=3;j++){
//         cout << v[3][j] << " ";
//     }
//     cout << endl;
// }
//BINARY TO DECIMAL
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[7] = {1,1,0,0,1,0,1};
//     int sum = 0;
//     int x = 1;
//     for(int i=6;i>=0;i--){
//         sum = sum + arr[i]*x;
//         x = x*2;
//     }
//     cout << sum;
// }
//FLIPPING MATRIX
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][4] = {{0,0,1,1},
//                     {1,0,1,0},
//                     {1,1,0,0}};
//     for(int i=0;i<3;i++){
//         if(arr[i][0] == 0){ // AGAR FIRST ELEMENT 0 HAI TOH ANDAR JAAKE PURI ROW KO FLIP KR DENA
//             for(int j=0;j<4;j++){
//                 if(arr[i][j] == 0){ // JAHA PE BI 0 HAI WOH 1 HOGA OR 1 HAI WOH 0 HOGA
//                     arr[i][j] = 1;
//                 }
//                 else{
//                     arr[i][j] = 0;
//                 }
//             }
//         }
//     }
//     for(int j=0;j<4;j++){//AB COL MAI CHANGES KRNE HAI TOH YE TAARIKA LAGEGA
//         int noz = 0; // AB NO. OF ZEROS OR NO. OF ONES COUNT KR LENGE
//         int noo = 0; // OR INKO COLUMN WALE LOOP KE BAAD MAI ISSLYE LIKHA HAI TAAKI EACH ROW KE LIYE DIFF. HO
//         for(int i=0;i<3;i++){
//             if(arr[i][j]==0){
//                 noz++;
//             }
//             else{
//                 noo++;
//             }
//         }
//         if(noz>noo){ //AGAR NO. OF ZEROS JADA HAI TOH PHIR SE FLIP KRNA
//             for(int i=0;i<3;i++){
//                 if(arr[i][j]==0){
//                     arr[i][j] = 1;
//                 }
//                 else{
//                     arr[i][j] = 0;
//                 }
//             }
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<4;j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     int sum = 0;
//     for(int i=0;i<3;i++){
//         int x = 1;
//         for(int j=3;j>=0;j--){
//             sum += arr[i][j]*x;
//             x = x*2;
//         }
//     }
//     cout << sum;
// }
// FINDING A NUMBER X GIVEN BY USER IS PRESENT IN THE GIVEN ARRAY OR NOT BY EASY WAY MEANS LESS TC
// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int main(){
//     int target = 1;
//     int arr[5][5] = {1,4,7,11,15,2,5,8,12,19,3,6,9,16,22,10,13,14,17,24,18,21,23,26,30};
//     int i=0;
//     int j=4;
//     bool flag = false;
//     while(i<=4 && j>=0){
//         if(arr[i][j]==target){
//             flag = true;
//             break;
//         }
//         else if(arr[i][j]>target){
//             j--;
//         }
//         else{
//             i++;
//         }
//     }
//     if(flag==true){
//         cout << "TRUE";
//     }
//     else{
//         cout << "FALSE";
//     }
// }
//BINARY TO DECIMAL
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[7] = {1,1,0,0,1,0,1};
//     int sum = 0;
//     int x = 1;
//     for(int i=6;i>=0;i--){
//         sum = sum + arr[i]*x;
//         x = x*2;
//     }
//     cout << sum; 
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the value of n -> ";
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cout << "Enter the element at the index[" <<  i << "] ->  ";
//         cin >> arr[i]; 
//     }
//     int sum = 0;
//     int x = 1;
//     for(int i=n-1;i>=0;i--){
//         sum = sum + arr[i]*x;
//         x = x*2;
//     }
//     cout << sum;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[32];
//     int n = 10;
//     int bit;
//     int i=0;
//     while(n>0){
//         arr[i] = n & 1;
//         n = n >> 1;
//         i++;
//     }
//     for(int j=i-1;j>=0;j--){
//         cout << arr[j];
//     }
// }
#include<iostream>
using namespace std;
int main(){
    int arr[5][5] = {1,4,7,11,15,2,5,8,12,19,3,6,9,16,22,10,13,14,17,24,18,21,23,26,30};
    int i = 0;
    int target = 30;
    int j = 4;
    bool flag = false;
    while(i<=4 && j>0){
        if(target == arr[i][j]){
            flag = 1;
            break;
        }
        else if(arr[i][j] > target){
            j--;
        }
        else{
            i++;
        }
    }
    if(flag == 0){
        cout << "False";
    }
    else{
        cout << "True";
    }
}
