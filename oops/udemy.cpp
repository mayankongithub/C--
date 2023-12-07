// #include<iostream>
// using namespace std;
// class account{
// private:
//     int a;
    
// public:
//     void show(){
//         cout << a;
//     }
//     account(int a){
//         this->a = a;
//     }
// };
// int main(){
//     account a1(12);
//     a1.show();
// }
//USER DEFINED INPUT
// #include<iostream>
// using namespace std;
// class account{
// private:
//     int id;
//     string name;
//     long long balance;
// public:
//     void setdata();
//     void getdata();
// };
// void account :: setdata(){
//     cout << "Enter the id -> ";
//     cin >> id;
//     cout << "Enter the name -> ";
//     cin >> name;
//     cout << "Enter the balance -> ";
//     cin >> balance;
// }
// void account :: getdata(){
//     cout << id << endl;
//     cout << name << endl;
//     cout << balance << endl;
// }

// int main(){
//     account a1;
//     a1.setdata();

//     account a2;
//     a2.setdata();

//     a1.getdata();
//     a2.getdata();
// }
// STATIC FUNCTION
// #include<iostream>
// using namespace std;
// class account{
// private:
//     int balance;
// public:
//     void setdata();
//     void getdata();
//     static account& lowbalance(account &a1,account &a2); 

// };
// account& account :: lowbalance(account &a1,account &a2){
//     if(a1.balance < a2.balance){
//         return a1;
//     }
//     else{
//         return a2;
//     }
// } 

// void account :: getdata(){
//     cout << balance;
// }
// void account :: setdata(){
//     cout << "Enter the balance -> ";
//     cin >> balance;
// }
// int main(){
//     account a1;
//     a1.setdata();
//     account a2;
//     a2.setdata();
//     account & a3 = account :: lowbalance(a1,a2);
//     a3.getdata();
// }
//FRIEND FUNCTION
// #include<iostream>
// using namespace std;
// class mark{
// private:
//     int y;
// public:
//     void setdata(){
//         cin >> y;
//     }
    
//     friend void show(mark &m1);
// };
// void show(mark &m1){
//     cout << m1.y;
// }

// int main(){
//     mark m1;
//     m1.setdata();
//     show(m1);
// }
//DYNAMIC CAST
// #include<iostream>
// using namespace std;
// class CA{
// public:
//     int aa;
//     virtual ~ CA(){

//     }
// };
// class CB:public CA{
// public:
//     int bb;
// };
// int main(){
//     CA a;
//     CB b;
//     CA *pa;
//     CB *pb;
//     pa = new CB();
//     pb = dynamic_cast<CB*>(pa);
//     cout << pb;
// }
// USE OF VIRTUAL FUNCTION
// #include<iostream>
// using namespace std;
// class A{
// public:
//     virtual void foo(){
//         cout << "funtion of A" << endl;
//     }
// };
// class B:public A{
// public:
//     virtual void foo(){
//         cout << "funtion of B" << endl;
//     }
// };
// int main(){
//     A a;
//     B b;
//     A *pa = &b;
//     pa->foo(); 
// }
// FIGURE QUESTION
// #include<iostream>
// using namespace std;
// class figure{
// public:
//     int dimension;
//     virtual double area() = 0;
//     virtual double peri() = 0;
// };
// class square:public figure{
// public:
//     double area(){
//         return dimension*dimension;
//     }
//     double peri(){
//         return 4 * dimension;
//     }
// };
// class circle:public figure{
// public:
//     double area(){
//         return 3.14*dimension;
//     }
//     double peri(){
//         return 2 * (3.14) * dimension * dimension;
//     }
// };
// int main(){
//     figure *FA;
//     int n;
//     cout << "Enter the value of n -> ";
//     if(n == 1){
//         FA = new square();
//     }
//     else{
//         FA = new circle();
//     }
//     cout << "Enter the dimension -> ";
//     cin >> FA->dimension;
//     double area = FA->area();
//     double circle = FA->peri();
//     cout << area << endl << circle;
// }
#include<iostream>
using namespace std;
class A{
public:
    A(){
        cout << "In A" << endl;
    }
};
class B:virtual A{
public:
    B(){
        cout << "In B" << endl;
    }
};
class C:virtual public A{
public:
    C(){
        cout << "In C" << endl;
    }
};
class D:public C,public B{
public:
    D(){
        cout << "In D" << endl;
    }
};
int main(){
    D d;
}