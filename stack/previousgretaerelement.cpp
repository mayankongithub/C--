#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[8] = {3,1,2,7,4,6,2,3};
    int n = 8;
    int newarr[n];
    newarr[0] = -1;
    stack<int>st;
    st.push(arr[0]);
    for(int i=1;i<n;i++){
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }
        if(st.size()==0) newarr[i] = -1;
        else{
            newarr[i] = arr[i];
        }
        st.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout << newarr[i] << " ";
    }
}