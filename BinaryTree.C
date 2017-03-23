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
This function inserts a new node into the tree.

Preconditions: none
Postconditions: A new node in the tree.
------------------------------------------------------------------*/
void BinaryTree::Insert(string lname){
    TreeNode* temp = new TreeNode(lname);
    //check if root is null
    if (root==NULL){
        root=temp;
    }
    //set next node
    else{
        TreeNode*parent=FindParent(root, lname);
        temp->SetParent(parent);
            if(parent->GetLastName()>temp->GetLastName()){
                parent->SetLeft(temp);
                    }
            else{
                parent->SetRight(temp);
                }
    }
    count++;
}

/*------------------------------------------------------------------
Finds a node that has the same name registered as the one that is input.

Preconditions: Node is in the tree.
Postconditions: The node is output.
------------------------------------------------------------------*/
TreeNode* BinaryTree::Search(string lname){
    return (SearchHelp(lname, root));
}

/*------------------------------------------------------------------
Takes a node and sets it to being "dead" or not interactable. Reduces count
by one. 

Preconditions: Node is "alive".
Postconditions: Node is "dead"
------------------------------------------------------------------*/
void BinaryTree::Delete(string lname){
    TreeNode* temp;
    temp = Search(lname);
    temp->SetAlive();
    if(temp->GetAlive()==false){
    count--;
    }
    else{
        count++;
    }
}

/*------------------------------------------------------------------
InOrder prints the tree.

Preconditions: There is a tree.
Postconditions: The tree is printed.
------------------------------------------------------------------*/
void BinaryTree::Print(){
   InOrder(root);
}

/*------------------------------------------------------------------
Returns the amount of names in the tree.

Preconditions: none
Postconditions: The count is shown.
------------------------------------------------------------------*/
int BinaryTree::Count(){
    return (count);
}
// ************************** Private Functions *********************

/*------------------------------------------------------------------
Finds and returns the parent of the node with the chosen name.

Preconditions: none
Postconditions: returns a parent.
------------------------------------------------------------------*/
TreeNode* BinaryTree::FindParent(TreeNode*input, string lname){
        
        //sees if the current nodes leftchild is empty and then returns 
        //this node as the left child's parent.
        if(input->GetLastName() > lname){  
            if(input->GetLeft()==NULL){
                return input;
                    }
            //if not this calls FindParent on the left child
            else{
                return (FindParent(input->GetLeft(), lname));
                    }   
            }
        //does the same as above but for right child
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

/*------------------------------------------------------------------
Deletes the tree in its entirety.

Preconditions: a tree
Postconditions: the tree is deleted.
------------------------------------------------------------------*/
void BinaryTree::DeleteTree(TreeNode*input){
    if(input!=NULL){
        DeleteTree(input->GetRight());
        DeleteTree(input->GetLeft());
        delete (input);
    }
}

/*------------------------------------------------------------------
Finds the node with the suggested last name starting from the suggested node.

Preconditions: a tree
Postconditions: returns null, or the wanted node.
------------------------------------------------------------------*/
TreeNode* BinaryTree::SearchHelp(string lname, TreeNode*input){
    //guards against null entry
    if(input==NULL){
        return NULL;
    }
    //checks if current node is wanted node
    if(input->GetLastName()==lname){
        return (input);
    }
        //sends either the left or right child depending on current node
        if(input->GetLastName() > lname){
            return (SearchHelp(lname, input->GetLeft()));
        }
        else{
            return (SearchHelp(lname, input->GetRight()));
        }
    }

 /*------------------------------------------------------------------
Goes to the left most name and then prints it and then prints in 
increasing order.

Preconditions: a tree
Postconditions: the tree is printed
------------------------------------------------------------------*/
void BinaryTree::InOrder(TreeNode*input){  
    if(input==NULL){
        return;
        }
    InOrder(input->GetLeft());
    
    cout<<input->GetLastName()<<endl;
    
    InOrder(input->GetRight());
}





