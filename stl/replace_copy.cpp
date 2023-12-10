#include<bits/stdc++.h>
using namespace std;
bool ismultiple(int i){
    if(i%10==0) return true;
    else return false;
}
int main(){
    int n;
    cout << "Enter the value of n -> ";
    cin >> n;
   vector<int>v(n,0);
   vector<int>ans(n,0);
   for(int i=0;i<n;i++){
    cin >> v[i];
   }
   // IT WILL COPY AND IT WILL REPLACE IF IT WILL BE THE MULTIPLE OF 10 and then it will change the value to 17
   replace_copy_if(v.begin(),v.end(),ans.begin(),ismultiple,17);
   for(int i=0;i<n;i++){
    cout << ans[i] << " ";
   }
}