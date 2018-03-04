
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
    char identifier; //genre identifier.
    TreeNode* overallRoot; // pointer to items in this specific category

public:

    // constructor
    Category();

    //destructor.
    ~Category();

    //print the current inventory in this category.
    // traverse overall root
    void printCategory();

    // inserts item into the root.
    // pre: item is same type as other items in this category
    void insertItem();

};

#endif //ASSIGNMENT4_CATEGORY_H
