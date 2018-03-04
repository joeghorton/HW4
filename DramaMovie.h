//
// Created by emma on 3/1/18.
//

#ifndef ASSIGNMENT4_DRAMAMOVIE_H
#define ASSIGNMENT4_DRAMAMOVIE_H

#include "Movie.h"

// This class is used for all Drama Movies.
// It contains exactly the same information provided in the
// Movie class, but it has its own comparison method.

class DramaMovie : public Movie {

public:

    // constructor
    DramaMovie();

    // destructor
    ~DramaMove();

    // comparison method specific to this type of movie
    int compareTo();
};


#endif //ASSIGNMENT4_DRAMAMOVIE_H
