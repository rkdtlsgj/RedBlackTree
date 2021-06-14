#include <stdio.h>
#include "RedBlackTree.h"


void main()
{
	RedBlackTree Tree;

	Tree.InsertNode(15);
	Tree.InsertNode(11);
	Tree.InsertNode(12);
	Tree.InsertNode(5);
	Tree.InsertNode(6);
	Tree.InsertNode(4);
	Tree.InsertNode(7);
	Tree.InsertNode(20);
	Tree.InsertNode(18);
	Tree.InsertNode(25);
	Tree.InsertNode(10);
	Tree.InsertNode(19);

	Tree.InorderPirnt();
}