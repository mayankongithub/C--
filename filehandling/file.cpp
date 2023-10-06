#include<iostream>
#include<fstream>
using namespace std;
int main(){
    FILE *ptr;
    ptr = fopen("not.txt",'r');
    if(ptr !=NULL){
        cout << "file is opened";
    }
    else{
        cout << "ERROR";
    }
}