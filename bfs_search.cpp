#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void bfs(vector<int> adj[], int s, int v){
    bool visited[v];
    for(int i: visited){
        visited[i]=false;
    }
    queue<int> q;
    q.push(s);
    visited[s]=true;
    while(q.empty()!=true){
        int temp= q.front();
        cout<<temp;
        q.pop();
        for(int i: adj[temp]){
            if(visited[i]==false){
                q.push(i);
                visited[i]=true;
            }
        }
    }

}
int main(){
//code;
return 0;
}