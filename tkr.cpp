#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>
#include <unordered_set>

using namespace std;

// Hàm BFS
void bfs(const unordered_map<char, vector<char>>& graph, char startVertex) {
    unordered_set<char> visited;
    queue<char> q;

   
    visited.insert(startVertex);
    q.push(startVertex);

    cout << "BFS Traversal: ";


    while (!q.empty()) {
        char vertex = q.front();
        q.pop();
        cout << vertex << " ";

        
        for (char neighbor : graph.at(vertex)) { 
            if (visited.find(neighbor) == visited.end()) {
                visited.insert(neighbor);
                q.push(neighbor);
            }
        }
    }
    cout << endl;
}

int main() {
 
    unordered_map<char, vector<char>> graph = {
        {'A', {'B', 'C'}},
        {'B', {'D', 'E'}},
        {'C', {'F'}},
        {'D', {}},
        {'E', {}},
        {'F', {}}
    };
    bfs(graph, 'A');

    return 0;
}
