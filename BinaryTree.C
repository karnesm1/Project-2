/*------------------------------------------------------------------
A Binary Tree class that utilizes the TreeNodes created by the TreeNode class.

Written by Matthew Karnes
------------------------------------------------------------------*/
#include "BinaryTree.h"
#include "TreeNode.h"
#include <iostream>
#include <cstdlib>
#include <string>

// ************************** Public Functions *********************
/*------------------------------------------------------------------*/
/*------------------------------------------------------------------
The default BinaryTree constructor.

Preconditions: none.
Postconditions: count = 0 and root = NULL.
------------------------------------------------------------------*/
BinaryTree::BinaryTree(){
    root = NULL;
    count=0;
}

/*------------------------------------------------------------------
The default BinaryTree destructor.

Preconditions: There is a tree.
Postconditions: Root and all other nodes are destroyed.
------------------------------------------------------------------*/
BinaryTree::~BinaryTree(){
    DeleteTree(root);
}

/*------------------------------------------------------------------
This function inserts a new .

Preconditions: There is a tree.
Postconditions: Root and all other nodes are destroyed.
------------------------------------------------------------------*/
void BinaryTree::Insert(string lname){
    TreeNode* temp = new TreeNode(lname);
    
    if (root==NULL){
        root=temp;
    }
    else{
        TreeNode*parent=FindParent(root, lname);
        temp->SetParent(parent);
    }
    count++;
}

TreeNode* BinaryTree::Search(string lname){
     TreeNode* temp= root;
    
    if(temp->GetAlive()==false){
        return NULL;
    }
    else{
        return (temp);
    }
}

void BinaryTree::Delete(string lname){
    TreeNode* temp;
    temp = Search(lname);
    temp->SetAlive();
    count--;
}

string BinaryTree::Print(){
   return 0;
}

int BinaryTree::Count(){
    return (count);
}
// ************************** Private Functions *********************

TreeNode* BinaryTree::FindParent(TreeNode*input, string lname){

        if(input->GetLastName() > lname){  
            if(input->GetLeft()==NULL){
                return input;
            }
            else{
                return (FindParent(input->GetLeft(), lname));
            }   
                }
        if(input->GetLastName() < lname){ 
            if(input->GetRight()==NULL){
                return input;
            }
        
        else{
           return  (FindParent(input->GetRight(), lname));
        }
        }
    return (input);
}

void BinaryTree::DeleteTree(TreeNode*input){
    if(input!=NULL){
        DeleteTree(input->GetRight());
        DeleteTree(input->GetLeft());
        delete (input);
    }
}

string BinaryTree::InOrder(TreeNode*input){
       return 0;
}








