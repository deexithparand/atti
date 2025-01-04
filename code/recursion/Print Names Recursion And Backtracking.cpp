#include <bits/stdc++.h>
using namespace std;

void printname(string name, int n){
    if(n==0){
        return;
    } 
    
    cout<<name<<" "<<n<<endl;
    
    printname(name,n-1);
    
    cout<<"backtrack"<<" "<<n<<endl;
}

int main()
{
    int n;
    cin>>n;
    printname("deexith",n);
    return 0;
}

// output : 
// 3
// deexith 3
// deexith 2
// deexith 1
// backtrack 1
// backtrack 2
// backtrack 3
