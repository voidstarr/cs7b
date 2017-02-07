// This program builds a binary tree with 5 nodes.
// The search function determines if the
// value 3 is in the tree.
#include <iostream>
#include "IntBinarytree.h"
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
	
   if (tree.search(3))
      cout << "3 is found in the tree.\n";
   else
      cout << "3 was not found in the tree.\n";
   return 0;
}