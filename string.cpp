// #include<iostream>
// using namespace std;
// int main(){
//     string str;
//     getline(cin,str);
//     //cout << str;
//     int count = 0;
//     for(int i=0;str[i]!=0;i++){
//         if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
//             count++;
//         }
//     }
//     cout << count;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     //updation in string and string are mutable(means changes can be done in strings).
//     string str = "mayank";
//     cout<<str<<endl;
//     str[0] = 'n';
//     cout<<str;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     string str;
//     getline(cin,str);
//     for(int i=0;str[i]!='\0';i++){
//         if(i%2==0){
//             str[i]='a';
//         }
//     }
//     cout<<str;
// }
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     string str = "abcdefgh";
//     reverse(str.begin(),str.begin()+4);
//     cout<<str;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int count = 0;
//     string str = "ab";
//     int n = str.size();
   
//     for(int i=0;i<n;i++){
//         if(n==1){
//         break;
//         }
//         else if(n==2 && str[i]!=str[i+1]){
//             count = 1;
//         }
//         else if(str[i]!=str[i+1]){
//             count++;
//         }
//         else if(str[i]!=str[i+1] && str[i]!=str[i-1]){
//             count++;
//         }
       
//         else if(i==n-1){
//             if(str[i]!=str[i-1]){
//                 count++;
//             }
//         }
//     }
//     cout << count;
// }
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     string str = "physicswallah";
//     string str2 = "allawscisyph";
//     sort(str.begin(),str.end());  
//     sort(str2.begin(),str2.end());
//     if(str==str2){
//         cout << "YES";
//     }  
//     else{
//         cout << "NO";
//     }
// }
// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v(26,0);
//     char ch ;
//     string str = "mayyyyaaaanykayy";
//     for(int i=0;i<str.size();i++){
//         char ch = str[i];
//         int ascii = (int)(ch);
//         v[ascii-97]++;
//     }
//     int max = 0;
//     char ch2;
//     for(int i=0;i<26;i++){
//         if(v[i]>=max){
//             max = v[i];
//         }
//     }
//     for(int i=0;i<26;i++){
//         if(v[i]==max){
//             ch2 = (char)(97+i);
//             cout<<ch2<<" - "<<max<<endl;;
//         }
//     }
    
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n = 12345;
//     string s = to_string(n);
//     cout << s.size();
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int count = 0;
//     string s = "abbcdeffghh";
//     int n = s.size();
//     if(n==1){
//         cout << 0;
//     }
//     else{
//         for(int i=0;i<n;i++){
//             if(i==0){
//                 s[i] == s[i+1];
//                 count++;      
//             }
//             else if(s[i] == s[i+1] || s[i] == s[i-1]){
//                 count++;
//             }
//             else{
//                 s[n-1] = s[i-1];
//             }
//         }
//         cout << count;
//     }
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     string str = "mayanky";
//     vector<int>v(26,0);
//     int n = str.size();
//     for(int i=0;i<=n;i++){
//         char ch = str[i];
//         int x = (int)(ch);
//         int index = x - 97;
//         v[index]++;
//     }
//     int max = 0;
//     for(int i=0;i<26;i++){
//         if(v[i]>max){
//             max = v[i];
//         }
//     }
//     for(int i=0;i<26;i++){
//         if(v[i]==max){
//             char ch2 = (char)(97+i);
//             cout << ch2  << " -> " << max << endl;
//         }
        
//     }
//     //cout << max;
// }
//HIGHEST OCCURING FREQUENCY IN AN STRING
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         string str;
//         cin >> str;
//         vector<int>v(26,0);
//         int n = v.size();
//         for(int i=0;i<n;i++){
//             char ch = str[i];
//             int x = (int)(ch);
//             int index = x - 97;
//             v[index]++;
//         }
//         int max = 0;
//         for(int i=0;i<n;i++){
//             if(v[i]>max){
//             max = v[i];
//             }
//         }
//         for(int i=0;i<n;i++){
//             if(v[i]==max){
//                 char ch2 = (char)(97+i);
//                 cout << ch2  << endl;
//             }
        
//         }
//     }
    
// }
// #include<iostream>
// #include<algorithm>
// #include<vector>
// #include<sstream>
// using namespace std;
// int main(){
//     string str = "mayank is mayank a b.tech student as well as a coder well well mayank";
//     stringstream ss(str);
//     string temp;
//     vector<string>v;
//     while(ss>>temp){
//         v.push_back(temp);
//     }
//     sort(v.begin(),v.end());

//     int count = 1;
//     int maxcount = 1;
//     for(int i=1;i<=v.size();i++){
//         if(v[i]==v[i-1]){
//             count++;
//         }
//         else{
//             count = 1;
//         }
//         if(count > maxcount){
//             maxcount = count;
//         }
//     }
//     for(int i=1;i<=v.size();i++){
//         if(v[i]==v[i-1]){
//             count++;
//         }
//         else{
//             count = 1;
//         }
//         if(count==maxcount){
//             cout << v[i] << endl;
//         }
//     }   

// }
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<string>v;
//     v.push_back("flower");
//     v.push_back("flight");
//     v.push_back("flow");
//     sort(v.begin(),v.end());
//     int n = v.size();
//     string first = v[0];
//     string last = v[n-1];
//     string s = "";
//     for(int i=0;i<last.size();i++){
//         if(first[i]==last[i]){
//             s += first[i];
//         }
//         else{
//             break;
//         }
//     }
//     cout << s;
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     string s = "badcd";
//     string t = "babad";
//     vector<int>v(150,1000);
//     bool flag = false;
//     for(int i=0;i<s.length();i++){
//         int idx = (int)(s[i]);
//         if(v[idx]==1000){
//             v[idx] = s[i] - t[i]; 
//             flag = true;
//         }
//         else if(v[idx]!=(s[i]-t[i])){
//             flag = false;
//             break;
//         }  
        
//     }
//     // MAKING ALL THE ELEMENT OF VECTOR 1000 AGAIN
//     for(int i=0;i<v.size();i++)
//         v[i] = 1000; 
//     for(int i=0;i<s.length();i++){
//         int idx = (int)(t[i]);
//         if(v[idx]==1000){
//             v[idx] = t[i] - s[i]; 
//             flag = true;
//         }
//         else if(v[idx]!=t[i]-s[i]){
//             flag = false;
//             break;
//         }
//     }
//     if(flag==false){
//         cout << "NO";
//     }
//     else{
//         cout << "YES";
//     }   
// }
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     string s = "pw";
//     string h = s;
//     reverse(s.begin(),s.end());
//     cout  << s << endl;
//     cout << h+s;
// }
//me
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     string s = "126789345";
//     sort(s.begin(),s.end());//123456789
//     cout << s << endl;
//     int n = s.size();
//     cout << n << endl;
//     cout << s[n-2];
// }
