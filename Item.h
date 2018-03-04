
#ifndef ASSIGNMENT4_ITEM_H
#define ASSIGNMENT4_ITEM_H

#include <iostream>
#include <string>

// Item class is used to as a general base to each item that is
// stored in the inventory. Each item is required to contain a
// number of copies available and a title. These are minimal
// identifiers used for each item.

// We have not included an items media type or its category
// since it is already sorted according to this information.
// This data can be easily added later on if needed.

class Item{

protected:
    int stock; //number of available copies
    std::string title; //items must have some sort of title


public:

    //constructor
    Item();

    //destructor
    ~Item();

    // returns number of these items currently in stock
    int getStock();

    //returns title
    std::string getTitle();

    //returns true if successfully borrowed.
    //may modify later to print if only error.
    bool borrowItem();

    //returns true if successfully returned.
    //may modify later to print if only error
    bool returnItem();


    // Items must be compared to one another since they need to be
    // sorted. All items will have a specific way to be sorted. Should
    // implement sort in children class.
    virtual int compareTo() = 0;


};

#endif //ASSIGNMENT4_ITEM_H
