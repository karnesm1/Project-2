#ifndef _BinaryTree_H
#define _BinaryTree_H

#include "TreeNode.h"
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std; 

class BinaryTree {

    public:
    BinaryTree();
    
    ~BinaryTree();
    
    TreeNode* Search(string lname);
    
    TreeNode* Insert(string lname);
    
    void Delete(string lname);
    
    
    private:
        TreeNode* root;
    
    TreeNode* FindParent(TreeNode*root, string lname);
};
#endif