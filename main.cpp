//hii
//me
//me
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     for(int i=1;i<=n;i++){
//         cout << i;
//     }
// }
//me
//me
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5];
//     for(int i=0;i<5;i++){
//         cin >> arr[i];
//     }
//     for(int i=0;i<5;i++){
//         cout << arr[i]<< '\n';
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5];
//     for(int i=0;i<5;i++){
//         cin >> arr[i];
//     }
//     for(int i=0;i<5;i++){
//         if(arr[i]<35){
//             cout << i << '\t';
        
//         }
//     }
//     cout << sizeof(arr);   

// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     int arr[n];
//     int a=0;
//     for(int i=0;i<n;i++){
//         cout << "Enter the element at index[" << a << "] - ";
//         a++;
//         cin >> arr[i];
//     }
//     int sum = 0;
//     for(int i=0;i<n;i++){
//         sum += arr[i];
//     }
//     cout << sum;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int x;
//     cout << "Enter x : ";
//     cin >> x;
//     bool flag = false;
//     for(int i=0;i<5;i++){
//         if(arr[i]==x){
//             flag = true;
//         }
//     }
//     if(flag = true){
//         cout << x << " is present in the given array";
//     }
//     else{
//         cout << x << " x is not present in the given array";
//     }
// }
// #include<iostream>
// #include<limits.h>
// using namespace std;
// int main(){
//     int arr[5] = {12,324,33,24,15};
//     int max = INT_MIN;
//     int s_max = INT_MIN;
//     for(int i=0;i<5;i++){
//         if (max<arr[i]){
//             max = arr[i];
//         }
//         if(s_max<arr[i] && arr[i]!=max){
//             s_max = arr[i];
//         }
//     }
//     cout << max << endl;
//     cout << s_max;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int * ptr = arr;
//     cout << ptr << endl;
//     cout << arr << endl;
//     cout << &arr[0] << endl;
//     cout << &arr[1] << endl;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {1,2,3,4,5};
//     int *ptr = arr;
//     for(int i=0;i<5;i++){
//         cout << *ptr << '\t';//cout << i[arr] << '\t
//         ptr++;
//     }
//     ptr = arr;//pointing towards ist element
//     *ptr = 4;//ptr[0] = 4
//     ptr++;// ptr[0] + 1 = ptr[1]
//     *ptr = 8;//ptr[1] = 8
//     ptr--;//ptr[1] - 1 = ptr[0]
//     cout << endl;
//     for(int i=0;i<5;i++){
//         cout << *ptr<<'\t';
//         ptr++;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     int count = 0;
//     while(t!=0){
//         int n;
//         cin>>n;
//         count = 0;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         for(int i=0;i<n;i++){
//             if(arr[i]>=1000){
//                 count++;
//             }
//         }
//         cout<<count<<endl;
//         t--;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int t = 4;
//     int arr[4];
//     while(t--){
//         for(int i=0;i<5;i++){
//             cout << "Enter the element : ";
//             cin >> arr[i];
//         }
//     }
//     while(t--){
//         for(int i=0;i<5;i++){
//         cout << arr[i] << endl;;
//         }
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout << "Enter the value of a -> ";
//     cin >> a;
//     int b;
//     cout << "Enter the value of b -> ";
//     cin >> b;
//     char ch;
//     cout << "Enter the operator -> ";
//     cin >> ch;
//     switch(ch){
//         case '+' : cout << a+b;
//                   break;
//         case '-' : cout << a-b;
//                   break;
//         case '/' : cout << a/b;
//                   break;
//         case '*' : cout << a*b;
//                   break;
//         default : cout << "Enter the valid operator";
//                   break;
//     }

// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[4][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
//     int minr = 0,minc = 0;
//     int maxr = 3,maxc = 4;
//     while(minr<=maxr && minc<=maxc){
//         for(int i=minc;i<=maxc;i++){
//             cout << arr[minc][i] << " ";
//         }
//         minr++;
//         for(int j=minr;j<=maxr;j++){
//             cout << arr[j][minr] << " ";
//         }
//         maxc--;
//         for(int i=maxc;i<)
//     }
// }
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int n = 5;
//     int ans = 0;
//     int i = 0;
//     while(n!=0){
//         int bit = n & 1;
//         ans = (bit * pow(10,i) ) + ans;
//         n = n >> 1;
//         i++;
//     }
//     cout << ans <<endl;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n = 10;
//     int arr[32];
//     int i = 0;
//     while(n > 0){
//         arr[i] = n & 1;
//         n = n >> 1;
//         i++;
//     }
//     for(int k=i-1;k>=0;k--){
//         cout << arr[k];
//     }
//     cout << endl;
//     for(int j=0;j<i;j++){
//         if(arr[j] == 1){
//             arr[j] == 0;
//         }
//         else{
//             arr[j] == 1;
//         }
//     }
//     for(int g=0;g<i;g++){
//         cout << arr[g];
//     }
// }
// #include<iostream>
// using namespace std;
// void diff(int a,int b){
//     cout << a-b;
// }
// void sum(int a,int b){
//     cout << a+b;
// }
// void divide(int a,int b){
//     cout << a/b;
// }
// void mul(int a,int b){
//     cout << a*b;
// }
// int main(){
//     // int a,b;
//     // cout << "Enter the value of a -> ";
//     // cin >> a;
//     // cout << "Enter the value of b -> ";
//     // cin >> b;
//     // char op;
//     // cout << "Enter the operator -> ";
//     // cin >> op;
//     // void (*x[]) (int,int) = {sum,divide,mul,diff};
//     // (*x)(10,20);
//     for(int i=0;i<4;i++){
//         void (*x[]) (int,int) = {sum,divide,mul,diff};
//         (*x[i])(10,20);
//         cout << endl;
//     }
// }
// #include<iostream>
// #include<limits.h>
// using namespace std;
// int main(){
//     long long x = LONG_LONG_MAX;
//     cout << x;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     //int x = 0;
//     //int *ptr = &x;
//     int *ptr = (int*) calloc(25,sizeof(int));
//     cout << *ptr << " ";
//     * ptr++;
//     //x++;
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v(26,0);
//     string str = "mayanky";
//     char ch;
//     int n = str.size();
//     for(int i=0;i<n;i++){
//         ch = str[i];
//         int ascii = (int)(ch);
//         v[ascii-97]++;
//     }
//     int max = 0;
//     for(int i=0;i<26;i++){
//         if(max<v[i]){
//             max = v[i];
//         }
//     }
//     for(int i=0;i<26;i++){
//         if(v[i] == max){
//             char change = (char)(97+i);
//             cout << change << " ";
//         }
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     string str = "mayank";
//     int count = 0;
//     int n = str.size();
//     for(int i=0;i<n;i++){
//         if(i==0){
//             str[i] = str[i+1];
//             count++;
//         }
//         else{
//             if(str[i] == str[i+1] || str[i] == str[i-1]){
//             count++;
//         }
//             else{
//                 str[n-1] = str[i-1];
//                 //count++;
//             }
//         }
        
//     }
//     cout << count;
// }
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str = "good me";
//     for(int i=str.size();i>=0;i--){
//         cout << str[i] << " ";
//     }   
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int digit = 0;
//     int arr[] = {9,9,9};
//     for(int i=0;i<3;i++){
//         digit = digit * 10 + arr[i];
//     }
//     int rem;
//     digit = digit + 1;
//     int i = 0;
//     while(digit>0){
//         rem = digit%10;
//         arr[i] = rem;
//         i++;
//         rem = 0;
//         digit = digit/10;
//     }
//     for(int i=3;i>=0;i--){
//         cout << arr[i] << " ";
//     }
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v(26,0);
//     string str = "mayanky";
//     char ch;
//     int n = str.size();
//     for(int i=0;i<n;i++){
//         ch = str[i];
//         int ascii = (int)(ch);
//         v[ascii-97]++;
//     }
//     int max = 0;
//     for(int i=0;i<26;i++){
//         if(max<v[i]){
//             max = v[i];
//         }
//     }
//     for(int i=0;i<26;i++){
//         if(v[i] == max){
//             char change = (char)(97+i);
//             cout << change << " ";
//         }
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     //int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//     int n,m;
//     cout << "Enter the value of n -> ";
//     cin >> n;
//     cout << "Enter the value of m -> ";
//     cin >> m;
//     int arr[n][m];
//      int sum = 0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout << "Enter the element -> ";
//             cin >> arr[i][j];
//         }
//     }
//     // for(int i=0;i<3;i++){
//     //     for(int j=0;j<3;j++){
//     //         if(i+j==2 || j>=i && i!=0){
//     //             sum += arr[i][j];
//     //         }
//     //     }
//     // }
//     cout << sum;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             if(i!=j){
//                 int temp = arr[i][j];
//                 arr[i][j] = arr[j][i];
//                 arr[j][i] = temp;
//             }
//             else{
//                 arr[i][j] = arr[i][j];
//             }
            
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cin >> n >> m;
//     //int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//     int arr[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout << "Enter the element -> ";
//             cin >> arr[i][j];
//         }
//     }

