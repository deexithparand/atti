//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(vector<vector<int>> &adj) {
       queue<int> q;
       vector<int> visited(adj.size(),0), path_traversed;
       
       q.push(0);
       
       while(!q.empty()){
           int node = q.front();
           path_traversed.push_back(node);
           visited[node]=1;
           q.pop();
           for(int i=0; i<adj[node].size(); i++){
               int nextnode = adj[node][i];
               if(!visited[nextnode]){
                   q.push(nextnode);
                   visited[nextnode]=1;
               }
           }
       }
       
       return path_traversed;
    }
};

//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        // Now using vector of vectors instead of array of vectors
        vector<vector<int>> adj(V);

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u); // For undirected graph, add both u->v and v->u
        }

        Solution obj;
        vector<int> ans = obj.bfsOfGraph(adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends