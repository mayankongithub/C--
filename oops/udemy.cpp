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
#include<iostream>
using namespace std;
class account{
private:
    int balance;
public:
    void setdata();
    void getdata();
    static account& lowbalance(account &a1,account &a2); 

};
account& account :: lowbalance(account &a1,account &a2){
    if(a1.balance < a2.balance){
        return a1;
    }
    else{
        return a2;
    }
} 

void account :: getdata(){
    cout << balance;
}
void account :: setdata(){
    cout << "Enter the balance -> ";
    cin >> balance;
}
int main(){
    account a1;
    a1.setdata();
    account a2;
    a2.setdata();
    account & a3 = account :: lowbalance(a1,a2);
    a3.getdata();
}