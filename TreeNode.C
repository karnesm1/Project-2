/*------------------------------------------------------------------
Written by Matthew Karnes
------------------------------------------------------------------*/

#include "TreeNode.h"
#include <iostream>
#include <set>
#include <string>


TreeNode::TreeNode(string lname, string fname) {
    lname = lname;
    leftSide = NULL;
    rightSide = NULL;
    count = 1;
    parent = NULL;
    firstNames.insert(fname);
}

TreeNode::~TreeNode () {
}

string TreeNode::GetLastName (){
        return (lname);
        }

int TreeNode::GetCount(){
        return (count);
    }

set GetFirstNames(){
        return (firstNames);
    }

  
  
    
