
#ifndef ASSIGNMENT4_CUSTOMER_H
#define ASSIGNMENT4_CUSTOMER_H

#include "RentalNode.h"
#include <string>
#include <iostream>

// The Customer class stores all necessary information
// about each customer. It stores a unique customerdId which is used
// to locate the Customer in the customer database.
// It stores the name of the customer as well as the customers
// history.

// This class is to add a valid customer to the database.
// only valid customers can borrow/return items to the movie store

class Customer{

private:
    int customerId; //4 digit customer ID
    std::string firstName; //first name
    std::string lastName; //last name
    RentalNode* history; //history of rentals.

public:

    // simple features
    int getID();
    std::string getFirstName();
    std::string getLastName();

    // prints out customer history in order of most recently checked out
    void displayHistory();

};

#endif //ASSIGNMENT4_CUSTOMER_H
