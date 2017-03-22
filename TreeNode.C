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

TreeNode* TreeNode::GetLeft (){
        return (leftSide);
        }

TreeNode* TreeNode::GetRight (){
        return (rightSide);
        }

TreeNode* TreeNode::GetParent (){
        return (parent);
        }
bool TreeNode::GetAlive(){
    return (alive);
}

void TreeNode::SetName(string newName){
    lname= newName;
}
  
void TreeNode::SetLeft(TreeNode*newLeft){
    leftSide=newLeft;
}
    
void TreeNode::SetRight(TreeNode*newRight){
    rightSide=newRight;
}

void TreeNode::SetParent(TreeNode*newParent){
    parent=newParent;
}

void TreeNode::SetAlive(){
    if(alive==true){
        alive=false;
    }
    else{
        alive=true;
    }
}