//        for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//         cout << endl;

//     }
//     for(int i=0;i<n;i++){
//         for(int j=i;j<m;j++){
//             swap(arr[i][j],arr[j][i]);
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
// //     cout << "Enter the value of n -> ";
// //     cin >> n;
// //     cout << "Enter the value of m -> ";
// //     cin >> m;
// //     int arr[n][m];
// //     for(int i=0;i<n;i++){
// //         for(int j=0;j<m;j++){
// //             cout << "Enter the element -> ";
// //             cin >> arr[i][j];
// //         }
// //     }
//     int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             int temp = arr[i][0];
//             arr[i][0] = arr[i][3-1];
//             arr[i][3-1] = temp;
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int i=0;
//     for(cout<<i<<"f ";cout<<i<<"s ";cout<<i<<"t "){
//         i++;
//         if(i>10) break;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// bool isPalindrome(int x) {
//     int n = x;
//     int sum = 0;
//     if(x<0){
//         return false;
//     }
//     else{
//         while(n!=0){
//             int rem = n%10;
//             sum = sum*10+rem;
//             n = n/10;
//         }
//     }
    
//     if(sum==x){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
// int main(){
//     cout << isPalindrome(-121);
// }
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int arr[] = {1,5,4,2};
//     sort(arr,arr+4);
//     for(int i=0;i<4;i++){
//         cout << arr[i] << " ";
//     }
// }
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int arr[] = {3,2,4};
//     int idx1 = 0;
//     int idx2 = 0;
//     for(int i=0;i<3;i++){
//         for(int j=1;j<3;j++){
//             if(arr[i]+arr[j]==6){
//                 idx1 = i;
//                 idx2 = j;
//                 break;
//             }
//         }
//     }
//     cout << idx1 << endl << idx2;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int x = 5;
//     int *t = &x;
//     cout << t;
// }
// #include<iostream>
// using namespace std;
// int print(int n,int count){
//     if(n==0){
//         return n;
//     }
    
//     return n + print(n-1,count+n);
// }
// int main(){
//     int n = 10;
//     int x = print(n,0);
//     cout << x;
// }
// #include<iostream>
// using namespace std;
// int factorial(int n){
//     if(n==0 || n==1) return 1;
//     return n*factorial(n-1);
// }
// int main(){
//     int n = 5;
//     int x = factorial(n);
//     cout << x;
// }
// #include<iostream>
// using namespace std;
// int fibo(int n){
//     if(n==1 || n==2) return 1;
//     return fibo(n-1) + fibo(n-2);
// }
// int main(){
//     int n = 10;
//     int x = fibo(n);
//     cout << x;
// }
// #include<iostream>
// using namespace std;
// int factorial(int n){
//     if(n==0 || n==1) return 1;
//     if(n>0){
//         return n*factorial(n-1);
//     }
//     else{
//         return n*factorial(n+1);
//     }
    
// }
// int main(){
//     int n = -5;
//     int x = factorial(n);
//     cout << x;
// }
// #include<iostream>
// using namespace std;
// int fibo(int n){
//     if(n==1 || n==0) return n;
//     else{
//         return (fibo(n-1) + fibo(n-2));
//     }
// }
// int main(){
//     int n = 10;
//     int i = 0;
//     while (i < n ){
//         cout << fibo(i) << " ";
//         i++;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// void print(int arr[],int i,int n){
//     if(i==n) return;
//     cout << arr[i] << " ";
//     print(arr,i+1,n);
// } 
// int main(){
//     int arr[] = {1,2,3,4,5};
//     print(arr,0,5);
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int x = 10;
//     for(int i=0;i<5;i++){
//         if(i%2==0)
//         continue;
//         x+=i;
//     }
//     cout << x;
// }
// #include<iostream>
// using namespace std;
// class node{
// public:
//     int val;
//     node* next;

