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
    
    void Insert(string lname);
    
    void Delete(string lname);
    
    string Print();
    
    int Count();
    
    private:
        TreeNode* root;
        int count;
        TreeNode* FindParent(TreeNode*input, string lname);
        void DeleteTree(TreeNode*input);
        string InOrder(TreeNode*input);
};
#endif