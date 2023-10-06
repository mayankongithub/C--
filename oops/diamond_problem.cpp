#include<iostream>
using namespace std;
class A{
protected:
    int a_ka_protected;
    A(){
        cout << "A ka constructor call hua\n";
    }
    
};
class B : virtual public A{
protected:
    int b_ka_protected;\
    B(){
        cout << "B ka constructor call hua\n";
    }
};
class C : virtual public A{
protected:
    int c_ka_protected;
    C(){
        cout << "C ka constructor call hua\n";
    }
};
class D : public B , public C{
public:
    int d_ka_public; 
    D(){
        cout << "D ka constructor call hua\n";
    }
};
int main(){
    D d;
}