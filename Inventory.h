
#ifndef ASSIGNMENT4_INVENTORY_H
#define ASSIGNMENT4_INVENTORY_H
#include "Customer.h"
#include "MediaType.h"
#include <vector>
#include <iostream>
using namespace std;



class Inventory {
   const int MAX_CUST = 10000; //customers have a 4 digit ID

private:

    //stores all customer info
    Customer* customerList[MAX_CUST];

    // stores first level of inventory categorization
    vector<MediaType> mediaTypes;

public:
    Inventory(); //empty constructor
    ~Inventory();
    void readInInventory(std::ifstream& file); //read in inventory from file
    void readInCustomers(std::ifstream& file); //read in customers from file
    void readInCommands(std::ifstream& file); // read in commands from file

    void printInventory();

    bool addMediaType(char identifier); //used to add media type so then data valid

    bool addCategory(char indentifier); //used to add category to media

    bool addCustomer(int customerID); // used to add customer to database.

};

Inventory::Inventory() {
    //this->mediaTypes = new vector<MediaType>();
}

Inventory::~Inventory() {

}

void Inventory::readInInventory(ifstream &file) {

}

void Inventory::readInCustomers(ifstream &file) {

}

void Inventory::readInCommands(ifstream &file) {

}

void Inventory::printInventory() {

}

bool Inventory::addMediaType(char mediaID) {
    for (int i = 0; i < this->mediaTypes.size(); i++) {
        if (this->mediaTypes.at(i).getIdentifier() == mediaID) {
            return false;
        }
        this->mediaTypes.push_back(MediaType(mediaID));
    }
}

bool Inventory::addCategory(char id) {
    return false;
}

bool Inventory::addCustomer(int custID) {
    return false;
}

#endif //ASSIGNMENT4_INVENTORY_H