//     node(int val){
//         this->val = val;
//         next = NULL;
//     }
// };
// int main(){
//     node* a = new node(10);
//     node* b = new node(10);
//     node* c = new node(30);
//     node* d = new node(40);
//     node* e = new node(50);
//     a->next = b;
//     b->next = c;
//     c->next = d;
//     d->next = e;
//     node* temp = a;
//     node* be = b;
//     while(b!=NULL){
//         if(a->val==b->val){
//             b = b->next;
//         }
//         a->next = b;
//         a = b;
//         if(b!=NULL){
//             b = b->next;
//         }
//     }
//     while(temp){
//         cout<<temp->val<<" ";
//         temp = temp->next;
//     }
// }
// #include<iostream>
// using namespace std;
// class node{
// public:
//     int val;
//     node* next;

//     node(int val){
//         this->val = val;
//         next = NULL;
//     }
// };
// node* reverse(node* a){
//     //node* head = a;
//     node* tail = NULL;
//     node* temp = NULL;
//     int n = 0;
//     int k = 2;
//     while(temp){
//         if(temp->next==NULL)tail = temp;
//         n++;
//         temp = temp->next;
//     }
//     temp = a;
//     for(int i=1;i<n-k;i++){
//         temp = temp->next;
//     }
//     tail->next = a;
//     a = temp->next;
//     temp->next = NULL;
//     return a;
// }
// int main(){
//     node* a = new node(10);
//     node* b = new node(20);
//     node* c = new node(30);
//     node* d = new node(40);
//     node* e = new node(50);
//     a->next = b;
//     b->next = c;
//     c->next = d;
//     d->next = e;
//     node* ntemp = reverse(a);
//     while(ntemp!=NULL){
//         cout << ntemp->val << " ";
//         ntemp = ntemp->next;
//     }
// }
// #include<iostream>
// using namespace std;
// class node{
// public:
//     int val;
//     node* next;

//     node(int val){
//         this->val = val;
//         next = NULL;
//     }
// };
// int main(){
//     node* a = new node(10);
//     node* b = new node(20);
//     node* c = new node(30);
//     node* d = new node(40);
//     node* e = new node(50);
//     a->next = b;
//     b->next = c;
//     c->next = d;
//     d->next = e;

//     node* ab = new node(14);
//     node* bc = new node(2);
//     node* cd = new node(13);
//     node* de = new node(80);
//     node* ef = new node(60);
//     ab->next = bc;
//     bc->next = cd;
//     cd->next = de;
//     de->next = ef;
//     node* temp = a;
//     node* tempab = ab;
//     node* farzi = new node(100);
//     node* tempf = farzi;
//     while(temp!=NULL && tempab!=NULL){
//         if(temp->val < tempab->val){
//             node* t = new node(temp->val);
//             tempf->next = t;
//             tempf = t;
//         }
//         else{
//             node* t = new node(tempab->val);
//             tempf->next = t;
//             tempf = t;
//         }
//         tempf->next = NULL;
//     }
//     node* print = farzi->next;
//     while(print != NULL){
//         cout << print->val << " ";
//         print = print->next;
//     }

// }
// #include<iostream>
// using namespace std;
// class node{
// public:
//     int val;
//     node* next;

//     node(int val){
//         this->val = val;
//         next = NULL;
//     }
// };
// void deleteNode(node* a){

//     node* temp = a;
//     for(int i=1;i<3;i++){
//         temp = temp->next;
//     }
//     temp->val=temp->next->val;
//     temp->next = temp->next->next;
// }
// int main(){
//     node* a = new node(10);
//     node* b = new node(20);
//     node* c = new node(30);
//     node* d = new node(40);
//     node* e = new node(50);
//     a->next = b;
//     b->next = c;
//     c->next = d;
//     d->next = e;
//     deleteNode(a);
//     node* ltemp = a;
//     while(ltemp!=NULL){
//         cout << ltemp->val << " ";
//         ltemp = ltemp->next;
//     }
// }
//me
// #include<iostream>
// using namespace std;
// int main(){
//     int n = 10;
//     int sum = 0;
//     int i = 0;
//     while(i<=n){
//         sum = sum + i;
//         i++;
//     }
//     cout << sum;
    
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the value of n -> ";
//     cin >> n;
//     int m;
//     cout << "Enter the value of m -> ";
//     cin >> m;

