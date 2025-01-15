//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

//Back-end complete function Template for C++


// } Driver Code Ends
class Solution {
  public:
    
    vector<int> shortestPath(vector<vector<int>>& adj, int src) {
        priority_queue<
            vector<int>, 
            vector<vector<int>>, 
            greater<vector<int>>
        >  pq;
        
        vector<int> visited(adj.size(), INT_MAX);
        
        visited[src] = 0;
        pq.push({0, src});
        
        while(!pq.empty()){
            vector<int> current = pq.top();
            pq.pop();
            
            int dist = current[0];
            int currentnode = current[1];
            
            vector<int> neighbours = adj[currentnode];
            for(int i=0; i<neighbours.size(); i++){
                int neighbour = neighbours[i];
                
                int total_dist_from_src = dist + 1; // dist + (next-curr)
                
                if(total_dist_from_src < visited[neighbour]){
                    visited[neighbour] = total_dist_from_src;
                    pq.push({total_dist_from_src, neighbour});
                }
            }
        }
        
        for(int i=0; i<visited.size(); i++) {
            if(visited[i] == INT_MAX) visited[i] = -1;
        }
        
        return visited;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj(V);

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        int src;
        cin >> src;

        Solution obj;

        vector<int> res = obj.shortestPath(adj, src);

        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
        cout << "~\n";
    }
}

// } Driver Code Ends