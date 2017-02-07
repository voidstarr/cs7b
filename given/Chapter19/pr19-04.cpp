// This program builds a binary tree with 5 nodes.
// The deleteNode function is used to remove 2 of them.
#include <iostream>
#include "IntBinaryTree.h" 
using namespace std;

int main()
{
    IntBinaryTree tree;
   
    cout << "Inserting the numbers 5 8 3 12 9.";
    tree.insert(5);
    tree.insert(8);
    tree.insert(3);
    tree.insert(12);
    tree.insert(9);
    
    cout << "\nHere are the values in the tree:\n";
    tree.showInOrder();
    
    cout << "\nDeleting 8...\n";
    tree.remove(8);
    	 
    cout << "Deleting 12...\n";
    tree.remove(12); 
    
    cout << "Now, here are the nodes:\n";
    tree.showInOrder();
    return 0;
}