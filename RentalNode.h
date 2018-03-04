
#ifndef ASSIGNMENT4_RENTALNODE_H
#define ASSIGNMENT4_RENTALNODE_H

#include "Item.h"

// RentalNode is used to keep track of an individual customer's
// transactions and whether the item was borrowed or returned.
// This class is used only as a basis for keeping
// the transactions organize. It does not serve any other purpose
// so it does not include many features.

class RentalNode{

private:
    Item* item; // the particular item rented
    bool returned; //signifies if borrowed or returned
    RentalNode* nextRental; //next rental in history

public:

    //constructor
    RentalNode();

    // destructor
    ~RentalNode();

    // signifies if returned.
    // returns true if a return. false if borrow
    bool wasReturned();

    // prints the information about the item in rental history
    // const because Item is stored in pointer and we dont want
    // to mess with data
    void printItem() const;
};

#endif //ASSIGNMENT4_RENTALNODE_H
