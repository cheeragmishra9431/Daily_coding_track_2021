#include<iostream>
#include<vector>
using namespace std;
bool dfsrec(vector<int> adj[], int s, bool visited[], int parent){
    visited[s]=true;
    for(int i: adj[s]){
        if(dfsrec(adj,i, visited, s)==true){
            return true;
        }
        else if(parent!=i){
            return true;
        }
    }
    return false;
}
bool dfs(vector<int> adj[], int V){
    int parent;
    bool visited[V]={false};
    for(int i=0; i<V;i++){
        if(visited[i]==false){
            bool res=dfsrec(adj, i, visited,-1);
            return res;
        }
        
    }
}
// int main(){
// //code;
// return 0;
// }