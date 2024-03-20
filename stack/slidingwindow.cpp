#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    int arr[] = {1,3,-1,-3,5,3,6,7};
    stack<int>st;
    int n = 8;
    int k =3;
    st.push(n-1);
    int ngi[n];
    ngi[n-1] = n;
    for(int i=n-2;i>=0;i--){
        while(st.size()>0 && arr[st.top()]<=arr[i]){
            st.pop();
        }
        if(st.size()==0) ngi[i] = n;
        else{
            ngi[i] = st.top();
        }
        st.push(i);
    }
    vector<int>ans;
    int j=0;
    for(int i=0;i<n-k+1;i++){
        if(j<i) j = i;
        int mx = arr[j];
        while(j<i+k){
            mx = arr[j];
            if(ngi[j] >= i+k) break;
            j = ngi[j];
        }
        ans.push_back(mx);
    }
    int y = ans.size();
    for(int i=0;i<y;i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    for(int i=0;i<n;i++){
        cout << ngi[i] << " ";
    }
}