#include<bits/stdc++.h>

using namespace std;

int main(){
    priority_queue<int> a;
    
    vector<int> unordered{5,3,1,7,2};
    
    for(size_t i=0; i<unordered.size(); i++){
        a.push(unordered[i]);
        a.top();
        cout<<"( "<<unordered[i]<<" , "<<a.top()<<" )"<<endl;
    }
    
    cout<<endl;
    
    while(!a.empty()){
        if(a.size()>1){
            cout<<a.top()<<",";
        } else {
            cout<<a.top();
        }
        
        a.pop();
    }
    
    return 0;
}