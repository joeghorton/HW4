
#ifndef ASSIGNMENT4_CATEGORY_H
#define ASSIGNMENT4_CATEGORY_H
#include "MediaType.h"
#include "TreeNode.h"

// The category class is used as the second part of a
// 2 part organizer. This class is used to only store
// items that are of the same media type and of the
// same category. This means that the items use the same
// comparison values and can be inserted in a specific
// sorted order

class Category {

private:
    char id; //genre identifier.
    TreeNode* overallRoot; // pointer to items in this specific category

    // helper methods
    TreeNode* insertItem(Item* item, TreeNode* root);
    void print(TreeNode* root);

public:

    // constructor
    Category();

    Category(char categID);

    //destructor.
    ~Category();

    //print the current inventory in this category.
    // traverse overall root
    void print();

    // inserts item into the root.
    // pre: item is same type as other items in this category
    void insertItem(Item* item);

    char getIdentifier();

};

Category::Category() {

}

Category::Category(char categID) {
    this->id = categID;
    this->overallRoot = NULL;
}

Category::~Category() {

}

char Category::getIdentifier() {
    return this->id;
}

void Category::print() {
    cout << this->id << endl;
    print(this->overallRoot);
}

void Category::print(TreeNode* root) {
    if (root != NULL) {
        print(root->left);
        root->item->print();
        print(root->right);
    }
}

void Category::insertItem(Item* item) {
    this->overallRoot = insertItem(item, this->overallRoot);
}

TreeNode* Category::insertItem(Item* item, TreeNode* root) {
    if (root == NULL) {
        root = new TreeNode();
        root->item = item;
    } else if (*root->item < *item) {
        root->left = insertItem(item, root->left);
    } else if (*root->item > *item) {
        root->right = insertItem(item, root->right);
    } else { // items are equal
        root->item->addStock(item->getStock());
        //delete item;
    }
    return root;
}

#endif //ASSIGNMENT4_CATEGORY_H
