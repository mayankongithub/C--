// #include<iostream>
// using namespace std;
// int main(){
//     int arr[][2] = {1,2,3,4};
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             cout << arr[i][j]<<" ";
//         }
//         cout << endl;
//     }
// }
//maximum number in a matrix
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int m;
//     cout << "Enter m -> ";
//     cin >> m;
//     int n;
//     cout << "Enter n -> ";
//     cin >> n;
//     int arr[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout << "Enter element at index [" << i << "] [" << j << "] -> ";
//             cin >> arr[i][j];
//         }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout << arr[i][j] << '\t';
//         }
//         cout << endl;
//     }
//     cout << endl;
//     int max = INT_MIN;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if(arr[i][j]>max){
//                 max = arr[i][j];
//             }
//         }
//     }
//     cout << max;
// }
//sum of all the elements of a matrix
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int m;
//     cout << "Enter m -> ";
//     cin >> m;
//     int n;
//     cout << "Enter n -> ";
//     cin >> n;
//     int arr[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout << "Enter element at index [" << i << "] [" << j << "] -> ";
//             cin >> arr[i][j];
//         }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout << arr[i][j] << '\t';
//         }
//         cout << endl;
//     }
//     cout << endl;
//     int sum = 0;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             sum = sum + arr[i][j];
//         }
//     }
//     cout << sum;
// }
//addition of a matrix
// #include<iostream>
// using namespace std;
// int main(){
//     int sum = 0;
//     int arr[3][3] = {{1,3,4},{2,5,6},{7,8,9}};
//     int arr2[3][3] = {{1,3,4},{2,5,6},{7,8,9}};
//     int result[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             result[i][j] = arr[i][j]+arr2[i][j];
//         }
//     }
//      for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout << result[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[2][3] = {{1,2,3},{4,5,6}};
//     int result[10][10];
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             result[j][i] = arr[i][j];
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<2;j++){
//             cout << result[i][j] <<" ";
//         }
//         cout << endl;
//     }
// // }
#include<iostream>
using namespace std;
int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            if(i!=j){
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }
            else{
                arr[i][j] = arr[i][j];
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
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
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;
//      for(int k=0;k<3;k++){
//         int i=0;
//         int j=2;
//         while(i<=j){
//             int temp = arr[k][i];
//             arr[k][i] = arr[k][j];
//             arr[k][j] = temp;
//             i++;
//             j--;
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
//MULTIPLICATION OF TWO MATRICES
// #include<iostream>
// using namespace std;
// int main(){
//     int m,n;
//     cout << "Enter the row of 1st matrix -> ";
//     cin >> m;
//     cout << "Enter the col of 1st matrix -> ";
//     cin >> n;

//     int p,q;
//     cout << "Enter the row of 2nd matrix -> ";
//     cin >> p;
//     cout << "Enter the col of 2nd matrix -> ";
//     cin >> q;

//     if(n==p){
//         int arr[m][n];
//         int arr2[p][q];
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 cout << "Enter the element at index[" << i << "][" << j << "] -> ";
//                 cin >> arr[i][j]; 
//             }
//         }

//         for(int i=0;i<p;i++){
//             for(int j=0;j<q;j++){
//                 cout << "Enter the element at index[" << i << "][" << j << "] -> ";
//                 cin >> arr2[i][j]; 
//             }
//         }
//         int res[m][q];
//         for(int i=0;i<m;i++){
//             for(int j=0;j<q;j++){
//                 res[i][j] = 0;
//                 for(int k=0;k<p;k++){
//                     res[i][j] += arr[k][j] * arr2[i][k];
//                 }
//             }
//         }
//         for(int i=0;i<m;i++){
//             for(int j=0;j<q;j++){
//                 cout << res[i][j] <<" ";
//             }
//             cout << endl;
//         }

//     }
//     else{
//         cout << "Matrix cannot be multiplied";
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3] = {{1,2,2},{3,4,1},{8,5,6}};
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             if(i%2!=0){
//                 int k=0;
//                 int q=2;
//                 while(k<=q){
//                     int temp = arr[k][i];
//                     arr[k][i] = arr[k][q];
//                     arr[q] = temp;
//                 }
//             }
//         }
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
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
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;
//     //  for(int k=0;k<3;k++){
//     //     int i=0;
//     //     int j=2;
//     //     while(i<=j){
//     //         int temp = arr[k][i];
//     //         arr[k][i] = arr[k][j];
//     //         arr[k][j] = temp;
//     //         i++;
//     //         j--;
//     //     }
//     // }
//     for(int i=0;i<3;i++){
//         for(int j=3-1;j>=0;j--){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// WAVE PRINT
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     for(int i=0;i<3;i++){
//         if(i%2==0){
//             for(int j=0;j<3;j++){
//                 cout << arr[i][j] << " ";
//             }
//         }
//         else{
//             for(int j=3-1;j>=0;j--){
//                 cout << arr[i][j] << " ";
//             }
//         }
        
//     }
// }
// WAVE PRINT STARTING FROM LAST ROW AND COLUMN WISE PRINTING
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     // for(int i=2;i>=0;i--){
//     //     if(i%2==0){
//     //         for(int j=0;j<3;j++){
//     //             cout << arr[i][j] << " ";
//     //         }
//     //     }
//     //     else{
//     //         for(int j=2;j>=0;j--){
//     //             cout << arr[i][j] << " ";
//     //         }
//     //     }
//     // }
//     for(int i=0;i<3;i++){
//         if(i%2==0){
//             for(int j=0;j<3;j++){
//                 cout << arr[j][i] <<" ";
//             }
//         }
//         else{
//             for(int j=2;j>=0;j--){
//                 cout << arr[j][i] << " ";
//             }
//         }
//     }
// }
// SPIRAL PRINTING
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[4][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
//     int minr = 0,minc = 0;
//     int maxr = 3,maxc = 4;
//     while(minr<=maxr && minc<=maxc){
//         //right
//         if(minr>maxr || minc>maxc) break;
//         for(int j=minc;j<=maxc;j++){
//             cout << arr[minr][j] << " ";
//         }
//         minr++;
//         //down
//         if(minr>maxr || minc>maxc) break;
//         for(int i=minr;i<=maxr;i++){
//             cout << arr[i][maxc] << " ";
//         }
//         maxc--;
//         //left
//         if(minr>maxr || minc>maxc) break;
//         for(int j=maxc;j>=minc;j--){
//             cout << arr[maxr][j] << " ";
//         }
//         maxr--;
//         //up
//         if(minr>maxr || minc>maxc) break;
//         for(int i=maxr;i>=minr;i--){
//             cout << arr[i][minc] << " ";
//         }
//         minc++;
//     }
// }
//WAVE PRINT
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//     for(int i=0;i<3;i++){
//         if(i%2!=0){
//             for(int j=2;j>=0;j--){
//                 cout << arr[i][j] << " ";
//             }
//             cout << endl;
//         }
//         else{
//             for(int j=0;j<3;j++){
//                 cout << arr[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }
// }
// PRINTING THE DIAGONAL ELEMENTS OF AN 2-D MATRIX
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             if((i+j)%2==0){
//                 cout << arr[i][j] << " ";
//             }
//             else{
//                 cout << " " << " ";
//             }
//         }
//         cout << endl;
        
       
//     }
// }
//1 2 3
//4 5 6
//7 8 9
//7 4 1 2 5 8 9 6 3
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//     for(int j=0;j<3;j++){
//         if(j%2==0){
//             for(int i=2;i>=0;i--){
//                 cout << arr[i][j] << " ";
//             }
//             cout << endl;
//         }
//         else{
//             for(int i=0;i<3;i++ ){
//                 cout << arr[i][j] << " ";
//             }
//             cout << endl;
            
//         }
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int k = 1;
//     int n = 3;
//     int arr[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             arr[i][j] = k;
//             k++;
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// ROTATING MATRIX 90 DEGREE
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
//         for(int j=2;j>=0;j--){
//             cout << res[i][j] << " ";
//         } 
//         cout << endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[][3] = {1,2,3,4,5,6,7,8,9};
//     for(int i=0;i<3;i++){
//         if(i%2!=0){
//             for(int j=2;j>=0;j--){
//                 cout << arr[i][j] << " ";
//             }
//         }
//         else{
//             for(int j=0;j<3;j++){
//                 cout << arr[i][j] << " ";
//             }
            
//         }            
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[][3] = {1,2,3,4,5,6,7,8,9};
//     int res[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             res[i][j] = arr[j][i];
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=2;j>=0;j--){
//             cout << res[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[][3] = {1,2,3,4,5,6,7,8,9};
//     // 1 2 3
//     // 4 5 6
//     // 7 8 9



//     for(int j=0;j<3;j++){
//         if(j%2!=0){
//             for(int i=2;i>=0;i--){
//                 cout << arr[i][j] << " ";
//             }
//             cout << endl;
//         }
//         else{
//             for(int i=0;i<3;i++){
//                 cout << arr[i][j] << " ";
                
//             }
//             cout << endl;
//         }
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[][3] = {1,2,3,4,5,6,7,8,9};
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             if((i+j)%2==0){
//                 cout << arr[i][j] << " ";
//             }
//             else{
//                 cout << " " << " ";
//             }
//         }
//         cout << endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             if((i+j)%2==0){
//                 cout << arr[i][j] << " ";
//             }
//             else{
//                 cout << " " << " ";
//             }
//         }
//         cout << endl;
        
       
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[][3] = {1,2,3,4,5,6,7,8,9};
//     // 1 2 3
//     // 4 5 6
//     // 7 8 9
//     // for(int j=0;j<3;j++){
//     //     for(int i=0;i<3;i++){
//     //         cout << arr[i][j] << " ";
                
//     //     }
//     //     cout << endl;
//     // }
//     for(int j=0;j<3;j++){
//         for(int i=2;i>=0;i--){
//             cout << arr[i][j] << " ";
                
//         }
//         cout << endl;
//     }

// }
// 7 4 1
// 8 5 2
// 9 6 3


