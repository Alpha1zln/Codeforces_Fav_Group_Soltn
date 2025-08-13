#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<vector<int>> bfsLevelWise(vector<vector<int>>& adjList, int startNode) {
    int n = adjList.size();
    vector<bool> visited(n+1, false);
    vector<vector<int>> levels;

    queue<int> q;
    q.push(startNode);
    visited[startNode] = true;
    //levels.push_back({startNode});  // Start with the first level containing the start node

    while (!q.empty()) {
        int size = q.size();
        vector<int> level;

        for (int i = 0; i < size; ++i) {
            int node = q.front();
            q.pop();
            level.push_back(node ); 

            for (int neighbor : adjList[node]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push(neighbor);
                    
                }
            }
        }

        levels.push_back(level);  // Store current level
    }

    return levels;
}

int main() {
    int n = 6;  // Number of nodes
    vector<vector<int>> adjList(n+1);

    // Create the graph
    adjList[1] = {2, 3};
    adjList[2] = {1, 3, 4};
    adjList[3] = {1,2,4,5};
    adjList[4] = {2, 3, 5, 6};
    adjList[5] = {3, 4, 6};
    adjList[6] = {4, 5};

    vector<vector<int>> result = bfsLevelWise(adjList, 1);

    // Print result
    for (int i = 0; i < result.size(); ++i) {
        cout << "Level " << i+1 << ": ";
        for (int val : result[i]) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
