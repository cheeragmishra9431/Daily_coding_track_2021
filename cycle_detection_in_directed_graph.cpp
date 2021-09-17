#include<iostream>
#include<vector>
#include<queue>
#include<cmath>
using namespace std;
bool dfsrec(vector<int> adj[], int s, bool visited[], bool recst[]){
    visited[s]=true;
    recst[s]=true;
    for(int i : adj[s]){
        if(dfsrec(adj,i,visited, recst)==true && visited[i]==false ){
            return true;
        }
        else if(recst[i]!=false){
            return true;
        }
    }
    recst[s]=false;
    return false;
}
bool kahns(vector<int> adj[], int v){
    int indegree[v]={0};
    for(int i=0; i<v; i++){
        for( int v: adj[i]){
            indegree[v]++;
        }
    }
    queue<int> q;
    for(int i =0; i<v; i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    int count=0;
    while(q.empty()!=true){
        int temp=q.front();
        q.pop();
        cout<<temp;
        for(int i: adj[temp]){
            indegree[i]--;
            if(indegree[i]==0){
                q.push(i);
            }
        }
        count++;
    }
    return(count!=v);
}
bool dfs(vector<int> adj[], int V){
    bool recst[V]={false};
    bool visited[V]={false};
    for(int i=0; i<V;i++){
        if(visited[i]==false){
            bool res=dfsrec(adj, i, visited,recst);
            return res;
        }
        
    }
}
int main(){
//code;
// int x= INT8_MAX;
// int arr[]={1,2,3,4,5,6,7,9};
// cout<<pow(2,3);
int n=153;
int cube=0;
int no=n;
while(n>0){
    int dig=n%10;
    // dig=pow(dig,3);
    cube=cube+(dig*dig*dig);
    n=n/10;
}
if(no==cube){
    cout<<"yes";
}
// cout<<arr[-1];
return 0;
}