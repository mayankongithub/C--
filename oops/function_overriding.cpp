#include<iostream>
using namespace std;
class A{
public:
    int a_ka_public;
};
class B{
public:
    int b_ka_public;
    void show(){
        cout << "Mai B ka function hu";
    }
};
class C : public B{
public:
    int c_ka_public;
    void show(){
        cout << "Mai C ka function hu";
    }
};
int main(){
    B b;
    b.show();
    cout << endl;
    C c;
    c.show();
    cout << endl;
    c.B::show(); // class C mai se class B ke function ko call kiya
}
// FUNCTION OVERRIDING BY POINTERS
// #include<iostream>
// using namespace std;
// class vehicle{
// public:
//     int headlight;
//     virtual void show(){
//         cout << "Vehicle ka show" << endl;
//     }
    
// };
// class bike{
// public:
//     int tyresize;
//     void show(){
//         cout << "Bike wala show call hua" << endl;
//     }
// };
// int main(){
//     bike b;
//     vehicle *v;
//     v = &b; // or v = &b; agar bike b;
//     v->show();
//     v = new bike;
//     v->show();
// }