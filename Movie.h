//
// Created by emma on 3/1/18.
//

#ifndef ASSIGNMENT4_MOVIE_H
#define ASSIGNMENT4_MOVIE_H
#include "Item.h"
#include <string>

// The movie class is used to store a general movie description.
// The class extends Item, because it is an item stored within the
// Movie store's inventory.
// This movie class contains the releaseYear, director, title, and number
// of copies it has in the inventory.
// This movies class contains a compareTo method to compare this movie
// with other movies. It is a generic comparison method, first comparing
// the titles, then release years. However, this should be overridden in
// more specific move classes if a different comparison is desired.

class Movie: public Item{

protected:
    int releaseYear; //year movie was released
    std::string director; //director name

public:

    // constructor
    Movie();

    //destructor
    ~Move();

    // returns name of director
    std::string getDirector();

    // returns year the movie was released
    int getReleaseYear();

    // default compare to for movie;
    // compare title then release year for generic movie.
    // Override when desired.
    int compareTo();
};


#endif //ASSIGNMENT4_MOVIE_H
