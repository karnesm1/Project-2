#include "BinaryTree.h"
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

enum EntryCode {DEQUEUE, ENQUEUE, COUNT, FIRST, PRINT, QUIT, ISEMPTY};

int main (){
    
    string lname;
    ifstream myInputFile;
    myInputFile.open("names.txt");
    
    myInputFile>>lname;
    while(!myInputFile.cof()){
        myTree.Insert(lname);
        myInputFile>>lname;
    }
    myInputFile.close();
}