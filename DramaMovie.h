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
    DramaMovie(string title, int stock, string director, int year) : Movie(title, stock, director, year) {};

    // destructor
    ~DramaMovie();

    // comparison method specific to this type of movie
    int compareTo(const DramaMovie &other);
};

DramaMovie::~DramaMovie() {

}

int DramaMovie::compareTo(const DramaMovie &other) {
    return 0;
}


#endif //ASSIGNMENT4_DRAMAMOVIE_H
