// #include<iostream>
// using namespace std;
// template<class t>
// t getmax(t x,t y){
//     if(x>y){
//         return x;
//     }
//     else{
//         return y;
//     }
// }
// int main(){
//     int a = 3,b = 6;
//     cout << getmax(a,b);
// }
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class time{
private:
    int hr;
    int min;
public:
    time(){
        hr = 0;
        min = 0;
    }
    time(int hr,int min){
        this->hr = hr;
        this->min = min;
    }
    time operator+(time &other) {
        time temp;
        temp.hr = hr + other.hr + (min + other.min) / 60; // Calculate additional hours if minutes exceed 59
        temp.min = (min + other.min) % 60; // Calculate remaining minutes after converting to proper format
        return temp;
    }
    void display(){
        cout << hr << " hr , " << min << " min";
    }
    void setdata(){
        cout << "Enter the hours -> ";
        cin >> hr;
        cout << "Enter the minutes -> ";
        cin >> min;
    }
};
int main(){
   time a,b;
   a.setdata();
   b.setdata();
   time c = a + b;
   c.display();
}