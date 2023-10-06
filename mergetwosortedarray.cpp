// #include<iostream>
// #include<vector>
// using namespace std;
// void sort(vector<int>&v){
//     for(int i=0;i<v.size()-1;i++){
//         for(int j=i+1;j<v.size();j++){
//             if(v[i]>v[j]){
//                 int temp = v[i];
//                 v[i] = v[j];
//                 v[j] = temp;
//             }
//         }
//     }
//     for(int k=0;k<v.size();k++){
//         cout << v[k] << '\t';
//     }
// }
// int main(){
//     vector<int>v;
//     vector<int>result;
//     v.push_back(9);
//     v.push_back(8);
//     v.push_back(7);
//     v.push_back(6);
//     vector<int>v2;
//     v2.push_back(5);
//     v2.push_back(4);
//     v2.push_back(3);
//     v2.push_back(1);
//     for(int i=0;i<v.size();i++){
//         result.push_back(v[i]);
//     }
//     for(int j=0;j<v2.size();j++){
//         result.push_back(v2[j]);
//     }
//     int n = v.size() + v2.size();
//     for(int k=0;k<n;k++){
//         cout << result[k] << '\t';
//     }
//     cout << endl;
//     sort(result);
// }
