#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[] = {2,1,5,6,2,3};
    int n = 6;
    int nse[n];
    nse[n-1] = n;
    stack<int>st;
    st.push(n-1);
    for(int i=n-2;i>=0;i--){
        while(st.size()>0 && arr[st.top()]>=arr[i]){
            st.pop();
        }
        if(st.size()==0) nse[i] = n;
        else{
            nse[i] = st.top();
        }
        st.push(i);
    }
    for(int i=0;i<n;i++){
        cout << nse[i] << " ";
    }
    cout << endl;

    int pse[n];
    pse[0] = -1;
    stack<int>gt;
    gt.push(0);
    for(int i=1;i<n;i++){
        while(gt.size()>0 && arr[gt.top()]>=arr[i]){
            gt.pop();
        }
        if(gt.size()==0) pse[i] = -1;
        else{
            pse[i] = gt.top();
        }
        gt.push(i);
    }
    for(int i=0;i<n;i++){
        cout << pse[i] << " ";
    }

}