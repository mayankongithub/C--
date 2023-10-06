// #include<iostream>
// using namespace std;
// int main(){
//     struct book{
//         string name;
//         int nOp;
//         float price;
//     };
//     struct book x;
//     x.nOp = 200;
//     x.name = "Mayank Sharma";
//     cout << x.name;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     struct person{
//         string name;
//         int age;
//         float salary;
//     }a,b;
//     a.name = "Mayank";
//     a.age = 18;
//     a.salary = 0;

//     b.name = "Milan";
//     b.age = 20;
//     b.salary = 0;
//     cout << a.name << endl;
//     cout << b.age;
// }
// TYPEDEF
// #include<iostream>
// using namespace std;
// typedef int number;
// int main(){
//     number age = 18;
//     cout << age;
// }

// ARRAY OF STRUCTURES
// #include<iostream>
// using namespace std;
// int main(){
//     typedef struct player{
//         string name;
//         int hp;
//         int score;
//     }player;

//     player player1;
//     player1.name = "Mayank";
//     player1.hp = 89;
//     player1.score = 4;

//     player player2;
//     player2.name = "Milan";
//     player2.hp = 93;
//     player2.score = 2;
    
//     player arr[2];
//     arr[0].name = "rohit";
//     arr[0].hp = 30;
//     arr[0].score = 6;

//     arr[1].name = "manan";
//     arr[1].hp = 60;
//     arr[1].score = 2;
//     for(int i=0;i<3;i++){
//         cout <<  "Name of the player -> " << arr[i].name << endl;
//         cout << "Health of the player -> " << arr[i].hp << endl;
//         cout << "Score of the player -> " << arr[i].score << endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     typedef struct cricketers{
//         string name;
//         int age;
//         int score;
//     }cricketers;
//     cricketers arr[2];

//     arr[0].name = "kohli";
//     arr[0].age = 30;
//     arr[0].score = 15000;

//     arr[1].name = "dhoni";
//     arr[1].age = 42;
//     arr[1].score = 10000;

//     for(int i=0;i<2;i++){
//         cout << "Name - " << arr[i].name << endl;
//         cout << "Age - " << arr[i].age << endl;
//         cout << "Score - " << arr[i].score << endl;
//         cout << endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     typedef struct cricketers{
//         string name;
//         int age;
//         int score;
//     }cricketers;
//     cricketers arr[2];
//     for(int i=0;i<2;i++){
//         cout << "Enter the name of the player -> ";
//         getline(cin,arr[i].name);
//         cout  << "Enter the age of the player -> ";
//         cin >> arr[i].age;
//         cout << "Enter the score of the player -> ";
//         cin >> arr[i].score;  
//     }
//     for(int i=0;i<2;i++){
//         cout << "Name - " << arr[i].name << endl;
//         cout << "Age - " << arr[i].age << endl;
//         cout << "Score - " << arr[i].score << endl;
//     }
// }
// #include<iostream>
// using namespace std;
// typedef struct student{
//     int roll_no;
//     string name;
//     int year;
//     string department;
// }student;
// void check(student a,student b){
//     if(a.department == b.department){
//         cout << "SAME";
//     }
//     else{
//         cout << "NOT SAME";
//     }
// }
// int main(){
//     student a;
//     a.roll_no = 2;
//     a.name = "me";
//     a.year = 2022;
//     a.department = "CSE";

//     student b;
//     b = a;
//     check(a,b);
// }
// #include<iostream>
// using namespace std;
// typedef struct person{
//     int age;
//     int weight;
// }person;
// void assign(person *n){
//     (*n).age = 18;
//     (*n).weight = 60;
       //n->weight = 60;
// }
// int main(){
//     person p1;
//     assign(&p1);
//     cout << (p1).age;
// }

// #include<iostream>
// using namespace std;
// typedef struct student{
//     string name;
//     string batch;
//     int roll_no;
// }student;
// int main(){
//     student stud1;
//     stud1.name = "MAYANK";
//     stud1.batch = "CSE";
//     stud1.roll_no = 1909;
//     cout << stud1.name << endl;
//     cout << stud1.batch << endl;
//     cout << stud1.roll_no; 
// }
// #include<iostream>
// using namespace std;
// int main(){
//     struct cricketers{
//         int age;
//         string name;
//         int score;
//     }player1 , player2;

