class Solution {
  public:
    vector<vector<int>> connectedcomponents(int v, vector<vector<int>>& edges) {
        // code here
        vector<vector<int>> adj(v), result;
        vector<int> visited(v,0);
        
        // create an adjacency list
        for(int i=0; i<edges.size(); i++){
            int vl=edges[i][0], vr=edges[i][1];
            adj[vl].push_back(vr);
            adj[vr].push_back(vl);
        }
        
        // after adj list created
        for(int node=0; node<v; node++){
            
            if(!visited[node]){
                queue<int> q;
                
                q.push(node);
                visited[node]=1;
                
                vector<int> subvec;
                
                while(!q.empty()){
                    int front = q.front();
                    q.pop();
                    subvec.push_back(front);
                    for(auto k : adj[front]){
                        if(!visited[k]){
                            q.push(k);
                            visited[k]=1;
                        }
                    }
                }
                 // Sort the connected component
                sort(subvec.begin(), subvec.end());
                result.push_back(subvec);
            }
            
        }
        
        for(int i=0; i<visited.size(); i++){
            if(!visited[i]) result.push_back(vector<int>{i});
        }
        
        return result;
    }
};

// have to  look out a for a optimized solution
// do we really need to sort the output