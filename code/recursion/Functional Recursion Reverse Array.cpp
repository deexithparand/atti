#include<bits/stdc++.h>
using namespace std;

void display(vector<int> v){
    for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
    cout<<endl;
}

// reverse an array using recursion
vector<int> reverse(vector<int> v, int left, int right){
    if(left>right){
        return v;
    }
    
    int t = v[right];
    v[right] = v[left];
    v[left] = t;
    
    return reverse(v, left+1, right-1);
} 

int main(){
    vector<int> v{5,4,2,3,1};
    
    cout<<"before : ";
    display(v);
    
    // reverse the same array
    vector<int> rv = reverse(v,0, v.size()-1);
    
    cout<<"after : ";
    display(rv);
    
    return 0;
}