
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

public:

    // constructor
    Category();

    Category(char categID);

    //destructor.
    ~Category();

    //print the current inventory in this category.
    // traverse overall root
    void printCategory();

    // inserts item into the root.
    // pre: item is same type as other items in this category
    void insertItem(Item* item);

    char getIdentifier();

};

Category::Category() {

}

Category::Category(char categID) {
    this->id = categID;
}

Category::~Category() {

}

void Category::printCategory() {

}

void Category::insertItem(Item* item) {
    this->overallRoot = insertItem(item, this->overallRoot);
}

TreeNode* Category::insertItem(Item* item, TreeNode* root) {
    if (root == NULL) {
        root = new TreeNode();
        root->val = item;
    } else if (*root->val == *item)) {
        root->val->addStock(item->getStock());
        delete item;
    } else if ((*root->val) < *item) {

    }
}

char Category::getIdentifier() {
    return this->id;
}

#endif //ASSIGNMENT4_CATEGORY_H