//     int p;
//     cout << "Enter the value of p -> ";
//     cin >> p;
//     int q;
//     cout << "Enter the value of q -> ";
//     cin >> q;  
//     if(m==p){
//         int arr[n][m];
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 cout << "Enter the value of the element at the index[" << i << "][" << j << "] -> ";
//                 cin >> arr[i][j];
//             }
//         }
//         int brr[p][q];
//         for(int i=0;i<p;i++){
//             for(int j=0;j<q;j++){
//                 cout << "Enter the value of the element at the index[" << i << "][" << j << "] -> ";
//                 cin >> brr[i][j];
//             }
//         }
//         int result[n][q];
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 result[i][j] = 0;
//                 for(int k=0;k<p;k++){
//                     result[i][j] += arr[i][k]*brr[k][j];
//                 }
//             }
//         }
//         for(int i=0;i<n;i++){
//             for(int j=0;j<q;j++){
//                 cout << result[i][j] << " ";
//             }
//             cout << endl;
//         }        
        
//     }  
//     else{
//         cout << "Cannot multiply";
//     }
// }
// WAVE PRINT
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//     for(int i=0;i<3;i++){
//         if(i%2==0){
//             for(int j=0;j<3;j++){
//                 cout << arr[i][j] << " ";
//             }
//         }
//         else{
//             for(int j=2;j>=0;j--){
//                 cout << arr[i][j] << " ";
//             }
//         }
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//     for(int i=2;i>=0;i--){
//         if(i%2==0){
//             for(int j=0;j<3;j++){
//                 cout << arr[i][j] << " ";
//             }
//         }
//         else{
//             for(int j=2;j>=0;j--){
//                 cout << arr[i][j] << " ";
//             }
//         }
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//     int minr = 0;
//     int minc = 0;
//     int maxr = 2;
//     int maxc = 3;

//     while(minr<=maxr && minc<=maxc){
//         for(int j=minc;j<=maxc;j++){
//             cout << arr[minc][j] << " ";
//         }
//         minr++;
//         if(minr>maxr || minc>maxc) break;
//         for(int i=minr;i<=maxr;i++){
//             cout << arr[i][maxc] << " ";
//         }
//         maxc--;
//         if(minr>maxr || minc>maxc) break;
//         for(int j=maxc;j>=minc;j--){
//             cout << arr[maxr][j] << " ";
//         }
//         maxr--;
//         if(minr>maxr || minc>maxc) break;
//         for(int i=maxr;i>=minr;i--){
//             cout << arr[i][minc] << " ";
//         }
//         minc++;
//         // 1 2 3
//         // 4 5 6
//         // 7 8 9
//         // 1 2 3 6 9 8 7 4 5
//     }
// }
// #include<iostream>
// #include<algorithm>
// #include<limits.h>
// using namespace std;
// int main(){
//     int sum = 0;
//     int max = INT_MIN;
//     int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             if(arr[i][j]>max){
//                 swap(max,arr[i][j]);
//             }
//         }
//     }
//     cout << max;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//     int brr[3][3];
//     // for(int i=0;i<3;i++){
//     //     for(int j=0;j<3;j++){
//     //         brr[i][j] = arr[j][i];
//     //     }
//     // }
//     // for(int i=0;i<3;i++){
//     //     for(int j=0;j<3;j++){
//     //         cout << brr[i][j] << " ";
//     //     }
//     //     cout << endl;
//     // }
//     // 1 2 3
//     // 4 5 6
//     // 7 8 9
    
