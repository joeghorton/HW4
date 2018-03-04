
#ifndef ASSIGNMENT4_INVENTORY_H
#define ASSIGNMENT4_INVENTORY_H
#include "Customer.h"
#include "MediaType.h"
#include <vector>
#include <iostream>
using namespace std;



class Inventory {
    static const int MAX_CUST = 10000; //customers have a 4 digit ID

private:

    //stores all customer info
    Customer* customerList[MAX_CUST];

    // stores first level of inventory categorization
    vector<MediaType> mediaTypes;

public:
    Inventory(); //empty constructor
    ~Inventory();


    void print();

    bool addMediaType(char id); //used to add media type so then data valid

    bool addCategory(char medID, char catID); //used to add category to media

    bool isValidCategory(char medID, char catID);

    bool addCustomer(int id, string firstName, string lastName); // used to add customer to database.

    bool addItem(char medID, char catID, Item* item);

};

Inventory::Inventory() {
    //this->mediaTypes = new vector<MediaType>();
}

Inventory::~Inventory() {

}

void Inventory::print() {
    for (int i = 0; i < this->mediaTypes.size(); i++) {
        this->mediaTypes.at(i).print();
    }
    cout << "Customers:" << endl;
    for (int i = 0; i < MAX_CUST; i++) {
        if (this->customerList[i] != NULL) {
//            (*this->customerList[i]).print();
        }
    }
}

bool Inventory::addMediaType(char id) {
    for (int i = 0; i < this->mediaTypes.size(); i++) {
        if (this->mediaTypes.at(i).getIdentifier() == id) {
            return false;
        }
    }
    this->mediaTypes.push_back(MediaType(id));
    return true;
}

bool Inventory::addCategory(char medID, char catID) {
    for (int i = 0; i < this->mediaTypes.size(); i++) {
        if (this->mediaTypes.at(i).getIdentifier() == medID) {
            return this->mediaTypes.at(i).addCategory(catID);
        }
    }
    return false;
}

bool Inventory::isValidCategory(char medID, char catID) {
    for (int i = 0; i < this->mediaTypes.size(); i++) {
        if (this->mediaTypes.at(i).getIdentifier() == medID) {
            return this->mediaTypes.at(i).isValidCategory(catID);
        }
    }
    return false;
}

bool Inventory::addCustomer(int id, string firstName, string lastName) {
    if (this->customerList[id] != NULL) {
        this->customerList[id] = new Customer(id, firstName, lastName);
        return true;
    } else {
        return false;
    };
}

bool Inventory::addItem(char medID, char catID, Item* item) {
    if (item == NULL) {
        return false;
    }
    for (int i = 0; i < this->mediaTypes.size(); i++) {
        if (this->mediaTypes.at(i).getIdentifier() == medID) {
            return this->mediaTypes.at(i).addItem(catID, item);
        }
    }
    return false;
}

#endif //ASSIGNMENT4_INVENTORY_H

