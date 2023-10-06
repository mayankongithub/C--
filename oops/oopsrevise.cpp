// #include<iostream>
// using namespace std;
// class player{
// private:
//     int health;
//     int score;
//     bool alive;
//     //setter
// public:
//     void sethealth(int health){
//         this->health = health;
//     }
//     void setscore(int score){
//         this->score = score;
//     }
//     void setalive(bool alive){
//         this->alive = alive;
//     }
//     //getter
//     int gethealth(){
//         return health;
//     }
//     int getscore(){
//         return score;
//     }
//     bool getalive(){
//         return alive;
//     }
// };
// player greatscore(player mayank,player amit){
//     if(mayank.getscore()>amit.getscore()){
//         return mayank;
//     }
//     else{
//         return amit;
//     }
// }
// int main(){
//     player mayank;
//     mayank.sethealth(100);
//     mayank.setscore(4);
//     mayank.setalive(true);

//     player amit;
//     amit.sethealth(75);
//     amit.setscore(6);
//     amit.setalive(true);

//     player ans = greatscore(mayank,amit);
//     cout << ans.getscore();
// }



// #include<iostream>
// using namespace std;
// class Gun{
// public:
//     int speed;
//     int ammo;
//     int scope;
// };
// class player{
// private:
//     int health;
//     int score;
//     bool alive;
//     Gun gun;
//     //setter
// public:
//     void sethealth(int health){
//         this->health = health;
//     }
//     void setscore(int score){
//         this->score = score;
//     }
//     void setalive(bool alive){
//         this->alive = alive;
//     }
//     void setgun(Gun gun){
//         this->gun = gun;
//     }
//     //getter
//     int gethealth(){
//         return health;
//     }
//     int getscore(){
//         return score;
//     }
//     bool getalive(){
//         return alive;
//     }
//     Gun getgun(){
//         return gun;
//     }

// };
// player greatscore(player mayank,player amit){
//     if(mayank.getscore()>amit.getscore()){
//         return mayank;
//     }
//     else{
//         return amit;
//     }
// }
// int main(){
//     player mayank;
//     Gun ak47;
//     ak47.speed = 4;
//     ak47.ammo = 39;
//     ak47.scope = 4;


    
//     mayank.sethealth(100);
//     mayank.setscore(4);
//     mayank.setalive(true);
//     mayank.setgun(ak47);

    

//     player amit;
//     Gun akm;
//     akm.speed = 2;
//     akm.ammo = 10;
//     akm.scope = 4;

//     amit.sethealth(75);
//     amit.setscore(6);
//     amit.setalive(true);
//     amit.setgun(akm);

//     Gun gun123 =  mayank.getgun();
//     cout << gun123.speed << endl;
    

//     player ans = greatscore(mayank,amit);
//     cout << ans.getscore() << endl;
// }



#include<iostream>
using namespace std;
class bike{
    public:
    static int tyreSize;
    int engine;

    //constructor with parameters
    // bike(int engine){
    //     this->tyreSize = tyreSize;
    //     this->engine = engine;
    //     cout << "constructor call hua hai!!" << endl;
    // }
    //INTIALISATION LIST    
    bike(int e) : engine(e){
    }
    //DESTRUCTOR is called when object scope is completed or finished
    //~ -> tilde
    ~bike(){
        cout << "Destructor is called" << endl;
    }

    static void increasetyresize(){
        tyreSize++;
    }
};
int bike::tyreSize = 10;
int main(){
    bike tvs(100);
    tvs.increasetyresize();
    cout << tvs.tyreSize << endl;
    cout << tvs.engine << endl;
}