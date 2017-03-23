/*------------------------------------------------------------------
A class that defines what a TreeNode is using pointers.

Written by Matthew Karnes
------------------------------------------------------------------*/

#include "TreeNode.h"
#include <iostream>
#include <set>
#include <string>

// ************************** Public Functions *********************
/*------------------------------------------------------------------*/
/*------------------------------------------------------------------
The default TreeNode constructor.

Preconditions: none.
Postconditions: count = 1,leftSide = NULL, rightSide=NULL, lname=lname, parent=NULL, alive=true.
------------------------------------------------------------------*/
TreeNode::TreeNode(string name) {
    lname = name;
    leftSide = NULL;
    rightSide = NULL;
    count = 1;
    parent = NULL;
    alive = true;
}

/*------------------------------------------------------------------
The default TreeNode destructor.

Preconditions: none.
Postconditions: none doesn't need to destroy anything
------------------------------------------------------------------*/
TreeNode::~TreeNode () {
}

//returns lname
string TreeNode::GetLastName (){
        return (lname);
        }
//returns count
int TreeNode::GetCount(){
        return (count);
    }
//returns leftSide
TreeNode* TreeNode::GetLeft (){
        return (leftSide);
        }
//returns rightSide
TreeNode* TreeNode::GetRight (){
        return (rightSide);
        }
//returns parent
TreeNode* TreeNode::GetParent (){
        return (parent);
        }
//returns alive
bool TreeNode::GetAlive(){
    return (alive);
}

//sets lname
void TreeNode::SetName(string newName){
    lname= newName;
}
  
//sets leftSide
void TreeNode::SetLeft(TreeNode*newLeft){
    leftSide=newLeft;
}
    
//sets rightSide
void TreeNode::SetRight(TreeNode*newRight){
    rightSide=newRight;
}

//sets parent
void TreeNode::SetParent(TreeNode*newParent){
    parent=newParent;
}

//sets alive
void TreeNode::SetAlive(){
    if(alive==true){
        alive=false;
    }
    else{
        alive=true;
    }
}