//     // 1 4 7
//     // 2 5 8
//     // 3 6 9
//     for(int i=0;i<3;i++){
//         for(int j=i+1;j<3;j++){
//             swap(arr[i][j],arr[j][i]);
              
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//     for(int i=0;i<3;i++){
//         for(int j=i+1;j<3;j++){
//             swap(arr[i][j],arr[j][i]);
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=2;j>=0;j--){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[9];
//     for(int i=0;i<9;i++){
//         cout << "Enter the value at index[" << i << "] -> ";
//         cin >> arr[i];
//     }
//     for(int i=0;i<9;i++){
//         cout << arr[i] << " ";
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cout << "Enter the value of n -> ";
//     cin >> n;

//     cout << "Enter the value of m -> ";
//     cin >> m;
//     int arr[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout << "Enter the value at index ["<<i<<"]["<<j<<"] -> ";
//             cin >> arr[i][j];
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//     int brr[3][3] = {1,2,3,4,5,6,7,8,9};
//     int result[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             result[i][j] = arr[i][j] + brr[i][j];
//         }
//     }

//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout << result[i][j] << " ";
//         }
//         cout << endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the value of n -> ";
//     cin >> n;
//     int m;
//     cout << "Enter the value of m -> ";
//     cin >> m;

//     int p;
//     cout << "Enter the value of p -> ";
//     cin >> p;
//     int q;
//     cout << "Enter the value of q -> ";
//     cin >> q;  
//     if(m==p){
//         int arr[n][m];
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 cout << "Enter the value of the element at the index[" << i << "][" << j << "] -> ";
//                 cin >> arr[i][j];
//             }
//         }
//         int brr[p][q];
//         for(int i=0;i<p;i++){
//             for(int j=0;j<q;j++){
//                 cout << "Enter the value of the element at the index[" << i << "][" << j << "] -> ";
//                 cin >> brr[i][j];
//             }
//         }
//         int result[n][q];
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 result[i][j] = 0;
//                 for(int k=0;k<p;k++){
//                     result[i][j] += arr[i][k] * brr[k][j];
//                 }
//             }
//         }
//         for(int i=0;i<n;i++){
//             for(int j=0;j<q;j++){
//                 cout << result[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }  
//     else{
//         cout << "Cannot multiply";
//     }
    
// }
// #include<iostream>
// #include<string>
// using namespace std;
// void reverse(string &s,int i,int j){
//     while(i<j){
//         swap(s[i],s[j]);
//         i++;
//         j--;
//     }
// }
// int main(){
//     string s = "abc";
//     int k = 1;
//     int n = s.size();
//     reverse(s,0,n-k-1);
//     reverse(s,n-k,n-1);
//     reverse(s,0,n-1);
//     cout << s;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//     for(int j=0;j<3;j++){
//         if(j%2==0){
//             for(int i=0;i<3;i++){
//                 cout << arr[i][j] << " ";
//             }
//         }
//         else{
//             for(int i=2;i>=0;i--){
//                 cout << arr[i][j] << " ";
//             }
//         }
        
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//     int arr2[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             arr2[i][j] = arr[j][i];
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=2;j>=0;j--){
//             cout << arr2[i][j] << " ";
//         }
//         cout << endl;
//     }
    
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     for(int i=4;i>=0;i--){
//         cout << arr[i] << " ";
//     }
// }
// 1 2 3 
// 4 5 6
// 7 8 9
// 1 2 3 6 5 4 7 8 9
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//     for(int i=0;i<3;i++){
//         if(i%2==0){
//             for(int j=0;j<3;j++){
//                 cout << arr[i][j] << " ";
//             }
//         }
//         else{
//             for(int j=2;j>=0;j--){
//                 cout << arr[i][j] << " ";
                
//             }
//         }
        
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the value of  n -> ";
//     cin >> n;
//     int arr[n];// int arr[5]
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     for(int i=4;i>=0;i--){
//         cout << arr[i] << " ";
//     }
// }
// #include<iostream>
// #include<limits.h>
// using namespace std;
// int main(){
//     int arr[5] = {1,82,3,4,5};
//     int min = INT_MAX;
//     for(int i=0;i<5;i++){
//         if(min>arr[i]){
//             swap(min,arr[i]);
//         }
//     }
//     cout << min;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int sum = 0;
//     for(int i=0;i<5;i++){
//         sum = sum + arr[i];
//     }
//     cout << sum;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3] = {{1,2,3},
//                     {4,5,6},
//                     {7,8,9}};
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){

//         }
//     }
// }
// #include<iostream>
// using namespace std;
// void find(int m,int n,int arr[3][3]){
//     bool flag = false;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if(arr[i][j]==4){
//                 flag = true;
//                 break;
//             }
//         }
//     }
//     if(flag!=true){
//         cout << "NOT FOUND";
//     }
//     else{
//         cout << "FOUND";
//     }
// }
// int main(){
//     int n = 3;
//     int m = 3;
//     int arr[3][3] = {1,2,3,4,5,6,7,8,9}; 
//     find(m,n,arr);
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int row;
//     int column;
//     cout <<"Enter the number of row -> ";
//     cin >> row;
//     cout << "Enter the number of column -> ";
//     cin >> column;
//     int arr[row][column];
//     for(int i=0;i<row;i++){
//         for(int j=0;j<column;j++){
//             cin >> arr[i][j];
//         }
//     }

//     for(int i=0;i<row;i++){
//         for(int j=0;j<column;j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;
//     cout << endl;
//     // 1 2 3
//     // 4 5 6
//     // 7 8 9

//     // 1 4 7
//     // 2 5 8
//     // 3 6 9
//     // transpose
//     int array[row][column];
//     for(int i=0;i<row;i++){
//         for(int j=0;j<column;j++){
//             array[i][j] = arr[j][i];
//         }
//     }
//     for(int i=0;i<row;i++){
//         for(int j=0;j<column;j++){
//             cout << array[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;
//     cout << endl;
//     // 1 2 3
//     // 4 5 6
//     // 7 8 9

//     // 7 4 1
//     // 8 5 2
//     // 9 6 3

//     // 90 degree
//     for(int i=0;i<row;i++){
//         for(int j=column-1;j>=0;j--){
//             cout << array[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;
//     cout << endl;

//     // wave print
//     // 1 2 3
//     // 4 5 6
//     // 7 8 9
//     // 1 2 3 6 5 4 7 8 9
//      for(int i=0;i<row;i++){
//         if(i%2!=0){
//             for(int j=column-1;j>=0;j--){
//                 cout << arr[i][j] << " ";
//             }
//         }
//         else{
//             for(int j=0;j<column;j++){
//                 cout << arr[i][j] << " ";
//             }
//         }
        
//     }
// }
// #include <iostream>
// using namespace std;
// int non_repeating_elements(int arr[], int n){
//     int count = 1;
//     int i,j;
//     for(i = 0; i<n; i++){
//         for(j = 0; j<n; j++){
//             if(arr[i] == arr[j] && i != j)
//                 break;
//             }
//             if(j == n ){
//                 cout << "\nNon-repeating element [" << count << "]" << " : " << arr[i] << endl;
//                 ++count;
//             }
//         }    
//     return -1;
// }
// int main(){
//     int n,i;
//     cout << "\nEnter the number of elements : ";
//     cin >> n;
//     int arr[n];
//     cout << "\nInput the array elements : ";
//     for(i = 0; i < n; i++){
//         cin >> arr[i];
//     }
//     non_repeating_elements(arr, n);
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {1,2,2,1,5};
//     int i,j;
//     int n = 5;
//     int count = 1;
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             if(arr[i] == arr[j] && i != j)
//                 break;
//             }
//             if(j == n ){
//                 cout << "\nNon-repeating element [" << count << "]" << " : " << arr[i] << endl;
//                 ++count;
//             }
//         }
// }



// #include<iostream>
// #include<string>
// using namespace std;
// void reverse(string &s,int i,int j){
//     while(i<j){
//         swap(s[i],s[j]);
//         i++;
//         j--;
//     }
// }
// int main(){
//     string s = "abc";//cab
//     int k = 1;
//     int n = s.size();
//     reverse(s,0,n-k-1);
//     reverse(s,n-k,n-1);
//     reverse(s,0,n-1);
//     cout << s;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int min = 3;
//     int max = 5;
//     int sum = 0;
//     int idx = -1;
//     int idx2 = -2;
//     for(int i=0;i<5;i++){
//         if(arr[i]==min){
//             idx = i;
//         }
//         if(arr[i]==max){
//             idx2 = i;
//         }
//     }
//     cout << idx << endl << idx2;
// }

#include<iostream>
#include<string>
using namespace std;
void reverse(int arr[],int i,int j){
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
int main(){
<<<<<<< HEAD
    int arr[5] = {1,2,3,4,5};
    int k = 1;
    int n = sizeof(arr)/sizeof(int);
    reverse(arr,0,n-k-1);
    reverse(arr,n-k,n-1);
    reverse(arr,0,n-1);
    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
    }
}
=======
    int arr[5] = {1,2,2,1,5};
    int i,j;
    int n = 5;
    int count = 1;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[i] == arr[j] && i != j)
                break;
            }
            if(j == n ){
                cout << "\nNon-repeating element [" << count << "]" << " : " << arr[i] << endl;
                ++count;
            }
        }
}
>>>>>>> 88a6401521c186464e7e0e84d63ac4f66dbe6d0e
