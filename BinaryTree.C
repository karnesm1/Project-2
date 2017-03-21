#include "BinaryTree.h"
#include "TreeNode.h"
#include <iostream>
#include <cstdlib>
#include <string>

BinaryTree::BinaryTree(){
    root = NULL;
}

BinaryTree::~BinaryTree(){
}

TreeNode* BinaryTree::Insert(string lname){
    TreeNode* temp = new TreeNode(lname);
    
    if (root==NULL){
        root=temp;
    }
    else{
        TreeNode*parent=FindParent(temp, lname);
        temp->parent=parent;
    }
    return (temp);
}

TreeNode* BinaryTree::Search(TreeNode*root, string lname){
     TreeNode* temp= new TreeNode(lname);

    if(root->lname==lname){
        return (root);
    }
    if(root->leftSide->lname==lname){
        return (root->leftSide)
    }
    else{
        
    }
}





TreeNode* BinaryTree::FindParent(TreeNode*root, string lname){
    TreeNode* temp= new TreeNode(lname);

    if(root->lname==lname){
        temp->parent=NULL;
    }
    else{
        if(root->lname > lname && root->leftSide==NULL){
            temp->parent=root;
            return temp;
        }
        else{
            FindParent(root->leftSide, lname);
        }
        if(root->lname < lname && root->rightSide==NULL){
            temp->parent=root;
            return temp;
        }
        else{
             FindParent(root->rightSide, lname);
        }
    }
}