//     player1.name = "Dhoni";
//     player1.age = 42;
//     player1.score = 10000;

//     player2.name = "kohli";
//     player2.age = 35;
//     player2.score = 15000;

//     cout << player1.name << endl;
//     cout << player2.age;
// }
// #include<iostream>
// using namespace std;
// typedef struct pubg{
//     int health;
//     int kill;
// }game;
// int main(){
//     game arr[2];
//     for(int i=0;i<2;i++){
//         cin >> arr[i].health;
//         cin >> arr[i].kill;
//     }
//     for(int i=0;i<2;i++){
//         cout << arr[i].health << endl;
//         cout << arr[i].kill << endl;
//     }
// }
// #include<iostream>
// using namespace std;
// typedef struct student{
//     int roll_no;
//     string name;
//     int year;
//     string department;
// }student;
// void check(student a,student b){
//     if(a.department == b.department){
//         cout << "SAME";
//     }
//     else{
//         cout << "NOT SAME";
//     }
// }
// int main(){
//     student a;
//     a.roll_no = 2;
//     a.name = "me";
//     a.year = 2022;
//     a.department = "CSE";

//     student b;
//     b.department = "CSE";
//     check(a,b);
// }
// #include<iostream>
// using namespace std;
// struct student{
//     int roll;
//     string name;
// };
// void details(student *stud1){
//     (*stud1).roll = 90;
//     (*stud1).name = "mayank";
//     //cout << (*stud1).name;
// }
// int main(){
//     struct student stud1;
//     details(&stud1);
//     cout << stud1.name << endl;
//     cout << sizeof(student) ;
    
// }
// #include<iostream>
// using namespace std;
// typedef struct std4{
//     int age : 2;
//     int hj : 2;  
//     //char b;
// }student;
// int main(){
//     student s1;
//     cout << sizeof(s1) << " ";
// }
// #include<iostream>
// using namespace std;
// enum week{monday,tuesday,wednesday,thursday,friday,saturday,sunday};
// int main(){
//     week day;
//     day = friday;
//     cout << day + 1;
// }
// #include<iostream>
// #include<string>
// using namespace std;
// enum month{jan,feb,march,april,may,june,july,aug,sep,oct,nov,dec};
// enum month name;
// int main(){
//     string arr[] = {"jan","feb","march","april","may","june","july","aug","sep","oct","nov","dec"};
//     for(char j=0;j<12;j++){
//         for(int i=j;i<=j;i++){
//             cout << arr[j] << " -> " << i+1 << endl;
//         }
//     }
    
// }
// #include<iostream>
// using namespace std;
// typedef struct student{
//     char name;
//     int roll;
//     char y;
// }student;
// int main(){
//     //struct student one;
//     student one;
//     //one.name = "Mayank";
//     one.roll = 1909;
//     //cout << one.name << endl << one.roll;
//     cout << endl << sizeof(student);
// }
// #include<iostream>
// using namespace std;
// void swap(int *a,int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
//     cout << *a << endl << *b;
// }
// int main(){
//     int a = 5;
//     int b = 9;
//     swap(&a,&b);
//     cout << endl << a  << endl << b;
// }
// #include<iostream>
// using namespace std;
// typedef struct book{
//         char name   ;
// }chart;
// int main(){
//     chart t;
//     t.name = 'd';
//     cout << t.name;

// }
#include<iostream>
using namespace std;
typedef struct student{
    int roll_no;
    string name;
    int year;
    string department;
}student;
void check(student a,student b){
    if(a.roll_no == b.roll_no){
        cout << "SAME";
    }
    else{
        cout << "NOT SAME";
    }
}
int main(){
    student a;
    a.roll_no = 2;
    a.name = "me";
    a.year = 2022;
    a.department = "CSE";

    student b;
    b.department = "CSE";
    b.roll_no = 2;
    check(a,b);
}