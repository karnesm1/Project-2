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

TreeNode* BinaryTree::Search(string lname){
     TreeNode* temp= root;
while(temp->lname!=lname){
    if(temp->lname > lname){
        temp=temp->leftSide;
    }
    
    if(temp->lname < lname){
        temp=temp->rightSide;
    }
    
}
    return (temp);
}

void BinaryTree::Delete(string lname){
    TreeNode* temp = Search(lname);
    temp->alive=false;
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












