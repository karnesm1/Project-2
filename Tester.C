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
  BinaryTree* Test = new BinaryTree();
  
    string lastname, firstname;
    ifstream(MyInputFile);
    MyInputFile.open("names.txt");
    MyInputFile>>lastname>>firstname;
    while(!MyInputFile.eof()){
        Test->Insert(lastname);
        MyInputFile>>lastname>>firstname;
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
            if(Test->Search(newValue)==NULL){
        Test->Insert(newValue);
                cout<< "Name added";
            }
            else{
                cout<<"That name is already included";
            }
            break;
    case SEARCH:
      cout << "\nEnter the name to be found: ";
      cin >>newValue;
      flag=Test->Search(newValue);
            if (flag!=NULL && flag->GetAlive()==true) {
		  cout << "\n Found the name given";
      } else {
		  cout << "\nCould not find the name";
            }
      break;
      
    case DELETE:
            cout << "\nEnter the name to be deleted: ";
      cin >>newValue;
        Test->Delete(newValue);
            break;
    case COUNT:
            cout << "\nThe number of people is: " << Test->Count();
            break;
    case PRINT:
            Test->Print();
            break;
}
    // Get the user's intention
    cout << "\nEnter 0: Insert\n 1: Search\n 2: Delete\n 3: Count \n 4: print \n enter code: ";
    cin >> response;
    }
             cout << endl << endl;
  return(0);
        }