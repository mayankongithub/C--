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
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// class time{
//     private:
//         int hr;
//         int min;
//     public:
//         time(){
//             hr = 0;
//             min = 0;
//         }
//         time(int hr,int min){
//             hr = hr;
//             min = min;
//         }
//         // time operator+(time &other) {
//         //     time temp;
//         //     temp.hr = hr + other.hr + (min + other.min) / 60; // Calculate additional hours if minutes exceed 59
//         //     temp.min = (min + other.min) % 60; // Calculate remaining minutes after converting to proper format
//         //     return temp;
//         // }
//         time operator+(time &other){
//             time temp;
//             if(min+other.min>59){
//                 temp.hr = hr + other.hr + 1;
//                 temp.min = (min + other.min)-60;
//                 return temp;
//             }
//         else{
//             temp.hr = hr + other.hr;
//             temp.min = min + other.min;
//             return temp;
//         }
//     }
//         void display(){
//             cout << hr << " hr , " << min << " min";
//         }
//         void setdata(){
//             cout << "Enter the hours -> ";
//             cin >> hr;
//             cout << "Enter the minutes -> ";
//             cin >> min;
//         }
// };

// int main(){
//    class time a,b;
//    a.setdata();
//    b.setdata();
//    class time c;
//    c = a + b;
//    c.display();
// }
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class vehicle{
public:
    int engine;
    int horn;
    vehicle(){
        cout << "vehicle" << endl;
    }
};
class bike : public vehicle{
public:
    int headlight;
    bike(){
        cout << "bike" << endl;
    }
};
class car : public vehicle{
public:
    int headlight;
    car(){
        cout << "car" << endl;
    }
};
int main(){
    car c;
}