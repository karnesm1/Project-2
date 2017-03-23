/*------------------------------------------------------------------
A Binary Tree class that utilizes the TreeNodes created by the TreeNode class.

Written by Matthew Karnes
------------------------------------------------------------------*/
#ifndef _BinaryTree_H
#define _BinaryTree_H

#include "TreeNode.h"
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std; 

class BinaryTree {


    public:
    /*------------------------------------------------------------------
The default BinaryTree constructor.

Preconditions: none.
Postconditions: count = 0 and root = NULL.
------------------------------------------------------------------*/
    BinaryTree();
    
    /*------------------------------------------------------------------
The default BinaryTree destructor.

Preconditions: There is a tree.
Postconditions: Root and all other nodes are destroyed.
------------------------------------------------------------------*/
    ~BinaryTree();
    
    /*------------------------------------------------------------------
Finds a node that has the same name registered as the one that is input.

Preconditions: Node is in the tree.
Postconditions: The node is output.
------------------------------------------------------------------*/
    TreeNode* Search(string lname);
    
    /*------------------------------------------------------------------
This function inserts a new node into the tree.

Preconditions: none
Postconditions: A new node in the tree.
------------------------------------------------------------------*/
    void Insert(string lname);
    
    /*------------------------------------------------------------------
Takes a node and sets it to being "dead" or not interactable. Reduces count
by one. 

Preconditions: Node is "alive".
Postconditions: Node is "dead"
------------------------------------------------------------------*/
    void Delete(string lname);
    
    /*------------------------------------------------------------------
InOrder prints the tree.

Preconditions: There is a tree.
Postconditions: The tree is printed.
------------------------------------------------------------------*/
    void Print(TreeNode*input);
    /*------------------------------------------------------------------
Returns the amount of names in the tree.

Preconditions: none
Postconditions: The count is shown.
------------------------------------------------------------------*/
    int Count();
    
    private:
        TreeNode* root;
        int count;
    /*------------------------------------------------------------------
Finds and returns the parent of the node with the chosen name.

Preconditions: none
Postconditions: returns a parent.
------------------------------------------------------------------*/
        TreeNode* FindParent(TreeNode*input, string lname);
    /*------------------------------------------------------------------
Deletes the tree in its entirety.

Preconditions: a tree
Postconditions: the tree is deleted.
------------------------------------------------------------------*/
        void DeleteTree(TreeNode*input);
    /*------------------------------------------------------------------
Finds the node with the suggested last name starting from the suggested node.

Preconditions: a tree
Postconditions: returns null, or the wanted node.
------------------------------------------------------------------*/
        TreeNode* SearchHelp(string lname, TreeNode*input);
};
#endif