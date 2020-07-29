#ifndef BINERYTREE_H
#define BINERYTREE_H

struct BineryNode {
    int data;
    BineryNode *left;
    BineryNode *right;
};

class SearchTree {

    public:
        SearchTree();
        ~SearchTree();

        void InsertBineryNode(int data);
        void destroy_tree();
        BineryNode* SearchInBineryTree(int data);
        void DeleteBineryNode(int data);

    private:
        void destroy_tree(BineryNode *list);
        void DeleteBineryNode(int data, BineryNode* list);
	    BineryNode *root;
};

#endif