

#include <iostream>
#include <set>
#include <string>

enum ptr(leftSide, rightSide, parent)

class TreeNode{

    public:
    
    TreeNode(string lname, string fname, tree*ptr);
    
    ~TreeNode;
    
    string GetLastName(){return lName};
    int GetCount(){return count};
    set GetFirstNames(){return firstNames};
    
    private:
        string lname;
        int count;
        set<string> firstNames;
}
