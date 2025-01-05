#include <bits/stdc++.h>
using namespace std;

// multiple recursion calls - fibonacci series
int nthfibonacci(int n){
    if(n==1) return 1;  
    if(n==0) return 0;
    
    return nthfibonacci(n-1) + nthfibonacci(n-2);
}

// fibonacci in fibonacciLoop
void fibonacciLoop(int n){
    int left=0, right=1;
    
    if(n==0) cout<<0;
    if(n==1) cout<<1;
    
    cout<<endl<<"fibonacci until "<<n<<" : \n"<<left<<" "<<right<<" ";
    
    while(n > 1){
        cout<<left+right<<" ";
        int t = right;
        right = left + right;
        left = t;
        n--;
    }
}

int main()
{
    int n;
    cin>>n;
    fibonacciLoop(n);
    cout<<endl;
    
    cout<<"Finding the nth fibonacci using recursion : "<<nthfibonacci(n);
    
    return 0;
}