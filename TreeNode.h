#ifndef _TreeNode_H
#define _TreeNode_H

#include <iostream>
#include <set>
#include <string>

using namespace std;

class TreeNode{

    public: 
    
    /*------------------------------------------------------------------
The default TreeNode constructor.

Preconditions: none.
Postconditions: count = 1,leftSide = NULL, rightSide=NULL, lname=lname, parent=NULL, alive=true.
------------------------------------------------------------------*/
    TreeNode(string lname);
    
    /*------------------------------------------------------------------
The default TreeNode destructor.

Preconditions: none.
Postconditions: none doesn't need to destroy anything
------------------------------------------------------------------*/
    ~TreeNode();
    
    //various things used to change or return
    //instance variables
    string GetLastName();
    int GetCount();
    TreeNode* GetLeft();
    TreeNode* GetRight();
    TreeNode* GetParent();
    bool GetAlive();
    void SetName(string newName);
    void SetLeft(TreeNode*newLeft);
    void SetRight(TreeNode*newRight);
    void SetParent(TreeNode*newParent);
    void SetAlive();
    
    private:
    //instance variables used by the TreeNode
        string lname;
        int count;
        set<string> firstNames;
        TreeNode*leftSide;
        TreeNode*rightSide;
        TreeNode*parent;
        bool alive;
};
#endif