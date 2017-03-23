#include "BinaryTree.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
enum EntryCode {INSERT, SEARCH, DELETE, COUNT, PRINT};


int main () {
  // Declare some useful variables
    int response;
    TreeNode*flag;
    string newValue;

  // Instantiate/construct a bucket object
  BinaryTree* Tree = new BinaryTree();
  
    string lastname;
    ifstream(MyInputFile);
    MyInputFile.open("names.txt");
    MyInputFile>>lastname;
    while(!MyInputFile.eof()){
        Tree->Insert(lastname);
        MyInputFile>>lastname;
    }
    MyInputFile.close();
    
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
      flag=Tree->Search(newValue);
            if (flag!=NULL) {
		  cout << "\n Found the name given";
      } else {
		  cout << "\nCould not find the name";
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
            Tree->Print(Tree->root);
            break;
}
    // Get the user's intention
    cout << "\nEnter 0: Insert\n 1: Search\n 2: Delete\n 3: Count \n 4: print \n enter code: ";
    cin >> response;
    }
             cout << endl << endl;
  return(0);
        }