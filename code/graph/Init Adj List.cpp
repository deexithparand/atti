#include <bits/stdc++.h>
using namespace std;

void printlist(vector<int> graph[], int len){
    for(int row=0; row<len; row++){
        cout<<row<<" -> ";
        for(int col=0; col<graph[row].size(); col++){
            cout<<graph[row][col]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int vertices, edgecount;
    cout<<"enter number of vertices : ";
    cin>>vertices;
    cout<<"enter edge count : ";
    cin>>edgecount;
    // intialize 
    // get input
    // print graph
    // 1 based indexed graph no zero, so choosing vertices + 1 
    vector<int> graph[vertices+1];
    int u,v;    
    for(int i=0; i<edgecount; i++){
        cin>>u>>v;
        graph[u].push_back(v);
        if(u!=v){
            graph[v].push_back(u); // if undirected or else skip
        }
    }
    
    printlist(graph,vertices+1);
    
    return 0;
}

// try hasmap also next time

// hashmap vs array -> check efficiency