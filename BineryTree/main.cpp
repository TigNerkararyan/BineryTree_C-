#include <iostream>
#include "bineryTree.hpp"

int main(){
	SearchTree *tree = new SearchTree();

	tree->InsertBineryNode(10);
	tree->InsertBineryNode(6);
	tree->InsertBineryNode(14);
	tree->InsertBineryNode(5);
	tree->InsertBineryNode(8);
	tree->InsertBineryNode(11);
	tree->SearchInBineryTree(8);
	tree->DeleteBineryNode(14);
	tree->SearchInBineryTree(5);
	delete tree;

}
