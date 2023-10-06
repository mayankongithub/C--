#include<iostream>
using namespace std;
int main(){
    int arr[5+1] = {1,2,3,4,5,4};
    int x = 40;
    bool flag = false;
    for(int i=0;i<6;i++){
        if(x==arr[i]){
            flag = true;
        }
    }
    if(flag == true){
        cout << "PRESENT";
    }
    else{
        cout << "NOT PRESENT";
    }
}