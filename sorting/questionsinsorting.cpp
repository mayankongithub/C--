// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int arr[] = {1,7,32,7,7,7};
//     int n = 6;
//     sort(arr,arr+n);
//     cout << arr[n/2];
// }
// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;
// int main(){
//     int arr[] = {19,8,12,6,98};
//     vector<int>v(5,0);
//     int x = 0;
//     for(int i=0;i<5;i++){
//         int min = INT_MAX;
//         int minidx = -1;
//         for(int j=0;j<5;j++){
//             if(v[j] == 1) continue;
//             else{
//                 if(min>arr[j]){
//                     min = arr[j];
//                     minidx = j;
//                 }
//             }
//         }
//         arr[minidx] = x;
//         v[minidx] = 1;
//         x++;
//     }
//     for(int i=0;i<5;i++){
//         cout << arr[i] << " ";
//     }
// }
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int arr[] = {19,9,8,24,56};
//     int x = 0;
//     for(int i=0;i<5;i++){
//         int min = INT_MAX;
//         int minidx = -1;
//         for(int j=0;j<5;j++){
//             if(arr[j]<=0){
//                 continue;
//             }
//             else{
//                 if(min>arr[j]){
//                     min = arr[j];
//                     minidx = j;
//                 }
//             }
//         }
//         arr[minidx] = -x;
//         x++;
//     }
//     for(int i=0;i<5;i++){
//         arr[i] = -arr[i];
//         cout << arr[i] << " ";
//     }
// }
// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;
// int main(){
//     int arr[] = {19,9,8,24,56};
//     vector<int>v(5,0);
//     int x = 0;
//     for(int i=0;i<5;i++){
//         int min = INT_MAX;
//         int minidx = -1;
//         for(int j=0;j<5;j++){
//             if(v[j]==1){
//                 continue;
//             }
//             else{
//                 if(min>arr[j]){
//                     min = arr[j];
//                     minidx = j;
//                 }
//             }
//         }
//         arr[minidx] = x;
//         v[minidx] = 1;
//         x++;
//     }
//     for(int i=0;i<5;i++){
//         cout << arr[i] << " ";
//     }
// }
//COOKIES
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int>c;
//     c.push_back(1);
//     c.push_back(1);
//     // s.push_back(9);
//     // s.push_back(10);

//     vector<int>g;
//     g.push_back(1);
//     g.push_back(2);
//     g.push_back(3);
//     //greed.push_back(8);

//     int n = c.size();
//     int n1 = g.size();
//     sort(g.begin(),g.end());
//     sort(c.begin(),c.end());
//     int i=0,j=0;
//     int count = 0;
//     while(i<n && j<n1){
//         if(c[i] >= g[j]){
//             count++;
//             j++;
//             i++;
//         }
//         else{
//             j++;
//         }
//     }
//     cout << count;
// }
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int arr[] = {4,3,5};
//     sort(arr,arr+3);
//     int max = 0;
//     for(int i=0;i<3;i++){
//         if(arr[i]>max){
//             max = arr[i];
//         }
//     }
//     for(int i=2;i>=0;i--){
//         arr[i] = max - arr[i];
//         cout << arr[i] << " ";
//     }
// }
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;
    cout << (a+b+c)/2;
}