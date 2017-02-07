// This program builds a binary tree with 5 nodes.
#include <iostream>
#include "IntBinaryTree.h"
using namespace std;

int main()
{
   IntBinaryTree tree;

   cout << "Inserting numbers. ";
   tree.insert(5);
   tree.insert(8);
   tree.insert(3);
   tree.insert(12);
   tree.insert(9);
   cout << "Done.\n";
   return 0;
}

