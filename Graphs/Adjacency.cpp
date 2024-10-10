// undirected unweighted graph
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int vertex , edges;
//     cin >> vertex >> edges;
//     vector<vector<bool>>matrix(vertex,vector<bool>(vertex,0));

//     int u , v;
//     for(int i=0;i<edges;i++){
//         cin >> u >> v;
//         matrix[u][v] = 1;
//         matrix[v][u] = 1;       
//     }
//     for(int i=0;i<vertex;i++){
//         for(int j=0;j<vertex;j++){
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
// }


// undirected weighted graph
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int vertex , edges;
//     cin >> vertex >> edges;
//     vector<vector<int>>matrix(vertex,vector<int>(vertex,0));
//     int u , v , weight;
//     for(int i=0;i<edges;i++){
//         cin >> u >> v >> weight;
//         matrix[u][v] = weight;
//         matrix[v][u] = weight;
//     }
//     for(int i=0;i<vertex;i++){
//         for(int j=0;j<vertex;j++){
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

//adjacency list
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int vertex , edges;
//     cin >> vertex >> edges;
//     vector<int>list[vertex];

//     int u , v;

//     for(int i=0;i<edges;i++){
//         cin >> u >> v;
//         list[u].push_back(v);
//         list[v].push_back(u); 
//     }
//     for(int i=0;i<vertex;i++){
//         cout << i << " -> ";
//         for(int j=0;j<list[i].size();j++){
//             cout << list[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// adjacency weighted list
#include<bits/stdc++.h>
using namespace std;
int main(){
    int vertex,edges;
    cin >> vertex >> edges;
    vector<pair<int,int>>list[vertex];

    int u,v,weight;
    for(int i=0;i<edges;i++){
        cin >> u >> v >> weight;
        list[u].push_back(make_pair(v,weight));
        list[v].push_back(make_pair(u,weight));
    }
      for(int i=0;i<vertex;i++){
        cout << i << " -> ";
        for(int j=0;j<list[i].size();j++){
            cout << list[i][j].first << " " << list[i][j].second << " ";
        }
        cout << endl;
    }        
}