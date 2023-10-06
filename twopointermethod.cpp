// #include<iostream>
// #include<vector>
// using namespace std;
// void sort02(vector<int>&v){
//     int i=0,j=v.size()-1;
//                            //1 0 0 1 0 1 1 0
//                            //0 0 0 0 1 1 1 1
//     while(i<j){
//         if(v[i]>v[j]){
//             int temp = v[i];
//             v[i] = v[j];
//             v[j] = temp;
//             i++;
//             j--;
//         }
//         // if(v[i]==1 && v[j]==0){
//         //     v[i] = 0;
//         //     v[j] =  1;
//         //     i++;
//         //     j--;
//         // }
//         if(v[i]==0){
//             i++;
        
//         }
//         if(v[j]==1){
//             j--;
//         }
       
//     }
//     for(int i=0;i<v.size();i++){
//         cout << v[i] << '\t';
//     }
// }

// int main(){
//     vector<int>v;
//     v.push_back(1);//1 1 0 1 0 1 1 0
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(1);
//     v.push_back(0);
//     sort02(v);
//     cout << endl;
    
// }
#include<iostream>
#include<vector>
using namespace std;
void sort03(vector<int>&v){
    int i=0,j=v.size()-1;
    while(i<j){
        if(v[i]<0 && v[j]>0){
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
        if(v[i]>0){
            i++;
        }
        if(v[j]<0){
            j--;
        }
    }
    for(int i=0;i<v.size();i++){
        cout << v[i] << '\t';
    }
}
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(-8);
    v.push_back(3);
    v.push_back(6);
    v.push_back(5);
    v.push_back(-4);
    v.push_back(-2);
    sort03(v);
}
