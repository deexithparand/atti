#include<bits/stdc++.h>
using namespace std;

// factorial of n
int factorialParameterized(int n){
    if(n==1){
        cout<<"factorialParameterized("<<n<<")=1"<<endl;
        return 1;
    }
    
    cout<<n<<" * factorialParameterized("<<n-1<<")"<<endl;
    
    return n*factorialParameterized(n-1);
}

int main(){
    int n;
    cin>>n;
    int factorial = factorialParameterized(n);
    cout<<"factorial of "<<n<<" : "<<factorial;
    return 0;
}

// output :
// 4
// 4 * factorialParameterized(3)
// 3 * factorialParameterized(2)
// 2 * factorialParameterized(1)
// factorialParameterized(1)=1
// factorial of 4 : 24