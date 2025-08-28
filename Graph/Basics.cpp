//graphs can be visualised as network of roads and cities basically cities are nodes and roads are edges.
//they can be represented using either adjacency matrix or adjacency list
//We have two types of graphs 1. Directed graphs and 2. Undirected graphs
//Making of adjaceny list +visualizing graph + using vector of vector lol
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int nodes, edges;
    cin >> nodes >> edges;

    vector<vector<int>> edges_list(edges);
    vector<vector<int>> adj(nodes);

    for (int i = 0; i < edges; i++) {
        int x, y;
        cin >> x >> y;
        edges_list[i] = {x, y};
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    cout << "Edges list:\n";
    for (int i = 0; i < edges; i++) {   
        for (int j = 0; j < (int)edges_list[i].size(); j++) {    //a better way would be using for(int ng: edges_list[i]), cout<<ng
            cout << edges_list[i][j] << " ";                                               //(this was just me using brute force approach)
        }
        cout << "\n";
    }

    cout << "\nAdjacency list:\n";
    for (int i = 0; i < nodes; i++) {
        cout << i << ": ";
        for (int j = 0; j < (int)adj[i].size(); j++) {   //similarly here for(int ng: adj[i])
            cout << adj[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
//Adjacency matrix
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int nodes,edges;
    cin>>nodes>>edges;
    vector<vector<int>> edges_list(edges);
    int matrix[nodes][nodes]={0};
    for(int i=0; i<edges; i++){
        int x, y;
        cin>>x>>y;
        edges_list[i]={x,y};
        matrix[x][y]=1;
        matrix[y][x]=1;
    }
    for(int i=0; i<edges; i++){
        for(int x: edges_list[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    for(int i=0; i<nodes; i++){
        for(int j=0; j<nodes; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
