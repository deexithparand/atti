#include <bits/stdc++.h>
using namespace std;
int main()
{
    // n * n
    int n, v;
    cout<<"Enter N : ";
    cin>>n;
    cout<<"Enter Value : ";
    cin>>v;
    vector<vector<int>> matrix(n, vector<int>(n,v));
    
    for(auto r : matrix){
        for(auto c : r){
            cout<<c<<" ";
        }
        cout<<endl;
    }

    return 0;
}