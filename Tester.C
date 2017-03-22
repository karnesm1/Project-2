#include "BinaryTree.h"
#include <iostream>
#include <cstdlib>
#include <string>

enum EntryCode {INSERT, SEARCH, DELETE, COUNT, PRINT};


int main () {
  // Declare some useful variables
  int response;
    TreeNode*flag;
  string newValue;

  // Instantiate/construct a bucket object
  BinaryTree* Tree = new BinaryTree();
  
  // Get the user's intention
  cout << "\nEnter 0: Insert\n 1: Search\n 2: Delete\n 3: Count \n 4: print\n enter code: ";
  cin >> response;
    while ((response >= INSERT) && (response <= PRINT)){
    switch (response) {
    case INSERT:
            cout << "\nEnter the name to be placed: ";
      cin >>newValue;
        Tree->Insert(newValue);
            break;
    case SEARCH:
      cout << "\nEnter the name to be found: ";
      cin >>newValue;
      flag = Tree->Search(newValue);
        if (flag ==NULL) {
		  cout << "\nThat person could not be found.";
      } else {
		  cout << "\n That person was found";
      }
      break;
      
    case DELETE:
            cout << "\nEnter the name to be deleted: ";
      cin >>newValue;
        Tree->Delete(newValue);
            break;
    case COUNT:
            cout << "\nThe number of people is: " << Tree->Count();
            break;
    case PRINT:
            cout << Tree->Print();
            break;
}
    // Get the user's intention
    cout << "\nEnter 0: Insert\n 1: Search\n 2: Delete\n 3: Count \n 4: print queue\n enter code: ";
    cin >> response;
    }
             cout << endl << endl;
  return(0);
            }