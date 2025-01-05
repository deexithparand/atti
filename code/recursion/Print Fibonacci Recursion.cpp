#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n, vector<int> &memo){
    if(n<=1){
        memo[n] = n;
        return n;
    } 
    
    if(memo[n]!=-1){
        return memo[n];
    }
    
    int leftc = fibonacci(n-1, memo);
    int rightc = fibonacci(n-2, memo);
    
    memo[n] = leftc + rightc;
    
    return memo[n];
}

int main(){
    int n;
    cin>>n;
    
    // create a memoization table
    vector<int> memo(n+1,-1); // missed the n+1 for 0 based indexing
    
    for(auto i : memo){
        cout<<i<<" ";
    }
    
    cout<<endl;
    
    
    fibonacci(n, memo);
    
    for(auto i : memo){
        cout<<i<<" ";
    }
    
}

// done using memoizaiton - need to refine better