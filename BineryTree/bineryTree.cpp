#include "bineryTree.hpp"
#include <iostream>

SearchTree::SearchTree(){
	root = NULL;
}

SearchTree::~SearchTree(){
	destroy_tree();
}

void SearchTree::destroy_tree(BineryNode *list){
	if (list != NULL) {
		destroy_tree(list->left);
		destroy_tree(list->right);
		delete list;
	}
}

void SearchTree::InsertBineryNode(int data) {

    BineryNode *list = root;

    if (list != NULL) {
        if (data < list->data){
            if (list->left != NULL) {
                std::cout << "Insert list left: "  << " == " << data << "\n\n";
            } else {
                list->left = new BineryNode;
                list->left->data = data;
                list->left->left = NULL;
                list->left->right = NULL;
                std::cout << "Insert root left: " << " == " << data << "\n\n";
            }
        } else if (data > list->data) {
            if (list->right != NULL) {
                std::cout << "Insert list right: " << " == " << data << "\n\n";
            } else {
                list->right = new BineryNode;
                list->right->left = NULL;
                list->right->right = NULL;
                std::cout << "Insert root right: " << " == " << data << "\n\n";
            }
        }
	} else {
        root = new BineryNode;
        root->data = data;
        root->left = NULL;
        root->right = NULL;
        std::cout << "Insert root: " << " == " << data << "\n\n";
    }
}

BineryNode* SearchTree::SearchInBineryTree(int data) {

    BineryNode *list = root;

    if (list != NULL) {
		if (data == list->data) {
	        std::cout << "Search by if equal than root data : " << data << "\n";
            return list;
		}

		if (data < list->data) {
            if(!list->left) {
                std::cout << "Search not found left: " << data << "\n";
            }else {
                std::cout << "Search by if less than root data : " << data << "\n";
                return list;
            }
		} else if(data > list->data) {
            if(!list->right) {
                std::cout << "Search not found right: " << data << "\n";
            }else {
                std::cout << "Search by if greater than root data : " << data << "\n";
                return list;
            }
		}

	}
}

void SearchTree::DeleteBineryNode(int data, BineryNode* list) {
    if (list != NULL) {
        if (data == list->data) {
            delete list;
            std::cout << "Deleted list!" << "\n";
        }

        if (data < list->data) {
            delete list->left;
            list->left = NULL;
            std::cout << "Deleted list left!" << "\n";
		} else if (data > list->data) {
            delete list->right;
            list->right = NULL;
            std::cout << "Deleted list right!" << "\n";
		}
	}
}

void SearchTree::DeleteBineryNode(int data) {
    DeleteBineryNode(data, root);
}

void SearchTree::destroy_tree(){
	destroy_tree(root);
}




