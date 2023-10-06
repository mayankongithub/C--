// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     int y;
//     int *p1 = &x;
//     int *p2 = &y;
//     cout << "Enter the value of x -> ";
//     cin >> *p1;
//     cout << "Enter the value of y -> ";
//     cin >> *p2;
//     cout << *p1 + *p2;
// }
#include<iostream>
using namespace std;
void swap(int *x,int *y){
    int temp = *y;
    *y = *x;
    *x = temp;
}
int main(){
    int x = 4;
    int y = 5;
    swap(&x,&y);
    cout << '(' <<x<<','<<y<<')';
}