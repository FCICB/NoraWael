#include <iostream>
#include <vector>
#include <list>
#include<queue>
#include<stack>
using namespace std;
class Graph {
private:
    int numVertices;
    vector<list<int>> adjList;

public:
    Graph(int vertices) : numVertices(vertices), adjList(vertices) {};
    void addEdge(int v1, int v2) {
        adjList[v1].push_back(v2);
        adjList[v2].push_back(v1);  
    }
     
    bool isConnected(int v1, int v2)
    {
        for (int vertex : adjList[v1])
            if (vertex == v2)
                return true;
        return false;
    }
    void printGraph() {
        for (int i = 0; i < numVertices; ++i) {
            cout << "Vertex " << i << ": ";
            for (int vertex : adjList[i]) {
                cout << vertex << " ";
            }
            cout << endl;
        }
    }

    void bfs(int startVertex) {
        vector<bool> visited(numVertices, false);
        queue<int> q;

        visited[startVertex] = true;
        q.push(startVertex);

        while (!q.empty()) {
            int vertex = q.front();
            q.pop();
            cout << vertex << " ";

            for (int neighbor : adjList[vertex]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }
    }

    void dfs(int startVertex) {
        vector<bool> visited(numVertices, false);
        stack<int>s;

        s.push(startVertex);

        while (!s.empty()) {
            int vertex = s.top();
            s.pop();
            if (!visited[vertex]) {
                visited[vertex] = true;
                cout << vertex << " ";

                for (int neighbor : adjList[vertex]) {
                    if (!visited[neighbor]) {
                        s.push(neighbor);
                    }
                }
            }
        }
    }
};

int main() {
    Graph graph(5);

    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 3);
    graph.addEdge(3, 4);

    graph.printGraph();
    
    cout << "\nBFS Traversal starting from vertex 0:\n" << endl;
    graph.bfs(0);
    cout << endl;

    cout << "\nDFS Traversal starting from vertex 0:\n" << endl;
    graph.dfs(0);
    cout << endl;


    return 0;
}