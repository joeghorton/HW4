//
// Created by emma on 3/1/18.
//

#ifndef ASSIGNMENT4_COMEDYMOVIE_H
#define ASSIGNMENT4_COMEDYMOVIE_H

#include "Movie.h"

// This class is used for all Comedy Movies.
// It contains exactly the same information provided in the
// Movie class, but it has its own comparison method.

class ComedyMovie: public Movie {


public:

    //constructor
    ComedyMovie(string title, int stock, string director, int year) : Movie(title, stock, director, year) {};

    //destructor
    ~ComedyMovie();

    // comparison method specific to this class
    int compareTo();
    bool operator ==(const ComedyMovie& other) const;

};

bool ComedyMovie::operator ==(const ComedyMovie& other) const {
    return false;
}

#endif //ASSIGNMENT4_COMEDYMOVIE_H
