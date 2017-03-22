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
        string lname;
        int count;
        set<string> firstNames;
        TreeNode*leftSide;
        TreeNode*rightSide;
        TreeNode*parent;
        bool alive;
};
#endif