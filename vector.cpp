// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>arr;
//     arr.push_back(6);
//     arr.push_back(0);
//     arr.push_back(9);
//     arr.push_back(8);
//     //output
//     arr.pop_back();//1 element is removed
//     arr[2] = 7;
//     // cout << arr[0] << endl;
//     // cout << arr[1] << endl;
//     // cout << arr[2] << endl;
//     // cout << arr[3] << endl;
//     for(int i=0;i<=arr.size();i++){
//         cout << arr[i]<<endl;
//     }
//     cout << endl;
//     cout << endl;
//     arr.pop_back();//second element is removed
//     for(int i=0;i<=arr.size();i++){
//         cout << arr[i]<<endl;
//     }
//     cout << "The size of vector is " << arr.size() << endl;
//     cout << "The capacity of vector is " << arr.capacity();

// }
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
    //vector<int>arr(5);
    // cout << arr[4] << endl;
    // cout << arr.size() << endl;
    // cout << arr.capacity();
    // vector<int>arr2(5,6); //First we have given no. of elements and after that the no. which we want at the indices.
    // cout << arr2[3];
//     vector<int>arr;
//     for(int i=0;i<5;i++){
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }
//     for(int i=0;i<5;i++){
//         cout << arr[i] << '\t'<< endl;;
//     }
// }
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int>arr;
//     arr.push_back(9);
//     arr.push_back(10);
//     arr.push_back(1);
//     arr.push_back(6);
//     for(int i=0;i<arr.size();i++){
//         cout << arr[i] << endl;
//     }
//     cout << arr[2] << endl;
//     cout << arr.at(2) << endl;
//     sort(arr.begin(),arr.end());
//     for(int i=0;i<arr.size();i++){
//         cout << arr[i] << '\t';
//     }
//     return 0;
// }
// *vectors are passed to function ny call by value* //
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void change(vector<int>a){
//     a[0] = 100;
//     for(int i=0;i<a.size();i++){
//         cout << a.at(i) << '\t';
//     }
// }
// int main(){
//     vector<int>v;
//     v.push_back(1);
//     v.push_back(3);
//     v.push_back(2);
//     v.push_back(4);
//     for(int i=0;i<v.size();i++){
//         cout << v.at(i) << '\t';
//     }
//     cout << endl;
//     change(v);
//     cout << endl;
//     for(int i=0;i<v.size();i++){
//         cout << v.at(i) << '\t';
//     }
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(6);
//     v.push_back(5);
//     v.push_back(6);
//     int x = 6;
//     int y;
//     bool flag = false;
//     for(int i=v.size();i>0;i--){
//         if(x==v[i]){
//             flag = true;
//             y = i;
//             break;
//         }
//     }
//     if(flag = true){
//         cout << y;
//     }
//     else{
//         cout << "not found";
//     }
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(5);
//     int x = 6;
//     for(int i=0;i<=v.size()-2;i++){
//         for(int j=i+1;j<=v.size()-1;j++){
//             if(v[i]+v[j]==x){
//                 cout << "(" << v[i] << ',' << v[j] << ")" <<endl;
//             }
//         }
//     }
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v;
//     vector<int>v2;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(5);
//     for(int i=v.size()-1;i>=0;i--){
//         v2.push_back(v[i]);
//     }
//     for(int i=0;i<v2.size();i++){
//         cout << v2[i] << '\t';
//     }
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// void reverse(vector<int>&a){
//     int i = 0 ,j = a.size()-1; 
//     while(i<=j){
//         int temp = a[i];
//         a[i] = a[j];
//         a[j] = temp;
//         i++;
//         j--;
//     }
   
//     for(int i=0;i<a.size();i++){
//         cout << a[i] << '\t';
//     }
// }
// int main(){
//     vector<int>v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(5);
//     reverse(v);
//     cout << endl;
//     for(int i=0;i<v.size();i++){
//         cout << v[i] << '\t';
//     }
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// void reverse(vector<int>&a){
//     int i = 1 ,j = 4; 
//     while(i<=j){
//         int temp = a[i];
//         a[i] = a[j];
//         a[j] = temp;
//         i++;
//         j--;
//     }
// }
// int main(){
//     vector<int>v;
//     v.push_back(1);
//     v.push_back(6);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(7);
//     v.push_back(4);
//     for(int i=0;i<v.size();i++){
//         cout << v[i] << '\t';
//     }
//     reverse(v);
//     cout << endl;
//     for(int i=0;i<v.size();i++){
//         cout << v[i] << '\t';
//     }
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// void display(vector<int>&v){
//     v[0] = 100;
//     for(int i=0;i<v.size();i++){
//         cout << v[i] << '\t';
//     }
// }
// int main(){
//     vector<int>v;
//     v.push_back(9);
//     v.push_back(8);
//     v.push_back(5);
//     v.push_back(4);
//     v.push_back(3);
//     display(v);
//     cout << endl;
//     for(int i=0;i<v.size();i++){
//         cout << v[i] << '\t';
//     }    
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v;
//     v.push_back(1);
//     cout << v.size()<<'\n';
//     cout << "capacity - " <<v.capacity()<<endl;
//     v.push_back(2);
//     cout << v.size()<<'\n';
//     cout << "capacity - "<<v.capacity()<<endl;
//     v.push_back(3);
//     cout << v.size()<<'\n';
//     cout << "capacity - "<< v.capacity()<<endl;
//     v.push_back(4);
//     cout << v.size()<<'\n';
//     cout << "capacity - "<< v.capacity()<<endl;
//     v.push_back(5);
//     cout << v.size()<<'\n';
//     cout << "capacity - "<< v.capacity()<<endl;
//     v.push_back(6);
//     cout << v.size()<<'\n';
//     cout << "capacity - "<< v.capacity()<<endl;
    
// }
// #include<iostream>
// //#include<vector>
// using namespace std;
// #include<vector>
// int main(){
//     vector<int>v;
//     for(int i=0;i<5;i++){
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }
//     for(int i=0;i<5;i++){
//         cout << v.at(i) << endl;
//     }

//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     for(int i=5;i!=0;i--){
//         if(n==v[i]){
//             cout << i;
//             break;
//         }
//     }
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v;
//     for(int i=0;i<5;i++){
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }
//     for(int i=0;i<v.size();i++){
//         for(int j=i+1;j<v.size();j++){
//             if(v[i]+v[j]==6){
//                 cout << "(" << v[i] << "," << v[j] << ")"<<'\t';
//             }
//         }
//     }
// }
// #include<iostream>
// using namespace std;
// #include<vector>
// int main(){
//     vector<int>v;
//     for(int i=0;i<5;i++){
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }
//     cout << endl;
//     vector<int>v2;
//     for(int i=4;i>=0;i--){
//         v2.push_back(v[i]);
//     }
//     for(int i=0;i<5;i++){
//         cout << v2.at(i) << '\t';
//     }
    
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// void reverse(vector<int>&v){
//     int n = v.size();
//     int i=0;
//     int j=n-1;
//     while(i<j){
//         int temp = v[j];
//         v[j] = v[i];
//         v[i] = temp;
//         i++;
//         j--;
//     }
//     for(int i=0;i<n;i++){
//         cout << v.at(i)<<'\t';
//     }
// }
// int main(){
//     vector<int>v;
//     for(int i=0;i<5;i++){
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }
//     reverse(v);
// }
