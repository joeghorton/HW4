//
// Created by emma on 3/1/18.
//

#ifndef ASSIGNMENT4_MOVIESTORE_H
#define ASSIGNMENT4_MOVIESTORE_H

#include "Inventory.h"
#include "MovieFactory.h"

class MovieStore : public Inventory {

public:

    MovieFactory factory;

    // constructors
    MovieStore();
    ~MovieStore();

    bool addMovie(char category, int stock, string director, string title,
                  string actorFirst, string actorLast, int month, int year);

    void readInInventory(ifstream& input); //read in inventory from file
    void readInCustomers(ifstream& input); //read in customers from file
    void readInCommands(ifstream& input); // read in commands from file
    
};

MovieStore::MovieStore() {
    addMediaType('D');
    addCategory('D', 'F');
    addCategory('D', 'D');
    addCategory('D', 'C');
}

MovieStore::~MovieStore() {

}

void MovieStore::readInInventory(ifstream& input) {
    while (!input.eof()) {
        char category = ' ';
        int stock = 0, month = 0, year = 0;
        string director = "", title = "", actorFirst = "", actorLast = "";
        input >> category;
        if (isValidCategory('D', category)) {
            input.get(); // gets rid of ','
            input >> stock;
            input.get(); // gets rid of ','
            getline(input, director, ',');
            getline(input, title, ',');
            if (category == 'C') {
                input >> actorFirst;
                input >> actorLast;
                input >> month;
            }
            input >> year;
            if (!addMovie(category, stock, director, title, actorFirst, actorLast, month, year)) {
                cout << "ERROR MESSAGE 1" << endl;
            }
        } else { // invalid category
            string temp; // gets rid of line with invalid type
            getline(input, temp);
            cout << "ERROR MESSAGE 2" << endl;
        }
    }
}

void MovieStore::readInCustomers(ifstream& input) {
    string firstName = "", lastName = "";
    int id = 0;
    while (!input.eof()) {
        input >> id;
        input >> lastName;
        input >> firstName;
        addCustomer(id, firstName, lastName);
    }
}

void MovieStore::readInCommands(ifstream& input) {

}

bool MovieStore::addMovie(char category, int stock, string director, string title, string actorFirst, string actorLast,
                                int month, int year) {
    if (category == 'C') {
        return addItem('D', category, factory.createClassicalMovie(stock, director, title, actorFirst, actorLast, month, year));
    } else {
        return addItem('D', category, factory.createMovie(category, stock, director, title, year));
    }
}


#endif //ASSIGNMENT4_MOVIESTORE_H
