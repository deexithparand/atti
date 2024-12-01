#include <bits/stdc++.h>
using namespace std;

void printmatrix(vector<vector<int>> matrix){
    
    for(auto r : matrix){
        for(auto c : r){
            cout<<c<<" ";
        }
        cout<<endl;
    }
    
}

int main()
{
    // n * n
    int n;
    int val=0; // initially not connected vertices 
    cout<<"Enter N : ";
    cin>>n;
    vector<vector<int>> matrix(n, vector<int>(n,val));
    
    printmatrix(matrix);
    
    // getting the edges from the user 
    // m -> number of edges he is going to insert
    // directed -> u to v -> 1
    // undirected -> u to v, v to u -> 1
    
    // for now undirected
    int m, u, v, edgecount=1;
    cout<<"No. of edges : ";
    cin>>m;
    
    do{
        cout<<"Enter edge "<<edgecount<<" : ";
        cin>>u>>v;
        
        if(u<0 || u>=n || v>=n || v<0){
            cout<<"Input must be within limits >0 and <n"<<endl;
        } else {
            matrix[u][v] = 1;
            matrix[v][u] = 1; // if undirected graph
            m--;
            edgecount++;
        }
        
    }while(m>0);
    
    printmatrix(matrix);

    return 0;
}