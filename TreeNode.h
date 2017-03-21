#ifndef _TreeNode_H
#define _TreeNode_H

#include <iostream>
#include <set>
#include <string>

using namespace std;

class TreeNode{

    public: 
    
    TreeNode(string lname, string fname);
    
    ~TreeNode();
    
    string GetLastName();
    int GetCount();
    set GetFirstNames();
    
    
    
    private:
        string lname;
        int count;
        set<string> firstNames;
        TreeNode*leftSide;
        TreeNode*rightSide;
        TreeNode*parent;
};
#endif