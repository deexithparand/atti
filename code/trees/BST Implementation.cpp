#include <bits/stdc++.h>
using namespace std;

// bst - crud & traversal

class TreeNode{
    public:
        int value;
        TreeNode *left;
        TreeNode *right;
        TreeNode();
        TreeNode(int value, TreeNode*, TreeNode*);
        constructBST(vector<int>);
};

TreeNode::TreeNode(){
    this->value = -1;
    this->left = nullptr;
    this->right = nullptr;
}

TreeNode::TreeNode(int value, TreeNode *left, TreeNode *right){
    this->value = value;
    this->left = left;
    this->right = right;
}

void TreeNode::constructBST(vector<int> nodes){
    TreeNode *rootnode = this;
    for(int i=0; i<nodes.size(); i++){
        rootnode = insertBST(nodes[i], rootnode);
    }
}

TreeNode* insertBST(int value, TreeNode *rootnode){

    if(rootnode==nullptr){
        // if root is empty
        TreeNode *newnode = new TreeNode(value, nullptr, nullptr);
        return newnode;
    }
    
    if(roo)
    
    // traverse and insert
    if(value > rootnode->value){
        insertBST(value, rootnode->right)
    } else {
        insertBST(value, rootnode->left)   
    }
}

int main()
{
    vector<int> nodes = {6,2,4,3,9,7};
    
    TreeNode *rootnode = new TreeNode();
    
    // construct
    rootnode->constructBST(nodes);
    
    return 0;
}