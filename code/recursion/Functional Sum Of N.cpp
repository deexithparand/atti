#include <bits/stdc++.h>
using namespace std;

// sum of first n numbers - functional
// need each function to return me some value 
int fsum(int n){
    if(n==-1){
        return 0;
    }
    
    return n+fsum(n-1);
}

int main()
{
    int n;
    cin>>n;
    int sum = fsum(n);
    cout<<"Functional Sum : "<<sum;
    return 0;
}