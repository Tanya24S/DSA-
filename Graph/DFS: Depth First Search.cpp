//There are two traversal methods in graphs: DFS and BFS
//Depth first search
#include <iostream>
#include <vector>

using namespace std;
void dfs(vector<vector<int>> adj, vector<int> &visited, int node){
    visited[node]=1;
    for(int ng: adj[node]){
        if(visited[ng]==0){
            cout<<ng;
            dfs(adj, visited, ng);
        }
    }
    
}
int main(){
    int nodes,edges;
    cin>>nodes>>edges;
    vector<vector<int>> adj(nodes);
    for(int i=0; i<edges; i++){
        int x, y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    vector<int> visited(nodes, 0);
    for(int i=0; i<nodes; i++){
        if(visited[i]!=1){
            dfs(adj, visited, i);
        }
    }
    return 0;
}
