// #include<iostream>
// using namespace std;
// class fruit{
//     public:
//     string colour;
//     int weight;
//     string shape;
// };
// int main(){
//     fruit apple;
//     apple.colour = "red";
//     apple.weight = 100;
//     cout << apple.colour<<endl;
//     cout << apple.weight;
// }
// #include<iostream>
// //calling variable with function for security purpose
// using namespace std;
// class player{
//     private:
//     int score;
//     int health;
//     public:
//     //#setter
//     void setscore(int s){
//         cout << "ERROR HACK" << endl;
//         score = s;
//     }
//     void sethealth(int h){
//         cout << "ERROR HACK" << endl;
//         health = h;
//     }
//     //#getter
//     int getscore(){
//         return score;
//     }
//     int gethealth(){
//         return health;
//     }
// };
// int main(){
//     //constructors
//     player mayank;
//     mayank.setscore(10);
//     mayank.sethealth(100);
//     cout << mayank.getscore()<<endl;
//     cout << mayank.gethealth()<<endl;
// }
// #include<iostream>
// using namespace std;
// class book{
//     public:
//     char name;
//     int price;
//     int noOfPages;
//     int countbooks(int p){
//         if(price<p){
//             return 1;
//         }
//         else{
//             return 0;
//         } 
//     }
//     bool bookpresent(char book){
//         if(name == book){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// };
// int main(){
//     book untold_story;
//     untold_story.name = 'D';
//     untold_story.price = 1000;
//     untold_story.noOfPages = 400;
//     untold_story.countbooks(500);
//     cout << untold_story.bookpresent('D');
// }
// #include<iostream>
// using namespace std;
// int main(){
//     cout << __LINE__<<endl;
//     cout << __DATE__<<endl;
//     cout << __TIME__<<endl;
//     cout << __FILE__;
// }
// #include<iostream>
// using namespace std;
// class player{
//     private:
//     int score;
//     int age;
//     public:
//     //#setter
//     void setScore(int s){
//         score = s;
//     } 
//     void setAge(int h){
//         age = h;
//     }
//     //#getter
//     int getScore(){
//         return score;
//     }
//     int getAge(){
//         return age;
//     }
// };
// int main(){
//     player mayank;
//     mayank.setScore(100);
//     mayank.setAge(18);
//     cout << mayank.getScore()<<endl;
//     cout << mayank.getAge();
// }
// #include<iostream>
// using namespace std;
// int main(){
//     // Example of HEAP MEMORY
//     int *a;
//     a = new int(5);
//     cout << a;
// }
// #include<iostream>
// using namespace std;
// class player{
//     private:
//     int health;
//     int age;
//     int score;
//     int isAlive;
//     public:
//     void setHealth(int health){
//         this->health = health;
//     }
//     void setAge(int age){
//         this->age = age;
//     }
//     void setScore(int score){
//         this->score = score;
//     }
//     void setisAlive(int isAlive){
//         this->isAlive = isAlive;
//     }
//     int getHealth(){
//         return health;
//     }
//     int getAge(){
//         return age;
//     }
//     int getScore(){
//         return score;
//     }
//     int getisAlive(){
//         return isAlive;
//     }
// };
// int addScore(player a,player b){
//     return a.getScore() + b.getScore();
// }
// player getMaxScore(player a,player b){
//     if(a.getScore()>b.getScore()){
//         cout << "Player a score is greater"<<endl;
//         return a;
//     }
//     else{
//         cout << "Player b score is greater"<<endl;
//         return b;
//     }
// }
// int main(){
//     player Mayank;
//     player amit;
//     player *me = new player;
//     player meobject = *me;

//     int health = 100;
//     int age = 18;
//     int score = 10;
//     bool isAlive = true;
//     Mayank.setHealth(health);
//     Mayank.setScore(10);
//     Mayank.setAge(age);
//     Mayank.setisAlive(isAlive);
//     amit.setHealth(health);
//     amit.setScore(20);
//     amit.setAge(age);
//     amit.setisAlive(isAlive);
//     cout << Mayank.getHealth()<<endl;
//     cout << Mayank.getAge()<<endl;
//     cout << Mayank.getScore()<<endl;
//     cout << Mayank.getisAlive()<<endl;
//     cout << addScore(Mayank,amit)<<endl;
//     player c = getMaxScore(Mayank,amit);
//     cout << c.getScore();

//     meobject.setScore(40);
//     cout << meobject.getScore();
// }
#include<iostream>
using namespace std;
int main(){
    // Example of HEAP MEMORY
   
    
}
