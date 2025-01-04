#include <bits/stdc++.h>
using namespace std;

// sum of first n numbers - parameterized vs functional 
void psum(int n, int sum){
    if(n==0){
        cout<<"sum : "<<sum;
        return;
    }
    
    psum(n-1, sum+n);
}

int main()
{
    int n;
    cin>>n;
    psum(n,0);
    return 0;
}