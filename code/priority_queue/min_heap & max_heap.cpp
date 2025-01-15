#include <bits/stdc++.h>
using namespace std;

void display_max_heap(){
    // max_heap ( default in a priority queue data structure)
    priority_queue<int> max_heap;
    
    max_heap.push(4);
    max_heap.push(5);
    max_heap.push(6);
    max_heap.push(2);
    max_heap.push(7);
    
    while(!max_heap.empty()){
        int top = max_heap.top();
        cout<<top<<" ";
        max_heap.pop();
    }
    
    cout<<endl<<endl;
}

void display_min_heap(){
    // min_heap ( custom made in STL )
    
    priority_queue<int, vector<int>, greater<int>> min_heap;
    
    min_heap.push(4);
    min_heap.push(5);
    min_heap.push(6);
    min_heap.push(3);
    min_heap.push(-1);
    
    while(!min_heap.empty()){
        cout<<min_heap.top()<<" ";
        min_heap.pop();
    }
    
    cout<<endl<<endl;
}

int main()
{
    
    display_min_heap();
    
    display_max_heap();
    
    return 0;
}