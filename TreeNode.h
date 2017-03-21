#ifndef _TreeNode_H
#define _TreeNode_H

#include <iostream>
#include <set>
#include <string>

using namespace std;

class TreeNode{

    public: 
    
    TreeNode(string lname);
    
    ~TreeNode();
    
    string GetLastName();
    int GetCount();
    
    string lname;
        int count;
        set<string> firstNames;
        TreeNode*leftSide;
        TreeNode*rightSide;
        TreeNode*parent;
        bool alive;
    private:
        
};
#endif