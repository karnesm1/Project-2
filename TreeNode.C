/*------------------------------------------------------------------
Written by Matthew Karnes
------------------------------------------------------------------*/

#include "TreeNode.h"
#include <iostream>
#include <set>
#include <string>


TreeNode::TreeNode(string lname) {
    lname = lname;
    leftSide = NULL;
    rightSide = NULL;
    count = 1;
    parent = NULL;
    alive = true;
}

TreeNode::~TreeNode () {
}

string TreeNode::GetLastName (){
        return (lname);
        }

int TreeNode::GetCount(){
        return (count);
    }


  
  
    
