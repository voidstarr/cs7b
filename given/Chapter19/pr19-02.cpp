// This program builds a binary tree with 5 nodes.
// The nodes are displayed with inorder, preorder, 
// and postorder algorithms.
#include <iostream>
#include "IntBinaryTree.h"
using namespace std;

int main()
{
   IntBinaryTree tree;
   cout << "Inserting the numbers 5 8 3 12 9.\n\n";
   tree.insert(5);
   tree.insert(8);
   tree.insert(3);
   tree.insert(12);
   tree.insert(9);
   
   cout << "Inorder traversal:  ";
   tree.showInOrder();
	
   cout << "\n\nPreorder traversal:  ";
   tree.showPreOrder();
	
   cout << "\n\nPostorder traversal:  ";
   tree.showPostOrder();
   return 0;
}