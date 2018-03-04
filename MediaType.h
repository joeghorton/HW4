
#ifndef ASSIGNMENT4_MEDIATYPE_H
#define ASSIGNMENT4_MEDIATYPE_H

#include "Category.h"
#include <vector>
using namespace std;

// Media Type is used to categorize the different types of media
// stored in the inventory. The identifier is used to check each
// item to see if they are a correct media type. Essentially, this
// is used to idenfity its position in the inventory list and act as
// a filter for invalid identifiers.

class MediaType {

private:
    char id; //used to categorize the media type
    vector<Category> categories; //stores all categories of particular type

public:

    //empty constructor
    MediaType(); // Maybe we don't need this?

    MediaType(char mediaID);

    // destructor for memory delete
    ~MediaType();

    //print media type
    void printMedia();

    // returns media type identifier
    char getIdentifier();

    //renames media type id. Not necessary, just added feature
    void setIdentifier(char mediaID);

    bool addCategory(char categID);

};

MediaType::MediaType() {

}

MediaType::MediaType(char mediaID) {
    this->id = mediaID;
}

MediaType::~MediaType() {

}

void MediaType::printMedia() {

}

char MediaType::getIdentifier() {
    return this->id;
}

void MediaType::setIdentifier(char mediaID) {
    this->id = mediaID;
}

bool MediaType::addCategory(char categID) {
    for (int i = 0; i < this->categories.size(); i++) {
        if (this->categories.at(i).getIdentifier() == categID) {
            return false;
        }
        this->categories.push_back(Category(categID));
    }
}

#endif //ASSIGNMENT4_MEDIATYPE_H
