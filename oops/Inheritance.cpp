#include<iostream>
using namespace std;
class vehicle{ // BASE CLASS OR PARENT CLASS
private:
    string colour;
protected:
    int price;
public:
    string name;
    int headlight;
    int average;
};
class bike : public vehicle{ // DERIVED CLASS OR CHILD CLASS
public:
    int tyresize;
};
class car : public vehicle{
public:
    int tyresize;
};
int main(){
    car BMW;
    BMW.tyresize = 20;
    BMW.name = "bavirian motor works";
    BMW.headlight = 2;
    BMW.average = 7;
    cout << BMW.tyresize << endl;
    cout << BMW.name << endl;
    cout << BMW.headlight << endl;
    cout << BMW.average << endl;
}
// PRIVATE - CANNOT BE ACCESSED AND CANNOT BE INHERITED.
// PROTECTED - CANNOT BE ACCESSED BUT CAN BE INHERITED.
// PUBLIC - CAN BE ACCESSED AND CAN INHERITED ALSO.