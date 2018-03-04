//
// Created by emma on 3/1/18.
//

#ifndef ASSIGNMENT4_CLASSICALMOVIE_H
#define ASSIGNMENT4_CLASSICALMOVIE_H

#include "Movie.h"
#include <vector>

class ClassicalMovie: public Movie {

protected:
    int month; //month released

    // assumed that actor has first AND last name
    // will use 2 indexes to store names.
    // ex: Katherine Hepburn and Cary Grant both in movie.
    std::vector<std::string> actorNames;

public:

    //constructor
    ClassicalMovie();

    //destructor
    ~ClassicalMove();

    // return month created
    int getMonth();

    // used if the same movie is read in from file mutiple times
    // adds copies to sum
    void addStock(int copies);


};

#endif //ASSIGNMENT4_CLASSICALMOVIE_H
