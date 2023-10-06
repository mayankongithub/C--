#include<iostream>
using namespace std;
class player {
public:
    int ammo;
    int scope;

    player(int ammo,int scope){
        this->ammo = ammo;
        this->scope = scope;
    }
};
int main(){
    player obj1(15,2);
    player obj2=obj1;
    cout << obj2.ammo<<endl;
}