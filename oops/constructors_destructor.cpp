// #include<iostream>
// using namespace std;
// class bike{
// public:
//     int tyreSize;
//     int engine;

//     //constructor - when object is created constructor is called
//     bike(){
//         cout << "Constructor is called" << endl;
//     }
// };
// int main(){
//     bike tvs;
//     tvs.tyreSize = 10;
//     cout << tvs.tyreSize;
// }
// constructor with parameters
#include<iostream>
using namespace std;
class bike{
    public:
    int tyreSize;
    int engine;

    //constructor with parameters
    bike(int tyreSize,int engine){
        this->tyreSize = tyreSize;
        this->engine = engine;
        cout << "constructor call hua hai!!" << endl;
    }
    //DESTRUCTOR is called when object scope is completed or finished
    //~ -> tilde
    ~bike(){
        cout << "Destructor is called" << endl;
    }
};
int main(){
    bike tvs(15,100);
    cout << tvs.tyreSize << endl;
    cout << tvs.engine << endl;
    bool flag = true;
    if(flag == true){
        bike BMW(27,1000);
        cout << BMW.tyreSize << endl;
        cout << BMW.engine << endl;
    }
    bike hero(20,150);
    cout << hero.tyreSize << endl;
    cout << hero.engine << endl;
}