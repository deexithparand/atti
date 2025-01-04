#include <bits/stdc++.h>
using namespace std;

void printname(int i, int n){
    if(i==n+1){
        cout<<"Backtrack Starts after the next instruction"<<endl;
        return;
    } 
    
    cout<<"count"<<" "<<i<<endl;
    
    printname(i+1,n);
    
    cout<<"backtrack"<<" "<<i<<endl;
}

int main()
{
    int n;
    cin>>n;
    printname(1,n);
    cout<<"backtrack complete";
    return 0;
}

// output 
// count 1
// count 2
// count 3
// Backtrack Starts after the next instruction
// backtrack 3
// backtrack 2
// backtrack 1
// backtrack complete
