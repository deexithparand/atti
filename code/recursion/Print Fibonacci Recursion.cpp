// not completed yet, need to learn tabulation method
#include <bits/stdc++.h>
using namespace std;

// print fibonacci using recursion - different from getting a nth fibonacci
int fibonacci(int n){
    if(n<=1) return n;
    
    int left = fibonacci(n-1);
    int right = fibonacci(n-2);
    
    return  left + right;
}

int main()
{
    int n;
    cin>>n;
    unordered_map<int,bool> hm;
    
    fibonacci(n);
    
    return 0;
}