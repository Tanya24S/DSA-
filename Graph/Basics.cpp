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
        for (int j = 0; j < (int)edges_list[i].size(); j++) {
            cout << edges_list[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\nAdjacency list:\n";
    for (int i = 0; i < nodes; i++) {
        cout << i << ": ";
        for (int j = 0; j < (int)adj[i].size(); j++) {
            cout << adj[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
