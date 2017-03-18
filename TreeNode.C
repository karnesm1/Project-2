/*------------------------------------------------------------------
Written by Matthew Karnes
------------------------------------------------------------------*/

#include <iostream>
#include <set>
#include <string>
#include "TreeNode.H"

    
TreeNode::TreeNode (string lname, string fname, tree*ptr) {
    lname = lname;
    leftSide = NULL;
    rightSide = NULL;
    treeSize = 0;
}

TreeNode::~TreeNode () {
  DeleteTree();
}


void Tree:: Insert (){
  
  
    
}