#include<iostream>
using namespace std;
class fruit{
public:
    string name;
    string colour;
    int quantity;
};
void add(int a,int b){
    cout << a+b << endl;
}
void add(int a){
    cout << a+10 << endl;
}
int main(){
    add(10,1);
    add(10);
}