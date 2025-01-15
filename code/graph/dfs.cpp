//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    
    void dfs(int keynode, vector<vector<int>> &adj, vector<bool> &visited, vector<int> &dfs_traversal){
        
        visited[keynode] = true;
        dfs_traversal.push_back(keynode);
        
        vector<int> neighbours = adj[keynode];
        
        for(int i=0; i<neighbours.size(); i++){
            int neighbour = neighbours[i];
            if(!visited[neighbour]){
                dfs(neighbour, adj, visited, dfs_traversal);
            }
        }
        
    }
    
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(vector<vector<int>>& adj) {
        vector<bool> visited(adj.size(), false);
        vector<int> dfs_traversal;
        
        dfs(0, adj, visited, dfs_traversal);
        return dfs_traversal;
    }
};

//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<vector<int>> adj(
            V); // Use vector of vectors instead of array of vectors.

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        Solution obj;
        vector<int> ans = obj.dfsOfGraph(adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends