
#ifndef ASSIGNMENT4_TREENODE_H
#define ASSIGNMENT4_TREENODE_H

#include "Item.h"


// TreeNodes are used to provide a structure for organizing items
// within the category. It does not contain any features because
// we are using this class only as a way to connect items together

class TreeNode{

public:
    Item* val; // points to specific item within
    TreeNode* left; // points to TreeNodes that are 'less than' this one
    TreeNode* right; // points to TreeNodes that are 'greater than' this one

    // constructor
    TreeNode();

    // destructor
    ~TreeNode();


};

#endif //ASSIGNMENT4_TREENODE_H
