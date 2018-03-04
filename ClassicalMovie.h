//
// Created by emma on 3/1/18.
//

#ifndef ASSIGNMENT4_CLASSICALMOVIE_H
#define ASSIGNMENT4_CLASSICALMOVIE_H

#include "Movie.h"
#include <vector>
using namespace std;

class ClassicalMovie: public Movie {

protected:
    int month; //month released

    // assumed that actor has first AND last name
    // will use 2 indexes to store names.
    // ex: Katherine Hepburn and Cary Grant both in movie.
    vector<string> actorNames;

public:

    //constructor
    ClassicalMovie(string title, int stock, string director, int year, int month, string actorFirst,
                   string actorLast) : Movie(title, stock, director, year) {
        this->actorNames.push_back(actorFirst);
        this->actorNames.push_back(actorLast);
        this->month = month;
    };

    //destructor
    ~ClassicalMove();

    // return month created
    int getMonth();

    // used if the same movie is read in from file multiple times
    // adds copies to sum
    void addStock(int copies);


};

ClassicalMovie::~ClassicalMove() {

}

int ClassicalMovie::getMonth() {
    return this->month;
}

void ClassicalMovie::addStock(int copies) {
    Item::addStock(copies);
}

#endif //ASSIGNMENT4_CLASSICALMOVIE_H
