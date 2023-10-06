// #include<iostream>
// using namespace std;
// class player{
//     private:
//     int health;
//     int score;
//     string name;
//     public:
//     //SETTER
//     void setscore(int s){
//         score = s;
//     }
//     void sethealth(int h){
//         health = h;
//     }
//     //getter
//     int getscore(){
//         return score;
//     }
//     int gethealth(){
//         return health;
//     }
// };

// int main(){
//     // player mayank;
//     // mayank.health = 80;
//     // mayank.score = 4;
//     // mayank.name = "mayank";
//     // cout << mayank.health << endl;
//     // cout << mayank.score << endl;
//     // cout << mayank.name << endl;

//     // player monu;
//     // monu.health = 90;
//     // monu.score = 4;
//     // monu.name = "milan";
//     // cout << monu.health << endl;
//     // cout << monu.score << endl;
//     // cout << monu.name << endl;
//     player mayank;
//     mayank.setscore(4);
//     mayank.sethealth(100);
//     cout << mayank.getscore()<<endl;
//     cout << mayank.gethealth()<<endl;
// }
#include<iostream>
using namespace std;
class Gun{
public:
    int ammo;
    int damage;
    int scope;
};
class player{
private:
    int health;
    int age;
    int score;
    bool is_alive;
    Gun gun;
    class Helment{
        int hp;
        int level;
    };
    // public:
    // void sethp(int hp){
    //     this->hp = hp;
    // }
    // void setlevel(int level){
    //     this->level = level;
    // }
    // int gethp(){
    //     return hp;
    // }
    // int getlevel(){
    //     return level;
    // }
public:
    //setter
    void sethealth(int health){
        this->health = health;
    }
    void setage(bool age){
        this->age = age;
    }
    void setscore(int score){
        this->score = score;
    }
    void setis_alive(int is_alive){
        this->is_alive = is_alive;
    }
    void setGun(Gun gun){
        this->gun = gun;
    }
    //getter
    int gethealth(){
        return health;
    }
    int getage(){
        return age;
    }
    int getscore(){
        return score;
    }
    bool getis_alive(){
        return is_alive;
    }
    Gun getGun(){
        return gun;
    }
    // void setHelment(int level){
    //     Helment *helment = new Helment;
    //     Helment->setLevel()level;
    //     int health = 0 ;
    //     if(level == 1)
    //         health = 25;
    //     else if(level == 2)
    //         health = 50;
    //     else if(level == 3)
    //         health = 100;
    //     else
    //         cout << "error invalid";
    //     helment->setHp(health);
        
    // }
};
int addscore(player a , player b){
    return a.getscore() + b.getscore();
}
player maxscore(player a,player b){
    if(a.getscore() > b.getscore()){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    player mayank;
    Gun akm;
    akm.ammo = 15;
    akm.damage = 50;
    akm.scope = 2;
    mayank.sethealth(190);
    mayank.setage(18);
    mayank.setscore(4);
    mayank.setis_alive(true);
    mayank.setGun(akm);
    

    // cout << mayank.gethealth() << endl;
    // cout << mayank.getage() << endl;
    // cout << mayank.getscore() << endl;
    // cout << mayank.getis_alive() << endl;



    player amit;
    Gun awm;
    awm.ammo = 10;
    awm.damage = 150;
    awm.scope = 8;
    amit.sethealth(180);
    amit.setage(19);
    amit.setscore(6);
    amit.setis_alive(true);
    amit.setGun(awm);
    
    // cout << amit.gethealth() << endl;
    // cout << amit.getage() << endl;
    // cout << amit.getscore() << endl;
    // cout << amit.getis_alive() << endl;
    Gun gun123 = amit.getGun();
    cout << gun123.damage << endl;
    

    // cout << addscore(mayank,amit) << endl;
    // player print = maxscore(mayank,amit);
    // cout << print.getscore() << endl;

    // player *pointer = new player;  // agar haame or bi player add krne hai toh loop laga denge
    // (*pointer).setscore(200);
    // cout << (*pointer).getscore(); 
}